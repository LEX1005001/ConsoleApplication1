#include <iostream>
using namespace std;
int main()
{
	int dollar = 0;
	int cent = 0;
	double number = 0;
	cout << "number : ";
	cin >> number;
	dollar = number;
	cent = (number - dollar) * 100;
	cout << dollar << "$ " << cent << "&";
}
