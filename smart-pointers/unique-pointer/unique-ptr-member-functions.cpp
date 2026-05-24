#include <memory>
#include <iostream>

int main() {
    // release() example
    std::unique_ptr<int> value1 = std::make_unique<int>(int{ 1 }); // value1 = 1
    fprintf(stdout, "value1: %d\n", *value1);
    value1.release(); // value1 = nullptr

    // reset() example
    std::unique_ptr<int> value2 = std::make_unique<int>(int{ 2 }); // value2 = 2
    fprintf(stdout, "value2: %d\n", *value2);
    // releasing the current pointer and replacing it with a new one of value 22
    value2.reset(std::make_unique<int>(int{ 22 }).release()); // value2 = 22
    fprintf(stdout, "value2: %d\n", *value2);

    // swap() example
    std::unique_ptr<int> value3 = std::make_unique<int>(int{ 3 }); // value3 = 3
    std::unique_ptr<int> value4 = std::make_unique<int>(int{ 4 }); // value4 = 4
    fprintf(stdout, "value3: %d\n", *value3);
    fprintf(stdout, "value4: %d\n", *value4);
    value3.swap(value4); // value3 = 4 , value4 = 3
    fprintf(stdout, "value3: %d\n", *value3);
    fprintf(stdout, "value4: %d\n", *value4);

    // get() example
    std::unique_ptr<int> value5 = std::make_unique<int>(int{ 5 }); // value5 = 5
    fprintf(stdout, "value5: %d\n", *value5);
    int* rawPtr = value5.get(); // rawPtr = 5
    fprintf(stdout, "rawPtr: %d\n", *rawPtr);

    return 0;
}