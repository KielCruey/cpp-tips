#include <iostream>

int main() {
    // prints the initial "Hello World!" and exits
    fprintf(stdout, "do-while loop:\n");
    int i = 0; // test condition evaluated to false before entering the loop
    do {
        fprintf(stdout, "Hello World!");
    } while(i > 0);

    return 0;
}