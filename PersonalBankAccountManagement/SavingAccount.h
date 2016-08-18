#pragma once
/*
#pragma once is equal with:
	#ifndef _SAVINGACCOUNT_H_
	#define _SAVINGACCOUNT_H_
	
	.h中的内容

	#endif
*/
class SavingAccount				//存储账户类
{
private:
	int id;						//账号
	double balance;				//余额
	double rate;				//存款的年利率
	int lastDate;				//上次变更余额的时期
	double accumulation;		//余额按日累加之和
	static double total;		//所用账户的总金额
private:
	void recode(int date, double amount);
	double accumulate(int date) const;
public:
	SavingAccount(int date,int id,double rate);
	int getId() const;
	double getBalance() const;
	double getRate() const;
	static double getTotal();
	~SavingAccount();

	void deposit(int date, double amount);//deposit amount
	void withdraw(int date, double amount);//withdraw amount
	void settle(int date);//settled when the date is arrived of the fixed id
	void show();//显示账户信息
};

