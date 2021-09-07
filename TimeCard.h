#ifndef TIMECARD_H
#define TIMECARD_H

class TimeCard
{
public:
	virtual ~TimeCard();
	TimeCard(long date, double hours) : itsDate(date), itsHours(hours) {}
	long GetDate() const { return itsDate; }
	double GetHour() const { return itsHours; }
private:
	long itsDate;
	double itsHours;
};

#endif