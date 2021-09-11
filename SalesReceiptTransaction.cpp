#include "SalesReceiptTransaction.h"
#include "PayrollDatabase.h"
#include "Employee.h"
#include "CommissionedClassification.h"
#include "SalesReceipt.h"

extern PayrollDatabase GpayrollDatabase;

SalesReceiptTransaction::~SalesReceiptTransaction()
{
}

void SalesReceiptTransaction::Execute()
{
	Employee* e = GpayrollDatabase.GetEmployee(itsEmpId);
	PaymentClassification* pc = e->GetClassification();
	CommissionedClassification* cc = dynamic_cast<CommissionedClassification*>(pc);
	SalesReceipt* receipt = new SalesReceipt(itsDate, itsAmount);
	cc->AddReceipt(receipt);
}
