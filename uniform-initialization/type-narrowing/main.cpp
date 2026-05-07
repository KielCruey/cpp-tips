#include <iostream>

int main() {
	int b{ 2 }; // okay
	int a{ 2.3 }; // error -- narrowing from double to int
	
	return 0;
}