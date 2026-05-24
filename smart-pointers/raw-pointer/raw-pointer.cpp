#include <iostream>

int main() {
    int *value = new int{42}; // dynamic memory created
    fprintf(stdout, "Value: %i", *value);

    int temp = 2 * (*value); // manipulating the value
    fprintf(stdout, "Value: %i", temp);

    // with raw pointers, you must delete it when leaving the scope or a memory leak will occur
    delete value;

    return 0;
}