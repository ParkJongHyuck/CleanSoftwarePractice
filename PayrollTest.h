#ifndef PAYROLLTEST_H
#define PAYROLLTEST_H

#include <iostream>

class PayrollTest
{
public:
	void TestAddSalariedEmployee();
	void TestAddHourlyEmployee();
	void TestAddCommissionedEmployee();

	void TestDeleteEmployee();

	void TestTimeCardTransaction();
	void TestSalesReceiptTransaction();
	void TestAddServiceCharge();

	void TestChangeNameTransaction();
	void TestChangeAddressTransaction();

	void TestChangeHourlyTransaction();
	void TestChangeSalariedTransaction();
	void TestChangeCommissionedTransaction();

	void TestChangeDirectTransaction();
	void TestChangeMailTransaction();

	void TestChangeUnAffiliationTransaction();
	void TestChangeMemberTransaction();
};

#endif