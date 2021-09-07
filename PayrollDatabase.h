#ifndef PAYROLLDATABASE_H
#define PAYROLLDATABASE_H
#include <map>

class Employee;

class PayrollDatabase
{
public:
	virtual ~PayrollDatabase();
	Employee* GetEmployee(int empId);
	void AddEmployee(int empId, Employee*);
	void DeleteEmployee(int empId);
	void Clear();
private:
	std::map<int, Employee*> itsEmployees;
};

#endif