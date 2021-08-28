#ifndef ADDHOURLYEMPLOYEE_H
#define ADDHOURLYEMPLOYEE_H
#include "AddEmployeeTransaction.h"

class AddHourlyEmployee : public AddEmployeeTransaction
{
public:
	AddHourlyEmployee(int empId, string name, string address, int hourlyRate) :
		AddEmployeeTransaction(empId, name, address), itsHourlyRate(hourlyRate)
	{}
	virtual PaymentClassification* GetClassification() const;
	virtual PaymentSchedule* GetSchedule() const;
private:
	int itsHourlyRate;
};

#endif