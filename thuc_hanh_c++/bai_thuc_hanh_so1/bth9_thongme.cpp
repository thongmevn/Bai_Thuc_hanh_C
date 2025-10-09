#include <iostream>
using namespace std;

int main () {
    int n;

    cout << "Nhap n: ";
    cin >> n;

    int gt = 1;
    int i = n;
    while (i > 1) {
        gt *= i;
        i -= 2;
    }
    cout << n << "! = " << gt;
    return 0;
    
}