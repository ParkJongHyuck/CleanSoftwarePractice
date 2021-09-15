#ifndef CHANGENAMETRANSACTION_H
#define CHANGENAMETRANSACTION_H

#include <string>
#include "ChangeEmployeeTransaction.h"

class Employee;

class ChangeNameTransaction : public ChangeEmployeeTransaction
{
public:
	ChangeNameTransaction(int empId, std::string name) :ChangeEmployeeTransaction(empId), itsName(name) {}
	virtual ~ChangeNameTransaction() {}
	virtual void Change(Employee& e);
private:
	std::string itsName;
};

#endif