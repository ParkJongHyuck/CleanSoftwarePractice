#ifndef CHANGESALARIEDTRANSACTION_H
#define CHANGESALARIEDTRANSACTION_H

#include "ChangeClassificationTransaction.h"

class ChangeSalariedTransaction : public ChangeClassificationTransaction
{
public:
	ChangeSalariedTransaction(int empId, float salary) : ChangeClassificationTransaction(empId), itsSalary(salary) {}
	virtual ~ChangeSalariedTransaction() {}
	
	virtual PaymentClassification* GetClassification();
	virtual PaymentSchedule* GetSchedule();

private:
	float itsSalary;
};

#endif