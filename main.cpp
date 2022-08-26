// Author: Fransiskus Agapa
// Practices make improvement - Have Fun !!!
// :)

// ============================
// customer of a brand input brand of a pair of shoes they buy,
// quantity, and comment to buy again
// ============================

#include <iostream>
#include "Shoes.h"
#include "ValidDigit.h"
#include "CapitalWord.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::stoi;

int main()
{
    string choice;                                      // user choice
    string shoeBrand;
    string shoeQuantity;                                // will be validated as string
    bool validDigit;
    string shoesComment;
    cout << endl << "== Shoe Store Review ==" << endl << endl;

    // initial value
    Shoes initialShoes;
    cout << "Loading initial data..." << endl;
    cout << "========================" << endl;
    cout << initialShoes.ToJson() << endl;
    cout << "  " << initialShoes.ToString() << endl;
    cout << "========================" << endl << endl;

    // brand
    cout << "Input name of the shoe brand: ";
    while(shoeBrand.size() == 0)
    {
        cin >> shoeBrand;
    }
    Capitalize(shoeBrand);
    cout << endl;

    // quantity
    cout << "Input the quantity of pair of shoes you purchased: ";
    while(shoeQuantity.size() == 0)
    {
        cin >> shoeQuantity;
    }
    validDigit = Validate(shoeQuantity);
    if(!validDigit)
    {
        cout << "\n[ Invalid shoes quantity ]" << endl;
        shoeQuantity = "-1";                                    // set to default value
    }
    cout << endl;

    // comment
    cout << "Would you like to purchase another pair of shoes with the brand in the future (yes/no): ";
    while(shoesComment.size() == 0)
    {
        cin >> shoesComment;
    }
    validDigit = Validate(shoesComment);
    if(!validDigit)                                           // if input not digit then capitalize
    {
        Capitalize(shoesComment);
    }
    cout << endl;

    Shoes updatedShoes(shoeBrand, stoi(shoeQuantity));
    updatedShoes.SetComment(shoesComment);

    cout << "Loading updated data..." << endl;
    cout << "========================" << endl;
    cout << updatedShoes.ToJson() << endl;
    cout << "  " << updatedShoes.ToString() << endl;
    cout << "========================" << endl;

    return 0;
}
