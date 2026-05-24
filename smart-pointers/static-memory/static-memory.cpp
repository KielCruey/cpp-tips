#include <iostream>

int main() {
    int x = 2;
    fprintf(stdout, "x: %ld\n", x);

    // creating a new scope
    {
        int y = 2 * x;
        fprintf(stdout, "y: %ld\n", y);
    } // y get deleted here automatically

    // y can't be printed out because program deletes it from the stack
    // fprintf(stdout, "Value: %ld\n", y); // can't do this
    fprintf(stdout, "x: %ld\n", x);

    return 0;
}