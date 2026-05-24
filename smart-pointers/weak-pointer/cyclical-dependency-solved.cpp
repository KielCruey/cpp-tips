#include <memory>
#include <iostream>

class Wife;
class Husband;

class Wife
{
public:
	~Wife() { fprintf(stdout, "Wife destructor called\n"); }
	std::weak_ptr<Husband> pHusband; // weak ptr
};

class Husband
{
public:
	~Husband() { fprintf(stdout, "Husband destructor called\n"); }
	std::shared_ptr<Wife> pWife;
};


int main() {
	{
		std::shared_ptr<Husband> husband = std::make_shared<Husband>();
		std::shared_ptr<Wife> wife = std::make_shared<Wife>();

		husband->pWife = wife; // (2 strong)
		wife->pHusband = husband; // (1 strong, 1 weak)

		// use_count function counts strong ptrs
		fprintf(stdout, "wCount: %d\n", husband->pWife.use_count());
		fprintf(stdout, "hCount: %d\n", wife->pHusband.use_count());
	}
	
	// 1 strong reference to husband, which cause the smart pointer to delete...
	// since the deletion of the husband reference decrements the wife reference by 1...
	// that then deletes the wife smart pointer

    return 0;
}