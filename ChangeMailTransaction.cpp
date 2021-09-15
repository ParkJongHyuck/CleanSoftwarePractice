#include "ChangeMailTransaction.h"
#include "MailMethod.h"
PaymentMethod* ChangeMailTransaction::GetMethod()
{
	return new MailMethod();
}
