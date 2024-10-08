#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int sum1 = add(3, 4);
    int sum2 = add(1, 2, 3);
    cout << "Sum of 3 and 4 is: " << sum1 << endl;
    cout << "Sum of 1, 2, and 3 is: " << sum2 << endl;
    return 0;
}

