#include "stdafx.h"
#include "stock.h"
#include <iostream>

int main()
{
	{
		using std::cout;
		cout << "using constructor to create new objects:\n";
		Stock stock1("NanoSmart", 12, 20.0);//隐式调用显示构造函数  注意隐式调用指的是不用声明stock2那种方法，显示指的是该构造函数不是默认构造函数
		//Stock stock1;//这样的话就是使用默认构造函数
		stock1.show();
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);//显示调用构造函数
		stock2.show();
		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1 and stcok2:\n";
		stock1.show();
		stock2.show();
		cout << "Using a constructor to reset object:\n";
		stock1=Stock("ShangChao", 10, 10);//在调用构造函数覆盖原来的值时，会调用析构函数
		stock1.show();
		cout << "Done\n";
	}
	getchar();
}