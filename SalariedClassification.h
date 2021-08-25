#ifndef SALARIEDCLASSIFICATION_H
#define SALARIEDCLASSIFICATION_H

#include "PaymentClassification.h"

class SalariedClassification : public PaymentClassification
{
public:
	SalariedClassification(double salary);
	double const GetSalary();
private:
	double itsSalary;
};

#endif