#include "ChangeClassificationTransaction.h"
#include "Employee.h"

void ChangeClassificationTransaction::Change(Employee& e)
{
	e.SetClassification(GetClassification());
	e.SetSchedule(GetSchedule());
}
