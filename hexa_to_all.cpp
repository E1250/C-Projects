#include <iostream>
#include <stack>
#include <sstream>
#include <math.h>
// #include "decimal_to_all.cpp"
using namespace std;

class Hexa_To_All{
    public:void hexaToDecimal(int value){
    stringstream convertor; 
    int finalValue = 0;
    string stringValue;
    convertor << value; 
    convertor >> stringValue; 
     for(int counter=0;counter<=stringValue.length()-1;counter++){
         stringstream inConvertor;
         int num ;
         inConvertor << stringValue[counter];
         inConvertor >> num ;
         finalValue= finalValue +(num*pow(16,stringValue.length()-1-counter));
     }
     cout<<"Decimal: "<<finalValue<<endl;

    Decimal_To_All(1,finalValue).convertToOctal(finalValue);
    Decimal_To_All(1,finalValue).convertToBinary(finalValue);

    }
};