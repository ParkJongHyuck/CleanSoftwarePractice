#include "ChangeHourlyTransaction.h"
#include "HourlyClassification.h"
#include "WeeklySchedule.h"

PaymentClassification* ChangeHourlyTransaction::GetClassification()
{
	return new HourlyClassification(itsHourlyRate);
}

PaymentSchedule* ChangeHourlyTransaction::GetSchedule()
{
	return new WeeklySchedule();
}
