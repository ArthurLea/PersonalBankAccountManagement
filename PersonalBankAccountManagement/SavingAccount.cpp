#include<iostream>
using namespace std;
#include "SavingAccount.h"

void SavingAccount::recode(int date, double amount)
{
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;			//保留小数位后两位
	balance += amount;
	cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}

double SavingAccount::accumulate(int date)
{
	return accumulation + balance*(date - lastDate);
}

SavingAccount::SavingAccount(int date, int id, double rate):id(id),balance(0),rate(rate),lastDate(date),accumulation(0)
{
	cout << date << "\t#" << id << " is created" << endl;
}

int SavingAccount::getId()
{
	return id;
}

double SavingAccount::getBalance()
{
	return balance;
}

double SavingAccount::getRate()
{
	return rate;
}

SavingAccount::~SavingAccount()
{
}

void SavingAccount::deposit(int date, double amount)
{
	recode(date, amount);
}

void SavingAccount::withdraw(int date, double amount)
{
	if (amount > getBalance())
		cout << "Error:not enough money" << endl;
	else
		recode(date, -amount);
}

void SavingAccount::settle(int date)
{
	double interest = accumulate(date)*rate / 365;
	if (interest != 0)
		recode(date, interest);
	accumulation = 0;
}
