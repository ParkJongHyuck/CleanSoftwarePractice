#ifndef ADDEMPLOYEETRANSACTION_H
#define ADDEMPLOYEETRANSACTION_H

// ���� �����Լ� GetClassification �� GetSchedule �� ���� �ڱ� �ڽ����κ��� �Ļ��� ��ü�� ������ ������
// Execute �Լ����� �ൿ�� ������. (���ø� �޼ҵ� ����)
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



