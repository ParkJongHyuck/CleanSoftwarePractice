#include "AddHourlyEmployee.h"
#include "HourlyClassification.h"
#include "WeeklySchedule.h"

PaymentClassification* AddHourlyEmployee::GetClassification() const
{
    return new HourlyClassification();
}

PaymentSchedule* AddHourlyEmployee::GetSchedule() const
{
    return new WeeklySchedule();
}
