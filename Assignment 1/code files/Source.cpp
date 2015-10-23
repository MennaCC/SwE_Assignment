
#pragma
#include <iostream>
#include <string.h>
#include "Move.h"
#include "BankAccount.h"
#include "Person.h"

using namespace std;

void main()
{
	cout<<"\n************************************************************\n";
	cout<<"*		Q1: BankAccount Class Test			\n";
	cout<<"************************************************************\n\n";

	BankAccount BankAccount_test("Menna", "3694", 7000 );
	BankAccount_test.ShowAccountInfo();
	cout<<"\n";
	BankAccount test2 ("Shinichi");
	test2.ShowAccountInfo();

	cout<<"\n************************************************************\n";
	cout<<"*		Q2: Person Class Test					\n";
	cout<<"************************************************************\n\n";

	Person One;
	Person Two("Menna");
	Person Three("Shinichi","Kudo");

	cout<<"person one: ";
	One.show();
	One.showFormal();

	cout<<"\nperson two: ";
	Two.show();
	Two.showFormal();

	cout<<"\nPerson three: ";
	Three.show();
	Three.showFormal();




	cout<<"\n************************************************************\n";
	cout<<"*		Q6: Move Class Test					\n";
	cout<<"************************************************************\n\n";

	Move m1(1,2);
	Move m2(3);
	Move m3;

	m3 = m1.add(m2);				
	m3.showMove();
	m3.reset(2,3);
	m3.showMove();


}