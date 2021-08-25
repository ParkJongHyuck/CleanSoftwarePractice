#ifndef ADDEMPLOYEETRANSACTION_H
#define ADDEMPLOYEETRANSACTION_H

// 순수 가상함수 GetClassification 및 GetSchedule 을 통해 자기 자신으로부터 파생된 객체의 정보를 얻어오며
// Execute 함수에서 행동을 정의함. (템플릿 메소드 패턴)
#include "Transaction.h"
#include <string>

using namespace std;

class PaymentClassification;
class PaymentSchedule;

class AddEmployeeTransaction : public Transaction
{
public:
	virtual ~AddEmployeeTransaction();
	AddEmployeeTransaction(int empId, string name, string address);

	virtual PaymentClassification* GetClassification() const = 0;
	virtual PaymentSchedule* GetSchedule() const = 0;
	virtual void Execute();

private:
	int itsEmpId;
	string itsName;
	string itsAddress;
};

#endif // !ADDEMPLOYEETRANSACTION_H



