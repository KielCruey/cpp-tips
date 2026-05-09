#include <vector>
#include <iostream>

int main() {
    std::vector<int> v{4,6,8,2,1};

    fprintf(stdout, "Pass-By Value\n");
    // multiplying the content of the vector by 2
    for(int i : v) {
        i = 2 * i;
        fprintf(stdout, "%i ", i); // output: 8 12 16 4 2
    }

    std::cout << std::endl;

    // vector's content didn't change!
    for(int i : v) {
        fprintf(stdout, "%i ", i); // output: 4 6 8 2 1
    }

    std::cout << std::endl;

    fprintf(stdout, "Pass-By Reference\n");
        // multiplying the content of the vector by 2
    for(int& i : v) {
        i = 2 * i;
        fprintf(stdout, "%i ", i); // output: 8 12 16 4 2
    }

    std::cout << std::endl;

    // vector's content did change!
    for(int i : v) {
        fprintf(stdout, "%i ", i); // output: 8 12 16 4 2
    }

    return 0;
}