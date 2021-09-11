#ifndef SALESRECEIPTTRANSACTION_H
#define SALESRECEIPTTRANSACTION_H
#include "Transaction.h"
class SalesReceiptTransaction : public Transaction
{
public:
	SalesReceiptTransaction(long date, int amount,int empId) :
		itsDate(date), itsAmount(amount), itsEmpId(empId)
	{}
	virtual ~SalesReceiptTransaction();

	virtual void Execute();
	
private:
	long itsDate;
	int itsAmount;
	int itsEmpId;
};
#endif

