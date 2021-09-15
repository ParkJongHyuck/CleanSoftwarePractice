#include "ChangeDirectTransaction.h"
#include "DirectMethod.h"
PaymentMethod* ChangeDirectTransaction::GetMethod()
{
	return new DirectMethod();
}
