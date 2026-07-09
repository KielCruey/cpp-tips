#include <memory>
#include <iostream>

int main() {
    // reset example
    std::shared_ptr<int*> value1 = std::make_shared<int*>(new int{42}); // value0 = 42
	std::shared_ptr<int*> value2 = std::make_shared<int*>(new int{24}); // value0 = 24
    value1.reset(value2.get()); // value1 = 42  value2 = 42

    // swap example
    std::shared_ptr<int*> value3 = std::make_shared<int*>(new int{ 1 }); // value3 = 1
    std::shared_ptr<int*> value4 = std::make_shared<int*>(new int{ 11 }); // value4 = 11
    value3.swap(value4); // value3 = 11  value4 = 1

    // get example
    std::shared_ptr<int> value0 = std::make_shared<int>(42); // value0 = 42
    int* rawPtr = value0.get(); // rawPtr = 42

    // use_count example
    std::shared_ptr<int*> value5 = std::make_shared<int*>(new int{ 5 }); // value5 = 5
    std::shared_ptr<int*> value6 = value5;
    std::shared_ptr<int*> value7 = value5;
	fprintf(stdout, "use_count: %d\n", value5.use_count()); // count = 3
    value7 = nullptr;
	fprintf(stdout, "use_count: %d\n", value5.use_count()); // count = 2
	value6 = nullptr;
	fprintf(stdout, "use_count: %d\n", value5.use_count()); // count = 1

    // unique example
    std::shared_ptr<int*> value8 = std::make_shared<int*>(new int{ 8 }); // value8 = 8
    std::shared_ptr<int*> value9 = value8;
    fprintf(stdout, "isUnique?: %d\n", value8.unique()); // 0 (false)
	value9 = nullptr;
    fprintf(stdout, "isUnique?: %d\n", value8.unique()); // 1 (true)

	return 0;
}