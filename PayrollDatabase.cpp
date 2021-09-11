#include <iostream>

#include "PayrollDatabase.h"
#include "Employee.h"

PayrollDatabase GpayrollDatabase;

PayrollDatabase::~PayrollDatabase()
{
}

Employee* PayrollDatabase::GetEmployee(int empId)
{
	Employee* e = itsEmployees[empId];
	if (e == nullptr)
	{
		std::cout << "Invalied EmpId : " << empId << std::endl;
		return nullptr;
	}
	return e;
}

void PayrollDatabase::AddEmployee(int empId, Employee* e)
{
	itsEmployees[empId] = e;
}

void PayrollDatabase::DeleteEmployee(int empId)
{
	itsEmployees.erase(empId);
}

void PayrollDatabase::Clear()
{
	itsEmployees.clear();
}
