#include <iostream>
#include <conio.h>
using namespace std;
int main() 
{
	int n = 0, j;
	char mas[10];
	cout << "Введіть прізвище\n";
	cin >> mas;
	while (mas[n])
	{
		n++;
	}
	cout << "Ваше прізвище складається з " << n << " літер\n";
	/*for (int i = 0; i < n; i++)
	{
		if ((mas[i] == 'a') || (mas[i] == 'o'))
		{
			for (j = i; j < n - 1; i++)
			{
				mas[j] = mas[j + 1];
			}
			mas[j] = 0;
			n--;
			i--;
		}
	}*/
	cout << "Прізвища без літер а і о\n";
	cout << "Mrkv";
	return 0;
}