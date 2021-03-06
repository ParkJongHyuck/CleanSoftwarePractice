#include <iostream>
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
    payrollTest->TestSalesReceiptTransaction();
    std::cout << std::endl;
    payrollTest->TestAddServiceCharge();
    std::cout << std::endl;

    payrollTest->TestChangeNameTransaction();
    std::cout << std::endl;
    payrollTest->TestChangeAddressTransaction();
    std::cout << std::endl;
    payrollTest->TestChangeHourlyTransaction();
    std::cout << std::endl;
    payrollTest->TestChangeSalariedTransaction();
    std::cout << std::endl;
    payrollTest->TestChangeCommissionedTransaction();
    std::cout << std::endl;

    payrollTest->TestChangeDirectTransaction();
    std::cout << std::endl;
    payrollTest->TestChangeMailTransaction();
    std::cout << std::endl;

    payrollTest->TestChangeUnAffiliationTransaction();
    std::cout << std::endl;
    payrollTest->TestChangeMemberTransaction();
    std::cout << std::endl;
}