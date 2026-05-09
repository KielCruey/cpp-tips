#include <vector>

int main() {
    std::vector<int> v{4,6,8,2,1};

    int i{0};
    do {
        fprintf(stdout, "%i ", v[i]); // output: 4 6 8 2 1
        i++;
    } while(i < v.size());

    return 0;
}