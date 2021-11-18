#include <stack>
using namespace std;
#include <iostream>

class Decimal_To_All{
    public:Decimal_To_All(int notTo,int enteredValue){
        if(notTo==0){
            convertToBinary(enteredValue);
            convertToHexa(enteredValue);
            convertToOctal(enteredValue);
        }
    }
public:void convertToBinary(int num){
    stack<int> stk;
    int decimalNum = num;
    while(decimalNum != 0){
            stk.push(decimalNum%2);
            decimalNum = decimalNum/2;
    }
    cout<<"Binary : ";
    while(!stk.empty()){
        cout<<stk.top();
        stk.pop();
    }
    cout<<endl;
}
public:void convertToOctal(int num){
    stack<int> stk;
    int decimalNum = num;
    while(decimalNum != 0){
            stk.push(decimalNum%8);
            decimalNum = decimalNum/8;
    }
    cout<<"Octal : ";
    while(!stk.empty()){
        cout<< stk.top();
        stk.pop();
    }
    cout<<endl;
}
public:void convertToHexa(int num){
    stack<char> stk;
    int decimalNum = num;
    while(decimalNum != 0){
        if((decimalNum%16)>=10){
            stk.push(char(64+(decimalNum%16)-9));
        }else{
            stk.push(48+(decimalNum%16));
        }
        decimalNum = decimalNum/16;
    }
    cout<<"Hexa : ";
    while(!stk.empty()){
        cout<< stk.top();
        stk.pop();
    }
    cout<<endl;
}
};