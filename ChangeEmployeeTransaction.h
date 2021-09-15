#ifndef CHANGEEMPLOYEETRANSACTION_H
#define CHANGEEMPLOYEETRANSACTION_H

#include "Transaction.h"

class Employee;

class ChangeEmployeeTransaction : public Transaction
{
public:
	ChangeEmployeeTransaction(int empId) : itsEmpId(empId) { }
	virtual ~ChangeEmployeeTransaction() {}

	void Execute();
	virtual void Change(Employee&) = 0;

private:
	int itsEmpId;
};

#endif