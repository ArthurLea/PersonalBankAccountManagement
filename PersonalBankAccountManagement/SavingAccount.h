#pragma once
class SavingAccount				//�洢�˻���
{
private:
	int id;						//�˺�
	double balance;				//���
	double rate;				//����������
	int lastDate;				//�ϴα������ʱ��
	double accumulation;		//�����ۼ�֮��
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
	void show();//��ʾ�˻���Ϣ
};

