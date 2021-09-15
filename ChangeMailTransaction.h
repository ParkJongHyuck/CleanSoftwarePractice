#ifndef CHANGEMAILTRANSACTION_H
#define CHANGEMAILTRANSACTION_H

#include "ChangeMethodTransaction.h"

class ChangeMailTransaction : public ChangeMethodTransaction
{
public:
	ChangeMailTransaction(int empId) : ChangeMethodTransaction(empId) {}
	virtual ~ChangeMailTransaction() {}

	virtual PaymentMethod* GetMethod();
};

#endif