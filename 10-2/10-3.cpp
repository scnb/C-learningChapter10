#include "stdafx.h"
#include <iostream>
#include "10-1.h"

int main()
{
	Stock fluffy_the_cat;
	fluffy_the_cat.acquire("NanoSmart",20,12.50);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(15, 18.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(400, 20.0);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(30000, 40.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(30000, 0.125);
	fluffy_the_cat.show();
	getchar();
}