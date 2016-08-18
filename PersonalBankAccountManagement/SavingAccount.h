#pragma once
/*
#pragma once is equal with:
	#ifndef _SAVINGACCOUNT_H_
	#define _SAVINGACCOUNT_H_
	
	.h�е�����

	#endif
*/
class SavingAccount				//�洢�˻���
{
private:
	int id;						//�˺�
	double balance;				//���
	double rate;				//����������
	int lastDate;				//�ϴα������ʱ��
	double accumulation;		//�����ۼ�֮��
	static double total;		//�����˻����ܽ��
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
	void show();//��ʾ�˻���Ϣ
};

