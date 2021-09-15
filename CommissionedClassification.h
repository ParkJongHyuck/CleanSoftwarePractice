#ifndef COMMISSIONEDCLASSIFICATION_H
#define COMMISSIONEDCLASSIFICATION_H

#include <vector>
#include "PaymentClassification.h"

class SalesReceipt;

class CommissionedClassification : public PaymentClassification
{
public:
	CommissionedClassification(float salary, float commissionRate) : itsSalary(salary), itsCommissionRate(commissionRate) {}
	virtual ~CommissionedClassification();

	SalesReceipt* GetReceipt(long date);
	void AddReceipt(SalesReceipt* receipt);
private:
	std::vector<SalesReceipt*> itsReceipts;
	float itsCommissionRate;
	float itsSalary;
};

#endif