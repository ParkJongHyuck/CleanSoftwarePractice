#ifndef UNIONAFFILIATION_H
#define UNIONAFFILIATION_H

#include <vector>

#include "Affiliation.h"

class ServiceCharge;

class UnionAffiliation : public Affiliation
{
public:
	UnionAffiliation(int memberId, float dues) : itsMemberId(memberId), itsDues(dues)
	{

	}
	virtual ~UnionAffiliation();

	ServiceCharge* GetServiceCharge(long date);

	void AddServiceCharge(long date, float charge);

	float GetDues() { return itsDues; }
	int GetMemberId() { return itsMemberId; }

private:
	std::vector<ServiceCharge*> itsServiceCharges;
	float itsDues;
	int itsMemberId;
};

#endif