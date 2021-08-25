#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class PaymentClassification;
class PaymentSchedule;
class PaymentMethod;

class Employee
{
public:
	Employee(int empId, string empName, string empAddress);
	void SetClassification(PaymentClassification*);
	void SetSchedule(PaymentSchedule*);
	void SetMethod(PaymentMethod*);
};


#endif // !EMPLOYEE_H

