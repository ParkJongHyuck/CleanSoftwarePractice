#include "ChangeMemberTransaction.h"
#include "UnionAffiliation.h"
#include "PayrollDatabase.h"

extern PayrollDatabase GpayrollDatabase;
Affiliation* ChangeMemberTransaction::GetAffiliation()
{
    return new UnionAffiliation(itsMemberId, itsDues);
}

void ChangeMemberTransaction::RecordMembership(Employee* e)
{
    GpayrollDatabase.AddUnionMember(itsMemberId, e);
}
