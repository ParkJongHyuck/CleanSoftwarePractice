#ifndef COMMISSIONEDCLASSIFICATION_H
#define COMMISSIONEDCLASSIFICATION_H

#include <vector>
#include "PaymentClassification.h"

class CommissionedClassification : public PaymentClassification
{
public:
	CommissionedClassification() {}
	virtual ~CommissionedClassification();

private:
	std::vector<SalesReceipt*>
};

#endif