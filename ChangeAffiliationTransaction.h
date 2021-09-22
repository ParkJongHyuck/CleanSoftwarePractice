#ifndef CHANGEAFFILIATIONTRANSACTION_H
#define CHANGEAFFILIATIONTRANSACTION_H

class Affiliation;

class ChangeAffiliationTransaction
{
public:
	ChangeAffiliationTransaction(int empId) : itsEmpId(empId)
	{

	}
	virtual ~ChangeAffiliationTransaction() {}

	void Execute();
	virtual Affiliation* GetAffiliation() = 0;
private:
	int itsEmpId;
};

#endif