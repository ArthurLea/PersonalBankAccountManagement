#include<iostream>
using namespace std;
#include "SavingAccount.h"

void SavingAccount::recode(int date, double amount)
{
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;			//保留小数位后两位
	balance += amount;
	cout <<"开户起第" << date << "天\t#" << id << "\t" << amount << "\t" << balance << endl;
}

double SavingAccount::accumulate(int date) const
{
	return accumulation + balance*(date - lastDate);
}

SavingAccount::SavingAccount(int date, int id, double rate):id(id),balance(0),rate(rate),lastDate(date),accumulation(0)
{
	cout << "第" << date << "天\t#" << id << " is created" << endl;
}

int SavingAccount::getId() const
{
	return id;
}

double SavingAccount::getBalance() const
{
	return balance;
}

double SavingAccount::getRate() const
{
	return rate;
}

double SavingAccount::getTotal()
{
	return total;
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

void SavingAccount::show()
{
	cout << "#" << id << "\tbalance：" << balance << endl;
}
