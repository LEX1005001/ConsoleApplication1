#include <iostream>
using namespace std;
int main()
{
	int days = 0;
	int weeks = 0;

	cout << ":";
	cin >> days;

	if (days >= 7) {
		weeks = days / 7;
		days = days % 7;
	}
cout << weeks << " weeks" << " and " << days << " days";
}
