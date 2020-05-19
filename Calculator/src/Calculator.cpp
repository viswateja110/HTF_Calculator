#include <stdlib.h>
#include <iostream>
#include "Calculator.h"
using namespace std;

Calculator::Calculator(float val1, float val2){
	a = val1;
	b = val2;
}
float Calculator::add(){
	return a+b;
}

float Calculator::subtract(){
	return b-a;
}

float Calculator::multiply(){
	return a*b;
}

float Calculator::divide(){
	if(b != 0){
		return a/b;
	}
	else{
		cout<<"divide by zero exception"<<endl;
		exit(0);
	}
}


