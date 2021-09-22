#include "ChangeUnaffiliatedTransaction.h"
#include "NoAffiliation.h"

Affiliation* ChangeUnaffiliatedTransaction::GetAffiliation()
{
    return new NoAffiliation();
}
