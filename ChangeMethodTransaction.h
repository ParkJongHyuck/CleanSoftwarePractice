#ifndef CHANGEMETHODTRANSACTION_H
#define CHANGEMETHODTRANSACTION_H

#include "ChangeEmployeeTransaction.h"

class PaymentMethod;

class ChangeMethodTransaction : public ChangeEmployeeTransaction
{
public:
	ChangeMethodTransaction(int empId) : ChangeEmployeeTransaction(empId) {}
	virtual ~ChangeMethodTransaction() {}

	virtual void Change(Employee& e);
	virtual PaymentMethod* GetMethod() = 0;
};

#endif