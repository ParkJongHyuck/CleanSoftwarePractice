#ifndef DELETEEMPLOYEETRANSACTION_H
#define DELETEEMPLOYEETRANSACTION_H

#include "Transaction.h"

class DeleteEmployeeTransaction : public Transaction
{
public:
	DeleteEmployeeTransaction(int empId) : itsEmpId(empId) { }
	virtual void Execute();
private:
	int itsEmpId;
};

#endif