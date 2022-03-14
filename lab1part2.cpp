/*
Написать функцию с переменным числом параметров, которая находит сумму чисел типа int по формуле: S=a1*a2-a2*a3+a3*a4-. . .
*/
#include <iostream>
using namespace std;

int sumA(int acount)
{
	if (acount < 0)
	{
		cout << "length cant be less than 0!";
		return 0;
	}
	if (acount == 0)
	{
		cout << "goodjob, sum of zero a is 0, nice bro :)";
		return 0;
	}
	int sum, mult,a;
	sum = 0;
	cout << "a is: ";
	cin >> a;
	mult = a;
	for (int i =1; i< acount;i++)
	{
		for(int j=1;(j%2!=0);j++)
		{
			cin >> a;
			mult *= a;

		}
		if (i % 2 == 0)
		{
			sum -= mult;
			mult = a;
		}
		if (i % 2 != 0)
		{
			sum += mult;
			mult = a;
		}
	}
	cout << "S = " << sum << endl;
}

int main()
{
	int swc = 1, k;
	while (swc == 1)
	{


		int acount;
		cout << "How many numbers?: ";
		cin >> acount;
		sumA(acount);
		cout << "continue? (1 - yes): ";
		cin >> swc;
	}
	
	
}