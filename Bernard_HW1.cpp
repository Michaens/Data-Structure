/*******************************************************************************************
Name: Michaens Bernard
Z#: 23411227
Professor: Feng-Hao Liu
Class: COP3530 Data Structure
Time: T/R 9:30-10:50am GS115
Due Date: Jan 24, 2018
Points: 100pts
******************************************************************************************/


#include<iostream> //
#include<string>   //
 
using namespace std;

//function to convert decimal to binary

void decToBinary(int n) //
{
	string str = "";
	int binaryno[1000];
	int i = 0;
	while (n > 0) {
		binaryno[i] = n % 2;

		n = n / 2;

		i++;

	}
	for (int j = i - 1; j >= 0; j--)
		str += to_string(binaryno[j]);
	cout << str << endl;
}

//function to convert binary to decimal

int binaryToDecimal(string n) //
{
	string num = n;
	int decno = 0;
	int base = 1;
	int len = num.length();
	for (int i = len - 1; i >= 0; i--)
	{
		if (num[i] == '0')
		{
			decno += 0 * base;
			base = base * 2;
		}
		else
		{
			decno += 1 * base;
			base = base * 2;
		}
	}
	return decno;
}

int main() //
{
	//testing functions using input
	int n = 28;
	decToBinary(n);
	string num = "111111";
	cout << binaryToDecimal(num) << endl;
	return 0;

}

