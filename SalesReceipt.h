#ifndef SALESRECEIPT_H
#define SALESRECEIPT_H

class SalesReceipt
{
public:
	SalesReceipt(long date, int amount) :
		itsDate(date), itsAmount(amount)
	{}

	inline long GetDate() { return itsDate; }
	inline int GetAmount() { return itsAmount; }
private:
	long itsDate;
	int itsAmount;
};

#endif