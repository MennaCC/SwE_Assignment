#pragma 
#include "BankAccount.h"
#include <iostream>

using namespace std;

	void BankAccount:: deposit(float depositAmmount){
		checkValidAmount(depositAmmount);
		updateBalance(depositAmmount);
	}
	void BankAccount::withdraw(float withdrawalAmmount){
		bool valid = checkValidAmount(withdrawalAmmount);
		if(valid && withdrawalAmmount <= balance){
			updateBalance(withdrawalAmmount * (-1));
		}
		else
		{
			cout<<"Not enough credit, al you have is: %f please re-enter the required amount" << balance<< "\n";

		}
	}
	void BankAccount::ShowAccountInfo(){
		cout<<"Name: "<<depositerName<<"\nAccountNo: "<<accountNo<<"\nBalance: "<<balance<<"\n";
	}