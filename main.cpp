#include <iostream>
#include <stack>
#include "decimal_to_all.cpp"
#include "binary_to_all.cpp"
#include "hexa_to_all.cpp"
#include "octal_to_all.cpp"

using namespace std;

int main()
{
    int enteredValue;
    int operation;
   
    cout<<"What is the type of the Value you will enter :"<<endl;
    cout<<"1-Binary"<<endl<<"2-Octal"<<endl<<"3-Hexa"<<endl<<"4-Decimal"<<endl;
    cin>>operation;
    cout<<"Enter Number : ";
    cin>>enteredValue;

    switch (operation){
    case 1:
        Binary_To_All().binaryToDecimal(enteredValue);
        break;
    case 2:
        Octal_To_All().octalToDecimal(enteredValue);
        break;
    case 3:
        Hexa_To_All().hexaToDecimal(enteredValue);
        break;
    case 4:
        Decimal_To_All(0,enteredValue);
        break;
    default:
        break;
    }

    return 0;
}

