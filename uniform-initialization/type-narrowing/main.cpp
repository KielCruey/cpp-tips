int main() {
	int a{ 2 }; // okay
	int b = 3.9; // okay -- but type narrowing occurs
	int c( 4.2 ); // okay -- but type narrowing occurs
	int d{ 2.3 }; // error -- narrowing from double to int
	
	return 0;
}