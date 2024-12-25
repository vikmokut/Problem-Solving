#ifndef BANK_H
#define BANK_H

class BankAccount {
	public:
		BankAccount ();
	protected:
		string acctName;
		char acctNumber[10];
	private:
		int acctBalance;
	public:
		void openAccount();
		void checkBalance();
		void acctdeposit();
		void acctWithdraw();
}

#endif
