#pragma 
#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

void Person::show() const{
	cout<<fname<<" "<<lname<<"\n";
}
void Person::showFormal() const{
	cout<<lname<<" "<<fname<<"\n";
}

