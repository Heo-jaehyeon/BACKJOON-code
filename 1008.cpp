#include <iostream>
using namespace std;

int main()
{
    int A;
    double B;
    
    cin >> A;
    cin >> B;
	
    double Div1 = A/B;
	
	cout<<fixed;
	cout.precision(20);
    cout << Div1 << endl;

}