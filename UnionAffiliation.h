#ifndef UNIONAFFILIATION_H
#define UNIONAFFILIATION_H

#include <vector>

#include "Affiliation.h"

class ServiceCharge;

class UnionAffiliation : public Affiliation
{
public:
	UnionAffiliation(float dues) : itsDues(dues)
	{

	}
	virtual ~UnionAffiliation();

	ServiceCharge* GetServiceCharge(long date);

	void AddServiceCharge(long date, float charge);

	float GetDues() { return itsDues; }

private:
	std::vector<ServiceCharge*> itsServiceCharges;
	float itsDues;
};

#endif