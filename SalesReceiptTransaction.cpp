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
	if (e)
	{
		PaymentClassification* pc = e->GetClassification();
		CommissionedClassification* cc = dynamic_cast<CommissionedClassification*>(pc);
		if (cc)
		{
			SalesReceipt* receipt = new SalesReceipt(itsDate, itsAmount);
			cc->AddReceipt(receipt);
		}
		else
		{
			throw("To Add Sales Receipt, MUST apply to Commissioned Classification");
		}
	}
	else
	{
		throw("no such employee");
	}
}
