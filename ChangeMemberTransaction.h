#ifndef CHANGEMEMBERTRANSACTION_H
#define CHANGEMEMBERTRANSACTION_H

#include "ChangeAffiliationTransaction.h"

class ChangeMemberTransaction : public ChangeAffiliationTransaction
{
public:
	ChangeMemberTransaction(int empId, int memberId, float dues) :
		ChangeAffiliationTransaction(empId), itsDues(dues)
	{

	}

	virtual Affiliation* GetAffiliation();
private:
	float itsDues;
};

#endif