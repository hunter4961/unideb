#include<iostream>
int main() {
	
	int a = 4;
	int b = 2;
	printf("a=%d\nb=%d\n",a,b);

//Felcserélés: 
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a=%d\nb=%d\n",a,b);
	return 0; 
}
