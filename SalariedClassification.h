#ifndef SALARIEDCLASSIFICATION_H
#define SALARIEDCLASSIFICATION_H

#include "PaymentClassification.h"

class SalariedClassification : public PaymentClassification
{
public:
	SalariedClassification(float salary);
	float const GetSalary();
private:
	float itsSalary;
};

#endif