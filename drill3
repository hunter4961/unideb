#include "std_lib_facilities.h"

int main() {
  	cout << "Enter your name: "; //Saját név bekérése
	string your_name;		
	cin >> your_name;
  
	cout << "Enter the name of the person you want to write to: "; //Első név bekérése
	string first_name;		
	cin >> first_name;

	cout << "Tell me the name of another friend of mine: "; //Barát nevének bekérése
	string friends_name;		
	cin >> friends_name;
		
	cout << "Tell me "<<friends_name<<"'s sex. write 'm' if male and 'f' if female: "; //Barát nemének bekérése
	char friends_sex;
	cin >> friends_sex;

	cout << "How old are you: ";	//Kor bekérése
	int age;			
	cin >> age;

	cout << "\n\nDear "<<first_name<<",\n\n"; //Első sor kiírása a first_name változóban tárolt értékkel

	cout << "How are you? I miss you. I hope you doing well.\n"; //Második sor kiírása

	cout << "Have you seen "<<friends_name<<" lately?\n"; //Harmadik sor kiírása a friends_name változóban tárolt értékkel

	if (friends_sex == 'm') //Megvizsgáljuk a barát nemét a friends_sex változóban tárolt érték alapján
    		cout << "If you see "<<friends_name<<" please ask him to call me.\n"; //Ha az illető fiú, tehát a változó értéke m, ezt a sort írja ki
	else if (friends_sex == 'f') 
    		cout << "If you see "<<friends_name<<" please ask her to call me.\n"; //Ha az illető lány, tehát a változó értéke f, ezt a sort írja ki

	if (age <= 0 || age >= 110) //Ha az age változóban tárolt érték kisebb egyenlő mint nulla, vagy nagyobb egyenlő mint 110, hibát kapunk
  		simple_error("You're kidding!");
	else 
    		cout << "I hear you just had a birthday and you are "<<age<<" years old.\nHappy birthday to you!\n\n"; //Ha az age változóban tárolt érték a fenti kritériumoknak megfelel, ezt a sort írjuk ki
    	
	cout << "Yours sincerely,\n"; //Elköszönés
	cout << your_name << '\n'; //Név beolvasása a your_name változó alapján
}
