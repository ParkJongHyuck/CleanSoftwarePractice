#ifndef CHANGEAFFILIATIONTRANSACTION_H
#define CHANGEAFFILIATIONTRANSACTION_H

#include "ChangeEmployeeTransaction.h"	

class Affiliation;

class ChangeAffiliationTransaction : public ChangeEmployeeTransaction
{
public:
	ChangeAffiliationTransaction(int empId) :
		ChangeEmployeeTransaction(empId)
	{

	}
	virtual ~ChangeAffiliationTransaction() {}

	virtual void Change(Employee&);
	virtual Affiliation* GetAffiliation() = 0;
};

#endif