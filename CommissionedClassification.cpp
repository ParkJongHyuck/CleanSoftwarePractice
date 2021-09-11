#include "CommissionedClassification.h"
#include "SalesReceipt.h"

CommissionedClassification::~CommissionedClassification()
{
    for (auto&& receipt : itsReceipts)
    {
        delete receipt;
    }
}

SalesReceipt* CommissionedClassification::GetReceipt(long date)
{
    auto retval = std::find_if(itsReceipts.begin(), itsReceipts.end(), 
        [&date](SalesReceipt* receipt) {
            return receipt->GetDate() == date;
        });

    if (retval == itsReceipts.end())
    {
        return nullptr;
    }
    else
    {
        return *retval;
    }
}
