#include "ChangeNameTransaction.h"
#include "Employee.h"
void ChangeNameTransaction::Change(Employee& e)
{
	e.SetName(itsName);
}
