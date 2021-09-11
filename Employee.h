#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class PaymentClassification;
class PaymentSchedule;
class PaymentMethod;
class Affiliation;

class Employee
{
public:
	Employee(int empId, string empName, string empAddress);
	void SetClassification(PaymentClassification*);
	void SetSchedule(PaymentSchedule*);
	void SetMethod(PaymentMethod*);
	void SetAffiliation(Affiliation*);

	PaymentClassification* GetClassification() const;
	PaymentSchedule* GetSchedule() const;
	PaymentMethod* GetMethod() const;
	Affiliation* GetAffiliation() const;
	string GetName() const;
	
private:
	PaymentClassification* itsClassification;
	PaymentMethod* itsMethod;
	PaymentSchedule* itsSchedule;
	Affiliation* itsAffiliation;

	int itsEmpId;
	string itsEmpName;
	string itsEmpAddress;
};


#endif // !EMPLOYEE_H

