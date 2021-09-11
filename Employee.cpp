#include "Employee.h"

Employee::Employee(int empId, string empName, string empAddress) :
	itsEmpId(empId), itsEmpName(empName), itsEmpAddress(empAddress)
{
}

void Employee::SetClassification(PaymentClassification* classification)
{
	itsClassification = classification;
}

void Employee::SetSchedule(PaymentSchedule* schedule)
{
	itsSchedule = schedule;
}

void Employee::SetMethod(PaymentMethod* method)
{
	itsMethod = method;
}

void Employee::SetAffiliation(Affiliation* affiliation)
{
	itsAffiliation = affiliation;
}

PaymentClassification* Employee::GetClassification() const
{
	return itsClassification;
}

PaymentSchedule* Employee::GetSchedule() const
{
	return itsSchedule;
}

PaymentMethod* Employee::GetMethod() const
{
	return itsMethod;
}

Affiliation* Employee::GetAffiliation() const
{
	return itsAffiliation;
}

string Employee::GetName() const
{
	return itsEmpName;
}
