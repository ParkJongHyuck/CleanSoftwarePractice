#ifndef DIRECTMETHOD_H
#define DIRECTMETHOD_H

#include "PaymentMethod.h"

class DirectMethod : public PaymentMethod
{
public:
	DirectMethod() {}
	virtual ~DirectMethod() {}
};

#endif