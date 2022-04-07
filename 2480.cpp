#include <iostream>
using namespace std;

int main()
{
	int A, B, C, money;
	
	cin >> A >> B >> C ;
	
	if (A == B && B == C)
	{
		money = 10000 + A * 1000;
	}
	else if ( A == B || A == C)
	{
		money = 1000 + A * 100;
	}
	else if ( B == C )
	{
		money = 1000 + B * 100;
	}
	else 
	{
		money = max(max(A,B), C) * 100;
	}
		
	cout << money << endl;
}