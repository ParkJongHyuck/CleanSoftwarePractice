#ifndef COMMISSIONEDCLASSIFICATION_H
#define COMMISSIONEDCLASSIFICATION_H

#include <vector>
#include "PaymentClassification.h"

class SalesReceipt;

class CommissionedClassification : public PaymentClassification
{
public:
	CommissionedClassification() {}
	virtual ~CommissionedClassification();

	SalesReceipt* GetReceipt(long date);
private:
	std::vector<SalesReceipt*> itsReceipts;
};

#endif