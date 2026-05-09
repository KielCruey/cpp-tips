#include <vector>

int main() {
    std::vector<int> v{1,2,3,4,5};

    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        fprintf(stdout, "%i " ,*it); // *it dereferences v's content
    }

    return 0;
}