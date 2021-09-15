#include "AddCommissionedEmployee.h"
#include "BiweeklySchedule.h"
#include "CommissionedClassification.h"

PaymentClassification* AddCommissionedEmployee::GetClassification() const
{
    return new CommissionedClassification(itsSalary, itsCommissionRate);
}

PaymentSchedule* AddCommissionedEmployee::GetSchedule() const
{
    return new BiweeklySchedule();
}
