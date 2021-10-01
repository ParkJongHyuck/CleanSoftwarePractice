#ifndef SERVICECHARGETRANSACTION_H
#define SERVICECHARGETRANSACTION_H

#include "Transaction.h"

class ServiceChargeTransaction : public Transaction
{
public:
	ServiceChargeTransaction(int memberId, long date, float amount) :
		itsMemberId(memberId), itsDate(date), itsAmount(amount)
	{}
	virtual ~ServiceChargeTransaction();

	void Execute();

private:
	int itsMemberId;
	long itsDate;
	float itsAmount;
};

#endif