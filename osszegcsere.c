#include "std_lib_facilities.h"

int main() {
	
	double a;
	double b;
	cout << "Adj meg egy számot: ";
	cin >> a;
	cout << "Adj meg egy másik számot: ";
	cin >> b;

	cout << "Megadott számok: " << a << " és " << b << '\n';

	a=a+b;
	b=a-b;
	a=a-b;
	
	cout << "Felcserélés után: " << a << " és " << b << '\n'; 
}
