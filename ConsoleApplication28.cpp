// ConsoleApplication28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

/*
Write a program in which you declare variables that will hold an hourly wage and
number of hours worked. Prompt the user to enter values for hourly rate and hours
worked. Compute and display gross weekly pay, which is calculated as hours times rate
for the first 40 hours, plus hours times 1.5 times the rate for any hours over 40. Also display net pay, which is gross pay minus withholding; withholding is calculated as 28 percent
of gross pay if gross pay is over $1000, 21% of gross pay if gross pay is not over $1000
but is over $600, and 10% of gross pay if gross pay is not over $600. (use functions to calculate gross pay)

*/

//function prototype
double determinePay(int, double);

int main()
{
	//variable declaration
	double hourlyWage = 0.0;
	int numHours = 0;
	double grossPAY = 0.0;
	double netPay = 0.0;
	double withHolding = 0.0;
	const double FIRST = 0.28;
	const double SECOND = 0.21;
	const double THIRD = 0.1;

	//allow user to enter values
	cout << "Enter your hourly rate : " << endl;
	cin >> hourlyWage;
	cout << "Enter total hours worked : " << endl;
	cin >> numHours;
	//calculation of grosspay
	grossPAY = determinePay(numHours, hourlyWage);
	//calculation of netpay
	//introduction of if-else
	if (grossPAY > 1000)
	{
		withHolding = grossPAY * FIRST;
		netPay = grossPAY - withHolding;
	}
	else if (grossPAY > 600 && grossPAY < 1000)
	{
		withHolding = grossPAY *SECOND;
		netPay = grossPAY - withHolding;
	}
	else
	{
		withHolding = grossPAY *THIRD;
		netPay = grossPAY - withHolding;
	}

	//display
	cout << "Gross pay is = R" << grossPAY << endl;
	cout << "Net pay is : R" << netPay << endl;
	system("pause");
	return 0;
}
//first function
double determinePay(int hour, double rate)
{
	double pay = 0.0;
	int numH = 0;
	const double HOUR = 1.5;

	//if-else statement
	if (hour > 40)
	{
		numH = (hour - 40) * HOUR;
		pay = (numH + hour) * rate;
	}
	else
	{
		pay = hour * rate;
	}

	return pay;
}