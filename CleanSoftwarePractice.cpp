#include <iostream>
#include "PayrollTest.h"

int main()
{
    PayrollTest* payrollTest = new PayrollTest();
    payrollTest->TestAddSalariedEmployee();
    payrollTest->TestAddHourlyEmployee();
    payrollTest->TestAddCommissionedEmployee();

    payrollTest->TestDeleteEmployee();
}