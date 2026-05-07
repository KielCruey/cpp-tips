int main() {
	int a; // okay -- will be populated with any unknown int value
	int b(); // nothing gets initialized
	int c(3); // okay - "3"
    int d{}; // okay -- guarantees an initialized value of "0"
	int e{ 5 }; // okay -- "5"
	
	return 0;
}