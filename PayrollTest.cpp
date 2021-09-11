#include "PayrollTest.h"
#include "AddSalariedEmployee.h"
#include "Employee.h"
#include "PayrollDatabase.h"
#include "SalariedClassification.h"
#include "MonthlySchedule.h"
#include "HoldMethod.h"
#include "AddHourlyEmployee.h"
#include "HourlyClassification.h"
#include "WeeklySchedule.h"
#include "AddCommissionedEmployee.h"
#include "BiweeklySchedule.h"
#include "CommissionedClassification.h"
#include "DeleteEmployeeTransaction.h"
#include "TimeCardTransaction.h"
#include "TimeCard.h"
#include "SalesReceiptTransaction.h"
#include "SalesReceipt.h"

void assert(bool b)
{
	static int testNumber = 0;
	std::cout<<testNumber++<<"] " << boolalpha << b << std::endl;
}
void assert(void* obj)
{
	assert(obj != nullptr);
}
void assertEquals(double a, double b, double epsilon = 0.00001)
{
	assert(abs(a - b) < epsilon);
}

extern PayrollDatabase GpayrollDatabase;

void PayrollTest::TestAddSalariedEmployee()
{
	cout << "Add Salaried Employee test" << endl;

	int empId = 1;
	AddSalariedEmployee t(empId, "Bob", "Home", 1000.00);
	t.Execute();

	Employee* e = GpayrollDatabase.GetEmployee(empId);
	assert("Bob" == e->GetName());

	PaymentClassification* pc = e->GetClassification();
	SalariedClassification* sc = dynamic_cast<SalariedClassification*>(pc);
	assert(sc);

	assertEquals(1000.00, sc->GetSalary(), .001);
	PaymentSchedule* ps = e->GetSchedule();
	MonthlySchedule* ms = dynamic_cast<MonthlySchedule*>(ps);
	assert(ms);

	PaymentMethod* pm = e->GetMethod();
	HoldMethod* hm = dynamic_cast<HoldMethod*>(pm);
	assert(hm);
}

void PayrollTest::TestAddHourlyEmployee()
{
	cout << "Add Hourly Employee test" << endl;

	int empId = 2;
	AddHourlyEmployee t(empId, "Tom", "Tom's Home", 40);
	t.Execute();

	Employee* e = GpayrollDatabase.GetEmployee(empId);
	assert(e->GetName() == "Tom");

	PaymentClassification* pc = e->GetClassification();
	HourlyClassification* hc = dynamic_cast<HourlyClassification*>(pc);
	assert(hc);

	PaymentSchedule* ps = e->GetSchedule();
	WeeklySchedule* ws = dynamic_cast<WeeklySchedule*>(ps);
	assert(ws);

	PaymentMethod* pm = e->GetMethod();
	HoldMethod* hm = dynamic_cast<HoldMethod*>(pm);
	assert(hm);
}

void PayrollTest::TestAddCommissionedEmployee()
{
	cout << "Add Commissioned Employee Test" << endl;

	int empId = 3;
	AddCommissionedEmployee t(empId, "Dave", "Dave's Home", 1000, 10);
	t.Execute();

	Employee* e = GpayrollDatabase.GetEmployee(empId);
	assert(e->GetName() == "Dave");

	PaymentClassification* pc = e->GetClassification();
	CommissionedClassification* cc = dynamic_cast<CommissionedClassification*>(pc);
	assert(cc);

	PaymentSchedule* ps = e->GetSchedule();
	BiweeklySchedule* bs = dynamic_cast<BiweeklySchedule*>(ps);
	assert(bs);

	PaymentMethod* pm = e->GetMethod();
	HoldMethod* hm = dynamic_cast<HoldMethod*>(pm);
	assert(hm);
}

void PayrollTest::TestDeleteEmployee()
{
	cerr << "Test Delete Emplyee" << endl;

	int empId = 3;
	AddCommissionedEmployee t(empId, "Lance", "Home", 2500, 3.2f);
	t.Execute();
	{
		Employee* e = GpayrollDatabase.GetEmployee(empId);
		assert(e);
	}
	DeleteEmployeeTransaction dt(empId);
	dt.Execute();
	{
		Employee* e = GpayrollDatabase.GetEmployee(empId);
		assert(e == 0);
	}
}

void PayrollTest::TestTimeCardTransaction()
{
	cerr << "Test Time Card Transaction" << endl;

	int empId = 2;
	AddHourlyEmployee t(empId, "Bill", "Home", 15.25f);
	t.Execute();

	TimeCardTransaction tct(2001'10'31, 8.0, empId);
	tct.Execute();

	Employee* e = GpayrollDatabase.GetEmployee(empId);
	assert(e);
	PaymentClassification* pc = e->GetClassification();
	HourlyClassification* hc = dynamic_cast<HourlyClassification*>(pc);
	assert(hc);
	TimeCard* tc = hc->GetTimeCard(2001'10'31);
	assert(tc);
	assertEquals(8.0, tc->GetHour());
}

void PayrollTest::TestSalesReceiptTransaction()
{
	cerr << "Test Sales Receipt Transaction" << endl;
	int empId = 4;
	long date = 2021'09'11;
	AddCommissionedEmployee t(empId, "Mac", "Green Home", 1000, 10);
	t.Execute();

	SalesReceiptTransaction srt(date, 10, empId);
	srt.Execute();

	Employee* e = GpayrollDatabase.GetEmployee(empId);
	assert(e);
	PaymentClassification* pc = e->GetClassification();
	CommissionedClassification* cc = dynamic_cast<CommissionedClassification*>(pc);
	assert(cc);

	SalesReceipt* sr = cc->GetReceipt(date);
	assert(sr);
	assertEquals(sr->GetAmount(), 10);
}
