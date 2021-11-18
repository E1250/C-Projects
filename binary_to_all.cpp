#include <iostream>
#include <stack>
#include <sstream>
#include <math.h>

using namespace std;

class Binary_To_All{
    public:void binaryToDecimal(int value){
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
         finalValue= finalValue +(num*pow(2,stringValue.length()-1-counter));
     }
     cout<<"Decimal: "<<finalValue<<endl;

    Decimal_To_All(1,finalValue).convertToHexa(finalValue);
    Decimal_To_All(1,finalValue).convertToOctal(finalValue);
    }
};