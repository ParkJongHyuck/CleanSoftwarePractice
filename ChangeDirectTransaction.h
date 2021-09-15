#ifndef CHANGEDIRECTTRANSACTION_H
#define CHANGEDIRECTTRANSACTION_H

#include "ChangeMethodTransaction.h"

class ChangeDirectTransaction : public ChangeMethodTransaction
{
public:
	ChangeDirectTransaction(int empId) : ChangeMethodTransaction(empId) {}
	virtual PaymentMethod* GetMethod();
};

#endif