#include "AddCommissionedEmployee.h"
#include "BiweeklySchedule.h"
#include "CommissionedClassification.h"

PaymentClassification* AddCommissionedEmployee::GetClassification() const
{
    return new CommissionedClassification();
}

PaymentSchedule* AddCommissionedEmployee::GetSchedule() const
{
    return new BiweeklySchedule();
}
