#ifndef CHANGEUNAFFILIATEDTRANSACTION_H
#define CHANGEUNAFFILIATEDTRANSACTION_H

#include"ChangeAffiliationTransaction.h"

class ChangeUnaffiliatedTransaction : public ChangeAffiliationTransaction
{
public:
	ChangeUnaffiliatedTransaction(int empId) : ChangeAffiliationTransaction(empId)
	{
	}
	virtual ~ChangeUnaffiliatedTransaction() {}

	virtual Affiliation* GetAffiliation();
	virtual void RecordMembership(Employee*);
};

#endif