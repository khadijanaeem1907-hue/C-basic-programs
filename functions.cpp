#include <iostream>
using namespace std;

int add(int a, int b);

int main() {
    int num1 = 10;
    int num2 = 78;
    int sum;

    sum = add(num1, num2);
    cout << num1 << " + " << num2 << " = " << sum << endl;
 return 0;
}

int add(int a, int b) {
    return (a + b);
}
