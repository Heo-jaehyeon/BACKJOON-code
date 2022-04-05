#include <iostream>
using namespace std;

int main()
{
	int hour, min;
	cin >> hour >> min;
	
	int total_min = (hour * 60 + min) - 45;
	
	if (total_min < 0)
		total_min+=24*60;
		
	hour = total_min / 60;
	min = total_min % 60;
	
	cout << hour << endl << min << endl;
} 