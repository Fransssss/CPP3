// Fransiskus Agapa

#ifndef CPP3_VALIDDIGIT_H
#define CPP3_VALIDDIGIT_H

#include "string"
#include "cctype"

using std::isdigit;
using std::string;

bool Validate(const string& strDigit)
{
    int validAmountDigit = strDigit.size();
    int keepTrackDigit = 0;

    for(size_t i = 0; i < strDigit.size(); ++i)
    {
        if(isdigit(strDigit[i]))
        {
            keepTrackDigit += 1;
        }
    }

    if(keepTrackDigit != validAmountDigit)      // if not all input is digit
    {
        return false;
    }
    return true;
}


#endif //CPP3_VALIDDIGIT_H
