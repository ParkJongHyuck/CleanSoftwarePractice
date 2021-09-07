#include "DeleteEmployeeTransaction.h"
#include "PayrollDatabase.h"

extern PayrollDatabase GpayrollDatabase;

void DeleteEmployeeTransaction::Execute()
{
	GpayrollDatabase.DeleteEmployee(itsEmpId);
}
