#include "ChangeAffiliationTransaction.h"
#include "Affiliation.h"
#include "Employee.h"
#include "PayrollDatabase.h"

extern PayrollDatabase GpayrollDatabase;

void ChangeAffiliationTransaction::Change(Employee& e)
{
	RecordMembership(&e);
	e.SetAffiliation(GetAffiliation());
}
