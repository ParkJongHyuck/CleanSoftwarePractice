#include "PayrollTest.h"
#include "AddSalariedEmployee.h"
#include "Employee.h"
#include "PayrollDatabase.h"
#include "SalariedClassification.h"
#include "MonthlySchedule.h"
#include "HoldMethod.h"


void assert(bool b)
{
	std::cout <<boolalpha << b << std::endl;
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

