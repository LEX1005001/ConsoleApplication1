#include <iostream>
using namespace std;
int main()
{
	int sec = 0;
	int min = 0;
	int hour = 0;


	cout << "-->";
	cin >> sec;

	if (sec >=60) {
		min = sec / 60;
		sec = sec % 60;
	}
	if (min>=60){
		hour = min / 60;
		min = min % 60;
	}
	cout << hour << "h " << min << "m " << sec << "sec";

}	
