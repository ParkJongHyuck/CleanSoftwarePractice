#ifndef SERVICECHARGE_H
#define SERVICECHARGE_H

class ServiceCharge
{
public:
	ServiceCharge(long date, float charge) :
		itsDate(date), itsAmount(charge)
	{}

	long GetDate();
	float GetAmount();
private:
	long itsDate;
	float itsAmount;
};

#endif