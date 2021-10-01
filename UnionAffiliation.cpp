#include <algorithm>

#include "UnionAffiliation.h"
#include "ServiceCharge.h"

UnionAffiliation::~UnionAffiliation()
{
}

ServiceCharge* UnionAffiliation::GetServiceCharge(long date)
{
    auto serviceCharge = std::find_if(itsServiceCharges.begin(), itsServiceCharges.end(), [&date](ServiceCharge* sc) {
        return sc->GetDate() == date;
        });
    return *serviceCharge;
}

void UnionAffiliation::AddServiceCharge(long date, float amount)
{
    ServiceCharge* newServiceCharge = new ServiceCharge(date, amount);
    itsServiceCharges.emplace_back(newServiceCharge);
}
