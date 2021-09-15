#ifndef CHANGEADDRESSTRANSACTION_H
#define CHANGEADDRESSTRANSACTION_H

#include<string>

#include "ChangeEmployeeTransaction.h"


class ChangeAddressTransaction : public ChangeEmployeeTransaction
{
public:
	ChangeAddressTransaction(int empId, std::string address) : ChangeEmployeeTransaction(empId), itsAddress(address)
	{}
	virtual ~ChangeAddressTransaction() {}

	virtual void Change(Employee&);

private:
	std::string itsAddress;
};

#endif