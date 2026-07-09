#include <memory>
#include <iostream>

int main() {
    std::unique_ptr<int> value1 = std::make_unique<int>(int{ 10 });
    fprintf(stdout, "value1: %d\n", *value1);

    // compiling error can't copy value1 into value2
    // std::unique_ptr<int*> value2 = value1;

    // allowed
	std::unique_ptr<int> value2 = std::move(value1); // value1 = nullptr
    fprintf(stdout, "value2: %d\n", *value2);

    return 0;
}