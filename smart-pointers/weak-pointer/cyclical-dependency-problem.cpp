#include <memory>
#include <iostream>

class Wife;
class Husband;

class Wife
{
public:
	~Wife() { fprintf(stdout, "Wife destructor called\n"); }
	std::shared_ptr<Husband> pHusband;
};

class Husband
{
	
public:
	~Husband() { fprintf(stdout, "Husband destructor called\n"); }
	std::shared_ptr<Wife> pWife;
};

int main() {
	{
		std::shared_ptr<Husband> husband = std::make_shared<Husband>(); // (1 strong)
		std::shared_ptr<Wife> wife = std::make_shared<Wife>(); // (1 strong)

		// creating cyclical dependency
		husband->pWife = wife; // (2 strong)
		wife->pHusband = husband; // (2 strong)

		// use_count function counts strong ptrs
		fprintf(stdout, "wCount: %d\n", husband->pWife.use_count());
		fprintf(stdout, "hCount: %d\n", wife->pHusband.use_count());
	}

	// pointer never get delete outside this scope

    return 0;
}