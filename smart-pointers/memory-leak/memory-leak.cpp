#include <iostream>

int main() {
    // creating dynamic value
    int const *value = new int{42};
    fprintf(stdout, "Value: %i", *value);

    // memory leak -- didn't delete or free memory out of scope
    return 0;
}