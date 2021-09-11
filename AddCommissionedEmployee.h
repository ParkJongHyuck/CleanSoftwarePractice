#ifndef ADDCOMMISSIONEDEMPLOYEE_H
#define ADDCOMMISSIONEDEMPLOYEE_H

#include "AddEmployeeTransaction.h"

class AddCommissionedEmployee : public AddEmployeeTransaction
{
public:
	AddCommissionedEmployee(int empId, string name, string address, int salary, float commissionRate) :
		AddEmployeeTransaction(empId,name,address), itsSalary(salary), itsCommissionRate(commissionRate)
	{}
	virtual PaymentClassification* GetClassification() const;
	virtual PaymentSchedule* GetSchedule() const;
private:
	int itsSalary;
	float itsCommissionRate;
};

#endif