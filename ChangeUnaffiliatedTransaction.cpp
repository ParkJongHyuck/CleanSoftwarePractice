#include "ChangeUnaffiliatedTransaction.h"
#include "NoAffiliation.h"
#include "Employee.h"
#include "UnionAffiliation.h"
#include "PayrollDatabase.h"

extern PayrollDatabase GpayrollDatabase;


Affiliation* ChangeUnaffiliatedTransaction::GetAffiliation()
{
    return new NoAffiliation();
}

void ChangeUnaffiliatedTransaction::RecordMembership(Employee* e)
{
    Affiliation* af = e->GetAffiliation();
    if (UnionAffiliation* uf = dynamic_cast<UnionAffiliation*>(af)) {
        int memberId = uf->GetMemberId();
        GpayrollDatabase.AddUnionMember(memberId, e);
    }
}
