#ifndef PAYROLLDATABASE_H
#define PAYROLLDATABASE_H
#include <map>

class Employee;

class PayrollDatabase
{
public:
	virtual ~PayrollDatabase();
	Employee* GetEmployee(int empId);
	Employee* GetMember(int memberId);
	void AddEmployee(int empId, Employee*);
	void AddUnionMember(int memberId, Employee* e);
	void DeleteEmployee(int empId);
	void Clear();

private:
	std::map<int, Employee*> itsEmployees;
	std::map<int, Employee*> itsMembers;
};

#endif