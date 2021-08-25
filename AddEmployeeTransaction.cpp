#include "AddEmployeeTransaction.h"
#include "HoldMethod.h"
#include "Employee.h"
#include "PayrollDatabase.h"

class PaymentMethod;
class PaymentSchedule;
class PaymentClassification;

extern PayrollDatabase GpayrollDatabase;

AddEmployeeTransaction::~AddEmployeeTransaction()
{
}

AddEmployeeTransaction::AddEmployeeTransaction(int empId, string name, string address) :
	itsEmpId(empId), itsName(name), itsAddress(address)
{
}

void AddEmployeeTransaction::Execute()
{
	PaymentClassification* pc = GetClassification();
	PaymentSchedule* ps = GetSchedule();
	PaymentMethod* pm = new HoldMethod();
	Employee* e = new Employee(itsEmpId, itsName, itsAddress);
	e->SetClassification(pc);
	e->SetSchedule(ps);
	e->SetMethod(pm);
	GpayrollDatabase.AddEmployee(itsEmpId, e);
}
