#include "ServiceChargeTransaction.h"
#include "PayrollDatabase.h"
#include "Employee.h"
#include "ServiceCharge.h"
#include "UnionAffiliation.h"

extern PayrollDatabase GpayrollDatabase;

ServiceChargeTransaction::~ServiceChargeTransaction()
{
}

void ServiceChargeTransaction::Execute()
{
	Employee* e = GpayrollDatabase.GetMember(itsMemberId);
	if (e != nullptr)
	{
		Affiliation* af = e->GetAffiliation();
		UnionAffiliation* uaf = dynamic_cast<UnionAffiliation*>(af);
		if (uaf)
		{
			uaf->AddServiceCharge(itsDate, itsAmount);
		}
		else
		{
			throw("it doesn't have Affiliation");
		}
	}
}