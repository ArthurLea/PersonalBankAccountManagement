#pragma once
class SavingAccount				//存储账户类
{
private:
	int id;						//账号
	double balance;				//余额
	double rate;				//存款的年利率
	int lastDate;				//上次变更余额的时期
	double accumulation;		//余额按日累加之和
private:
	void recode(int date, double amount);
	double accumulate(int date);
public:
	SavingAccount(int date,int id,double rate);
	int getId();
	double getBalance();
	double getRate();
	~SavingAccount();

	void deposit(int date, double amount);//deposit amount
	void withdraw(int date, double amount);//withdraw amount
	void settle(int date);//settled when the date is arrived of the fixed id
	void show();//显示账户信息
};

