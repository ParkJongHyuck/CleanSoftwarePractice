#include "ChangeAffiliationTransaction.h"
#include "Affiliation.h"
#include "Employee.h"
#include "PayrollDatabase.h"

extern PayrollDatabase GpayrollDatabase;

void ChangeAffiliationTransaction::Execute()
{
	Employee* e = GpayrollDatabase.GetEmployee(itsEmpId);
	
}

void ChangeAffiliationTransaction::Change(Employee& e)
{
	Affiliation* af = GetAffiliation();
	e.SetAffiliation(af);
}
