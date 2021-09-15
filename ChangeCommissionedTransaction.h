#ifndef CHANGECOMMISSIONEDTRANSACTION_H
#define CHANGECOMMISSIONEDTRANSACTION_H

#include "ChangeClassificationTransaction.h"

class ChangeCommissionedTransaction : public ChangeClassificationTransaction
{
public:
	ChangeCommissionedTransaction(int empId, float salary, float commissionedRate) :
		ChangeClassificationTransaction(empId), itsSalary(salary), itsCommissionedRate(commissionedRate)
	{}
	virtual ~ChangeCommissionedTransaction() {}

	virtual PaymentClassification* GetClassification();
	virtual PaymentSchedule* GetSchedule();

private:
	float itsSalary;
	float itsCommissionedRate;
};

#endif