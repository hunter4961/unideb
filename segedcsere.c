#include<iostream>
int main() {
	
int a = 2;
int b = 4;
int x;

	printf("a=%d\nb=%d\n",a,b);

//Felcserélés: 
x = a;
a = b;
b = x;

	printf("a=%d\nb=%d\n",a,b);

	return 0;
}
