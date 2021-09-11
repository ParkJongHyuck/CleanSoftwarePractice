#ifndef SERVICECHARGETRANSACTION_H
#define SERVICECHARGETRANSACTION_H

#include "Transaction.h"

class ServiceChargeTransaction : public Transaction
{
public:
	ServiceChargeTransaction(int memberId, long date, float charge) :
		itsMemberId(memberId), itsDate(date), itsCharge(charge)
	{}
	virtual ~ServiceChargeTransaction();

	virtual void Execute();

private:
	int itsMemberId;
	long itsDate;
	float itsCharge;
};

#endif