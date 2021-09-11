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
};

#endif