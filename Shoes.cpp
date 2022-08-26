// Shoes Class Definition

#include "Shoes.h"
#include "sstream"

using std::stringstream;

Shoes::Shoes()            // default value
{
    _brand = "No Brand";
    _quantity = -1;
    _comment = "No Comment";
}

Shoes::Shoes(const string &brand, const int &quantity)
{
    _brand = brand;
    _quantity = quantity;
}

void Shoes::SetComment(const string &comment)
{
    _comment = comment;
}

string Shoes::ToString() const
{
    stringstream toString;
    toString << "Brand: " << _brand << ", Quantity: " << _quantity << ", Comment: " << _comment;
    return toString.str();                                      // return as string
}

string Shoes::ToJson() const
{
    stringstream toJson;
    toJson << "{\"Brand\":\"" << _brand << "\", \"Quantity\":" << _quantity << ", \"Comment\":\"" << _comment << "\"}";
    return toJson.str();

}