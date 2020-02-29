include "std_lib_facilities.h"

int main() {
	
double a;
double b;
double x;
	cout << "Adj meg egy számot: ";
cin >> a;
	cout << "Adj meg egy másik számot: ";
cin >> b;

	cout << "Megadott számok: " << a << " és " << b << '\n';
    x = a;
    a = b;
    b = x;
    	cout << "Felcserélés után: " << a << " és " << b << '\n';
return 0;
}
