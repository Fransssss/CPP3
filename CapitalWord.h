// Fransiskus Agapa

#ifndef CPP3_CAPITALWORD_H
#define CPP3_CAPITALWORD_H

#include "string"
#include "cctype"

using std::islower;
using std::string;
using std::toupper;

string Capitalize(string& word)
{
    if(islower(word[0]))                      // if first char in word is lower case
    {
        word[0] = toupper(word[0]);           // make it upper case
    }
    return word;
}


#endif //CPP3_CAPITALWORD_H
