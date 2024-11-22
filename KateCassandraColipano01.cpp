#include <iostream>

using namespace std;

int main ()
{
	int tmpt;
	
	cout << "Temperature:" << endl;
	cin >> tmpt;
	
	if ( tmpt < 32) {
		cout << "Bring a heavy jacket." << endl;
	}
	else if ( tmpt >= 32 && tmpt <= 50) {
		cout << "Bring a light jacket." << endl;
	}
	else {
		cout << "Don't bring any jacket." << endl;
	}
}