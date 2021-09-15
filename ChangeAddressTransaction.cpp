#include "ChangeAddressTransaction.h"
#include "Employee.h"

void ChangeAddressTransaction::Change(Employee& e)
{
	e.SetAddress(itsAddress);
}
