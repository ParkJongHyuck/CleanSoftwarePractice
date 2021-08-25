#include "SalariedClassification.h"

SalariedClassification::SalariedClassification(double salary) :
	itsSalary(salary)
{
}

double const SalariedClassification::GetSalary()
{
	return itsSalary;
}
