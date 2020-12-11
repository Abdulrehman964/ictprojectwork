#include<stdio.h>
#include<string.h>
struct checkingaccount
{
	char accountHolder_name[100];
	int account_number;
	double account_balance;
	double interest_rate;
};
int main()
{
	struct checkingaccount account;
	strcpy(account. accountHolder_name, "ABDULREHMAN");
	account. account_number = 26356;
	account. account_balance = 2387;
	account.interest_rate = 4;
	printf("Account holder name : ");
	puts(account.accountHolder_name);
	printf("Account number = %d\nAccount balance=%.4f\ninterest rate=%.4f",account.account_number,account.account_balance,account.interest_rate);
}

