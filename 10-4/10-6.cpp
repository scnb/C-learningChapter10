#include "stdafx.h"
#include "stock.h"
#include <iostream>

int main()
{
	{
		using std::cout;
		cout << "using constructor to create new objects:\n";
		Stock stock1("NanoSmart", 12, 20.0);//��ʽ������ʾ���캯��  ע����ʽ����ָ���ǲ�������stock2���ַ�������ʾָ���Ǹù��캯������Ĭ�Ϲ��캯��
		//Stock stock1;//�����Ļ�����ʹ��Ĭ�Ϲ��캯��
		stock1.show();
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);//��ʾ���ù��캯��
		stock2.show();
		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1 and stcok2:\n";
		stock1.show();
		stock2.show();
		cout << "Using a constructor to reset object:\n";
		stock1=Stock("ShangChao", 10, 10);//�ڵ��ù��캯������ԭ����ֵʱ���������������
		stock1.show();
		cout << "Done\n";
	}
	getchar();
}