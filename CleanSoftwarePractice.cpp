﻿#include <iostream>
#include "PayrollTest.h"

int main()
{
    PayrollTest* payrollTest = new PayrollTest();
    payrollTest->TestAddSalariedEmployee();
    std::cout<< std::endl;
    payrollTest->TestAddHourlyEmployee();
    std::cout << std::endl;
    payrollTest->TestAddCommissionedEmployee();
    std::cout << std::endl;

    payrollTest->TestDeleteEmployee();
    std::cout << std::endl;
    payrollTest->TestTimeCardTransaction();
    std::cout << std::endl;
}