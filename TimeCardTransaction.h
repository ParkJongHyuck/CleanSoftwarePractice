#ifndef TIMECARDTRANSACTION_H
#define TIMECARDTRANSACTION_H

#include "Transaction.h"

class TimeCardTransaction : public Transaction
{
public:
	TimeCardTransaction(long date, double hours, int empId) :
		itsDate(date), itsHours(hours), itsEmpId(empId)
	{}
	virtual ~TimeCardTransaction();

	virtual void Execute();

private:
	long itsDate;
	double itsHours;
	int itsEmpId;
};

#endif