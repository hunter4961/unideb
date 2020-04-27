#include<iostream>
int main() {
	
	int a;
	int b;
	std::cout << "Írj egy számot: ";
	std::cin >> a;
	std::cout << "Írj egy másik számot: ";
	std::cin >> b;

	a = a * b;
	b = a / b;
	a = a / b;

	std::cout << "Felcserélve: " << a << " és " << b << '\n';
} 
