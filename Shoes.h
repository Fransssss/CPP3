// Shoes Class definition

#ifndef CPP3_SHOES_H
#define CPP3_SHOES_H

#include "string"

using std::string;

class Shoes
{
private:
    string _brand;
    int _quantity;
    string _comment;
public:
    Shoes();                               // default constructor
    Shoes(const string& brand, const int& quantity);
    void SetComment(const string& comment);
    string ToString() const;
    string ToJson() const;
};


#endif //CPP3_SHOES_H
