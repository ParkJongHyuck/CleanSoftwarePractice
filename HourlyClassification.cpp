#include "HourlyClassification.h"
#include "TimeCard.h"

HourlyClassification::~HourlyClassification()
{
}

void HourlyClassification::AddTimeCard(TimeCard* tc)
{
	itsTimeCards.emplace_back(tc);
}

TimeCard* HourlyClassification::GetTimeCard(long date)
{
	auto timecard = std::find_if(itsTimeCards.begin(), itsTimeCards.end(), [&date](const TimeCard* tc) {return tc->GetDate() == date; });
	if (timecard == itsTimeCards.end())
		return nullptr;
	else
		return *timecard;
}

float HourlyClassification::GetHourlyRate() const
{
	return itsHourlyRate;
}
