#include "ChangeSalariedTransaction.h"
#include "SalariedClassification.h"
#include "MonthlySchedule.h"

PaymentClassification* ChangeSalariedTransaction::GetClassification()
{
    return new SalariedClassification(itsSalary);
}

PaymentSchedule* ChangeSalariedTransaction::GetSchedule()
{
    return new MonthlySchedule();
}
