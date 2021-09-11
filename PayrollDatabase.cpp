#include <iostream>

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

Employee* PayrollDatabase::GetMember(int memberId)
{
	return itsMembers[memberId];
}

void PayrollDatabase::AddEmployee(int empId, Employee* e)
{
	itsEmployees[empId] = e;
}

void PayrollDatabase::AddUnionMember(int memberId, Employee* e)
{
	itsMembers[memberId] = e;
}

void PayrollDatabase::DeleteEmployee(int empId)
{
	itsEmployees.erase(empId);
}

void PayrollDatabase::Clear()
{
	itsEmployees.clear();
}
