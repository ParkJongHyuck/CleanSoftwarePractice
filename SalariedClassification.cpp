#include "SalariedClassification.h"

SalariedClassification::SalariedClassification(float salary) :
	itsSalary(salary)
{
}

float const SalariedClassification::GetSalary()
{
	return itsSalary;
}
