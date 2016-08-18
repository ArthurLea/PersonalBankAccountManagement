#include<iostream>
using namespace std;
#include "SavingAccount.h"
void test1()//第一次测试 4.0单元
{
	//建立几个账户
	SavingAccount sa0(1, 21325302, 0.015);
	SavingAccount sa1(1, 58320212, 0.015);
	//几笔账目
	sa0.deposit(5, 50000);
	sa1.deposit(25, 100000);
	sa0.deposit(5, 50000);
	sa1.withdraw(60, 40000);
	//开户后第90天到了银行的计息日，结算所有账户的年息
	sa0.settle(90);
	sa1.settle(90);
	//输出各个账户信息
	sa0.show();
	sa1.show();
}
int main(void)
{
	//test1();

	system("pause");
	return 0;
}