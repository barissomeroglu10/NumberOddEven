/*
In this code, we will get a number from user. And from 1 to the number, we will calculate total and multiplication
for the odd numbers and also will calculate square total for the even numbers.

Developer: Barış Someroğlu
Date: 05.01.2024 / 3:20 p.m.

*/

#include <iostream>

using namespace std;

int main()
{
	int Number, OddTotal = 0, EvenSquareTotal = 0;
	long long int OddMultiplication = 1; // if you only use int for this variable, you will have wrong result

	cout << "Please Enter the Number: ";
	cin >> Number;

	cout << "\n";

	for (int i = 1; i <= Number; i++)
	{
		if (i % 2 == 0)
		{
			EvenSquareTotal += i * i;
		}

		else
		{
			OddTotal += i;
			OddMultiplication *= i;
		}
	}

	cout << "Total of the Odd Number: " << OddTotal << endl;

	cout << "\n";

	cout << "Multiplication of the Odd Number: " << OddMultiplication << endl;

	cout << "\n";

	cout << "Total of the Even Number (Total of Square) : " << EvenSquareTotal << endl;

	cout << "\n";

	return 0;
}