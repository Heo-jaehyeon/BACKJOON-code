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
	
	for(int i = T; i > 0 ; i--)
		cout << i << "\n";
}