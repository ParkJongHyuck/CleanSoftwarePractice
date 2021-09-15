#include "ChangeCommissionedTransaction.h"
#include "CommissionedClassification.h"
#include "BiweeklySchedule.h"

PaymentClassification* ChangeCommissionedTransaction::GetClassification()
{
    return new CommissionedClassification(itsSalary,itsCommissionedRate);
}

PaymentSchedule* ChangeCommissionedTransaction::GetSchedule()
{
    return new BiweeklySchedule();
}
