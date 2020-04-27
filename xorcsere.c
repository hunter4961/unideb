#include <iostream>

int main() {
	
	double a;
	double b;
	std::cout << "Adj meg egy számot: ";
	std::cin >> a;
	std::cout << "Adj meg egy másik számot: ";
	std::cin >> b;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	std::ccout << "Felcserélés után: " << a << " és " << b << '\n'; 
}
