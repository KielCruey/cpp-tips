#include <vector>

int main() {
    std::vector<int> v{4,6,8,2,1};

    for(int i = 0; i < v.size(); i++) {
        fprintf(stdout, "%i ", v[i]);
    }

    return 0;
}