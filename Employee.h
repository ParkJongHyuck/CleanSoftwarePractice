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

	PaymentClassification* GetClassification() const;
	PaymentSchedule* GetSchedule() const;
	PaymentMethod* GetMethod() const;
	string GetName() const;
	
private:
	PaymentClassification* itsClassification;
	PaymentMethod* itsMethod;
	PaymentSchedule* itsSchedule;

	int itsEmpId;
	string itsEmpName;
	string itsEmpAddress;
};


#endif // !EMPLOYEE_H

