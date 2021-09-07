#ifndef HOURLYCLASSIFICATION_H
#define HOURLYCLASSIFICATION_H

#include "PaymentClassification.h"
#include <vector>
#include <algorithm>

class TimeCard;

class HourlyClassification : public PaymentClassification
{
public:
	HourlyClassification()
	{

	}
	virtual ~HourlyClassification();

	void AddTimeCard(TimeCard* tc);
	TimeCard* GetTimeCard(long date);
private:
	std::vector<TimeCard*> itsTimeCards;
};

#endif