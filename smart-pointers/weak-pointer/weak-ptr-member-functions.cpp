#include <memory>
#include <iostream>

int main() {
    // reset() example
    std::shared_ptr<int> value1 = std::make_shared<int>( int{1} ); // value1 = 1 -- one strong reference
    std::weak_ptr<int> wValue1{ value1 }; // wValue1 = 1 -- one weak and strong reference
    wValue1.reset(); // one strong reference

    fprintf(stdout, "value1: %d\n", value1.use_count()); // count = 1
    fprintf(stdout, "wValue1: %d\n", wValue1.use_count()); // count = 0

	// swap() and lock() example
    std::shared_ptr<int> value2 = std::make_shared<int>(int{ 20 }); // value2 = 20    
    std::shared_ptr<int> value3 = std::make_shared<int>(int{ 30 }); // value3 = 30
    std::weak_ptr<int> wValue2{ value2 }; // wValue2 = 20
    std::weak_ptr<int> wValue3{ value3 }; // wValue3 = 30
	wValue2.swap(wValue3); // wValue2 = 30, wValue3 = 20

    fprintf(stdout, "wValue2: %i\n", *wValue2.lock()); // wValue2 = 30
    fprintf(stdout, "wValue3: %d\n", *wValue3.lock()); // wValue3 = 20
    
	// expired() example
	std::weak_ptr<int> wValue4; // wValue4 = nullptr

    // creating a new scope
    {
        std::shared_ptr<int> value4 = std::make_shared<int>(int{ 40 }); // value4 = 40
		wValue4 = value4; // wValue4 = 40

        if (!wValue4.expired()) std::cout << "wValue4 is valid\n";
        else std::cout << "wValue4 is expired\n";
    } // shared pointer get deleted -- out of scope

    if (!wValue4.expired()) std::cout << "wValue4 is valid\n";
    else std::cout << "wValue4 is expired\n";

    // use_count() example
    std::shared_ptr<int> value5 = std::make_shared<int>(int{ 5 }); // value5 = 5 (1 strong)
	std::weak_ptr<int> w1Value5{ value5 }; // w1Value5 = 5 (1 strong, 1 weak)
    std::weak_ptr<int> w2Value5{ value5 }; // w2Value5 = 5 (1 strong, 2 weak)

	// weak pointer does not increase the reference count, only shared pointer do.
    fprintf(stdout, "w1Value5 -- use_count: %d\n", w1Value5.use_count()); // count = 1
    w2Value5.reset(); // w2Value5 == nullptr (1 strong, 1 weak)

    // shared pointer increment count
    std::shared_ptr<int> s1value5 = value5; // value5 (2 strong, 1 weak)
    fprintf(stdout, "w1Value5 -- use_count: %d\n", w1Value5.use_count()); // count = 2

    return 0;
}