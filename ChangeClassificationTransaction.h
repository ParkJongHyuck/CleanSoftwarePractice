#ifndef CHANGECLASSIFICATIONTRANSACTION_H
#define CHANGECLASSIFICATIONTRANSACTION_H

#include "ChangeEmployeeTransaction.h"

class PaymentClassification;
class PaymentSchedule;

class ChangeClassificationTransaction : public ChangeEmployeeTransaction
{
public:
	ChangeClassificationTransaction(int empId) : ChangeEmployeeTransaction(empId) {}
	virtual ~ChangeClassificationTransaction() {}
	
	virtual void Change(Employee& e);
	virtual PaymentClassification* GetClassification() = 0;
	virtual PaymentSchedule* GetSchedule() = 0;
};

#endif