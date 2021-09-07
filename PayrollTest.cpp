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

void assert(bool b)
{
	static int testNumber = 0;
	std::cout<<testNumber++<<"] " << boolalpha << b << std::endl;
}
void assert(void* obj)
{
	assert(obj != nullptr);
}
void assertEquals(double a, double b, double epsilon)
{
	assert(abs(a - b) < epsilon);
}

extern PayrollDatabase GpayrollDatabase;

void PayrollTest::TestAddSalariedEmployee()
{
	std::cout << "Add Salaried Employee test" << std::endl;

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
	std::cout << "Add Hourly Employee test" << std::endl;

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
	std::cout << "Add Commissioned Employee Test" << std::endl;

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
	AddCommissionedEmployee t(empId, "Lance", "Home", 2500, 3.2);
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
