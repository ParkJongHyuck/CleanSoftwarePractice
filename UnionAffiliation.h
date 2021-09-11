#ifndef UNIONAFFILIATION_H
#define UNIONAFFILIATION_H

#include <vector>

#include "Affiliation.h"

class ServiceCharge;

class UnionAffiliation : public Affiliation
{
public:
	UnionAffiliation(float charge) : itsCharge(charge)
	{

	}
	virtual ~UnionAffiliation();

	ServiceCharge* GetServiceCharge(long date);

	void AddServiceCharge(long date, float charge);

private:
	float itsCharge;
	std::vector<ServiceCharge*> itsServiceCharges;
};

#endif