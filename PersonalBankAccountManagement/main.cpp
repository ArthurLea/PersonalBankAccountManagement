#include<iostream>
using namespace std;
#include "SavingAccount.h"
void test1()//��һ�β��� 4.0��Ԫ
{
	//���������˻�
	SavingAccount sa0(1, 21325302, 0.015);
	SavingAccount sa1(1, 58320212, 0.015);
	//������Ŀ
	sa0.deposit(5, 50000);
	sa1.deposit(25, 100000);
	sa0.deposit(5, 50000);
	sa1.withdraw(60, 40000);
	//�������90�쵽�����еļ�Ϣ�գ����������˻�����Ϣ
	sa0.settle(90);
	sa1.settle(90);
	//��������˻���Ϣ
	sa0.show();
	sa1.show();
}
int main(void)
{
	//test1();

	system("pause");
	return 0;
}