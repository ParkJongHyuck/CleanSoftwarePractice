#include "PayrollDatabase.h"
#include "Employee.h"

PayrollDatabase GpayrollDatabase;

PayrollDatabase::~PayrollDatabase()
{
}

Employee* PayrollDatabase::GetEmployee(int empId)
{
	return itsEmployees[empId];
}

void PayrollDatabase::AddEmployee(int empId, Employee* e)
{
	itsEmployees[empId] = e;
}

void PayrollDatabase::Clear()
{
	itsEmployees.clear();
}
