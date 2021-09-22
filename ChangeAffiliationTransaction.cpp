#include "ChangeAffiliationTransaction.h"
#include "Affiliation.h"
#include "Employee.h"
#include "PayrollDatabase.h"

extern PayrollDatabase GpayrollDatabase;

void ChangeAffiliationTransaction::Execute()
{
	Employee* e = GpayrollDatabase.GetEmployee(itsEmpId);
	if (e != nullptr)
	{
		Affiliation* af = GetAffiliation();
		e->SetAffiliation(af);
	}
	else
	{
		throw("there is no employee such as empId : " + itsEmpId);
	}
}
