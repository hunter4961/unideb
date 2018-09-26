#include "std_lib_facilities.h"
using namespace std;

int main() {
	double a; // Változók felvétele
	string unit;
	vector <double> units;

	while (unit != "|") {  // Ciklus kezdete, ha a unit változó értéke |, a ciklus befejeződik és a program bezárul
		cout << "\n\nWrite a unit (cm, m, ft, in or | to terminate): ";	//Unit változó értékének bekérése
		cin >> unit;
		
		if ( unit == "|") {
			return 0;
		}
		
		cout << "Write a number in " << unit << " you want to convert into meter: ";  //a, azaz a szám bekérése
		cin >> a;

		if ( unit == "cm" ) {  //Adott mértékegységnek megfelelő átváltás és beküldés a vektorba
    			a = a/100;
			units.push_back(a);			   	
    		}
		
		else if ( unit == "m" ) {
			units.push_back(a);		
		}	
		else if ( unit == "ft" ) {
			a = a/3.28;
			units.push_back(a);		
		}	
		else if ( unit == "in" ) {
			a = a/39.37;
			units.push_back(a);		
		} 
		
		else {
			cout << "Invalid unit.\n\n"; //Ha nem a felsorolt egységek közül lett válaszva, hiba
			return 0;		
		}

		sort(units); //Rendezés
			cout << string(50, '\n'); //Szépítés
			cout << "Your number after exchange: " << a << '\n'; //Adatok kiírása
			cout << "Smallest number so far: " << units.front() << '\n'; 
			cout << "Largest number so far: " << units.back() << '\n';
			cout << "Total numbers: " << units.size() << '\n';
			cout << "Numbers in increasing order: ";
		
		for (int i = 0; i < units.size(); i++) {
			cout << units[i] << ", "; //Eddigi számok kiírása növekvő sorrendben, egymás után
		}

	}
}
