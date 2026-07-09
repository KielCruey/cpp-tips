int main() {
    int *pointer = new int{100}; // creating a pointer

    delete pointer; // allowed -- resource deleted
    delete pointer; // error -- program crashes during run-time

    return 0;
}