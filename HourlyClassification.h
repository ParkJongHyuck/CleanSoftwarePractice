#ifndef HOURLYCLASSIFICATION_H
#define HOURLYCLASSIFICATION_H

#include "PaymentClassification.h"
#include <vector>
#include <algorithm>

class TimeCard;

class HourlyClassification : public PaymentClassification
{
public:
	HourlyClassification(float hourlyRate) :itsHourlyRate(hourlyRate) {}
	virtual ~HourlyClassification();

	void AddTimeCard(TimeCard* tc);
	
	TimeCard* GetTimeCard(long date);
	float GetHourlyRate() const;

private:
	std::vector<TimeCard*> itsTimeCards;
	float itsHourlyRate;
};

#endif