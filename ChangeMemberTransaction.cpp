#include "ChangeMemberTransaction.h"
#include "UnionAffiliation.h"

Affiliation* ChangeMemberTransaction::GetAffiliation()
{
    return new UnionAffiliation(itsDues);
}
