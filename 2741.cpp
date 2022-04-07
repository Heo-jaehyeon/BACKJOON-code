#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	
	while(true)
	{
		cin >> T;
		if(T <= 100000)
			break;
	}
	
	for(int i = 1; i < T+1 ; i++)
		cout << i << "\n";
}