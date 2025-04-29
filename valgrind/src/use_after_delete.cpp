#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    delete ptr;
    *ptr = 5;
    return 0;
}