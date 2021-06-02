#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int n, i;
	cout << "Ingrese numero:";
	cin >> n;
	i=2;
	while ( i<=0 )
	{
		if ( n%i==0)
		    {
			    n = n / i;
				cout << i << endl;
		    }
		else i =i + 1;
	}
	return 0;
}

