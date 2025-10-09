#include <iostream>
using namespace std;

void TingN(int n) {
    int gt = 1;
    int i = n;
    while (i > 1) {
        gt *= i;
        i -= 2;
    }
    cout << n << "! = " << gt << endl;

}

int main () {
    int n;

    cout << "Nhap n: ";
    cin >> n;

    // goi ham
    TingN(n);

    return 0;
}