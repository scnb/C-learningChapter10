// 10-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "10-1.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative��" << company << " shares set to 0.\n";
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	set_tot();
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative. " << "Transaction is aborted.\n";
	}
	else
	{
		shares += num;//���ֹ�Ʊ������
		share_val = price;//��Ʊ�ĵ���
		set_tot();//���Ʊ���ܼ�
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative. " << "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have! " << "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;//������Ʊ
		share_val = price;//���¹�Ʊ����
		set_tot();//���¹�Ʊ�ܼ�
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	std::cout << "Company: " << company << " shares: " << shares << '\n' << " share Price: $" << share_val << " Total Worth:$" << total_val << '\n';
}


