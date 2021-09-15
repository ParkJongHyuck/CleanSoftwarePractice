#include "ChangeMethodTransaction.h"
#include "PayrollDatabase.h"
#include "Employee.h"

void ChangeMethodTransaction::Change(Employee& e)
{
	e.SetMethod(GetMethod());
}
