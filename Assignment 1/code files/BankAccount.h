#include <string>
#include <iostream>
using namespace std;


class BankAccount 
{
private:
	string depositerName;
	string accountNo;
	float balance;

	void updateBalance(float amount){
		balance = balance + amount;
	}
	bool checkValidAmount(float amount){
		if(amount < 0){
			return false;
		} 
		return true;
	}

public:
	//Constructor 
	BankAccount(string name){
		depositerName = name;
		balance = 0;
	}
	BankAccount (string depName, string AccountNo, float Balance){
		depositerName = depName;
		accountNo = AccountNo;
		balance = Balance;
	}

	//prototypes
	void ShowAccountInfo();
	void deposit(float depositAmmount);
	void withdraw(float withdrawalAmount);
};