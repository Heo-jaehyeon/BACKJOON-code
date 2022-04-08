#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int T,k,j=0;
	cin >> T;
	
	for(int i = 1; i < T+1; i++)
	{
		j=0;
		
		for(k = 0; k < T-i; k++)
			cout << " ";
		
		while (j < i)
		{
			cout << "*" ;
			j++;
		}
		cout << "\n";
	}
}