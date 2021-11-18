#include <iostream>
#include <stack>
#include <sstream>
#include <math.h>
using namespace std;

class Octal_To_All{
    public:void octalToDecimal(int value){
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
         finalValue= finalValue +(num*pow(8,stringValue.length()-1-counter));
     }
     cout<<"Decimal: "<<finalValue<<endl;

    Decimal_To_All(1,finalValue).convertToHexa(finalValue);
    Decimal_To_All(1,finalValue).convertToBinary(finalValue);
    }
};