#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

/*int men(int x, int y) 
{
	for (int i = 1; i <=x; i++) 
	{
		for (int j = 1; j <= y; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}return (x, y);
}

int main()
{
	setlocale(LC_ALL, "rus");
	int N, K;
	cout << "¬ведите высоту; ";
	cin >> N;
	cout << "¬ведите ширину; ";
	cin >> K;
	men(N, K);
	return 0;
}*/

/*double men(int a)
{	
	double a1 = 1;
	for (int i = 1; i <=a; i++)
	{
		
		a1 = a1 * i;
	}
	cout <<"‘акториал числа "<<a <<" равен "<<a1;
	return a1;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "¬ведите число: ";
	cin >> a;
	men(a);
		

	return 0;

}*/



int prosto(int a) 
{
	if((a * a) % 24 == 1){ cout<<"„исло " << a << " простое \n"; }
	else if (a ==2) { cout << "„исло " << a << " простое \n"; }
	else if (a == 3) { cout << "„исло " << a << " простое \n"; }
	else  { cout << "„исло " << a << " не простое "; }
	return a;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	do {


		cout << "¬ведите число: \n";
		cin >> a;

		prosto(a);
	} while (a != 0);
	return 0;
}