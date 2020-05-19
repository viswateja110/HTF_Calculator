#include <iostream>
#include "Calculator.h"
using namespace std;


int main(){
        cout<< "enter 2 values: "<<endl;
        float x,y;
        cin>>x;
        cin>>y;
        Calculator calObj(x,y);
        cout<<"Addition: "<<calObj.add()<<endl;
        cout<<"Subtraction: "<<calObj.subtract()<<endl;
        cout<<"Multiplication: "<<calObj.multiply()<<endl;
        cout<<"division: "<<calObj.divide()<<endl;
        return 0;
}

