#include <vector>

int main() {
    std::vector<int> v{4,6,8,2,1};

    int i{0};
    while(i < v.size()) {
        fprintf(stdout, "%i ", v[i]); // output: 4 6 8 2 1
        i++;
    }

    return 0;
}