#ifndef CHANGEMEMBERTRANSACTION_H
#define CHANGEMEMBERTRANSACTION_H

#include "ChangeAffiliationTransaction.h"

class ChangeMemberTransaction : public ChangeAffiliationTransaction
{
public:
	ChangeMemberTransaction(int empId, int memberId, float dues) :
		ChangeAffiliationTransaction(empId), itsMemberId(memberId), itsDues(dues)
	{

	}

	virtual Affiliation* GetAffiliation();
	virtual void RecordMembership(Employee* e);
private:
	float itsMemberId;
	float itsDues;
};

#endif