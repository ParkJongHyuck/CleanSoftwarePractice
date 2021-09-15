#ifndef CHANGEHOURLYTRANSACTION_H
#define CHANGEHOURLYTRANSACTION_H

#include "ChangeClassificationTransaction.h"

class ChangeHourlyTransaction : public ChangeClassificationTransaction
{
public:
	ChangeHourlyTransaction(int empId, float hourlyRate) : ChangeClassificationTransaction(empId), itsHourlyRate(hourlyRate) {};
	virtual ~ChangeHourlyTransaction() {}
	virtual PaymentClassification* GetClassification();
	virtual PaymentSchedule* GetSchedule();
private:
	float itsHourlyRate;
};

#endif