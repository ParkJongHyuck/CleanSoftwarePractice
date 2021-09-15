#ifndef MAILMETHOD_H
#define MAILMETHOD_H

#include "PaymentMethod.h"

class MailMethod : public PaymentMethod
{
public:
	MailMethod() {}
	virtual ~MailMethod() {}
};

#endif