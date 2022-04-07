#include <iostream>
using namespace std;

int main()
{
	int nowHour, nowMin, totalMin, cook;
	
	cin >> nowHour >> nowMin >> cook;
	
	totalMin = nowHour * 60 + nowMin + cook;
	
	nowMin = totalMin % 60;
	nowHour = (totalMin/60)% 24;
	
	cout << nowHour << " " << nowMin << endl;
}