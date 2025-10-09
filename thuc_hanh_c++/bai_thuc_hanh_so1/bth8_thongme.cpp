#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    bool SoNT;

    cout << "Nhap n: ";
    cin >> n;

    if(n < 2) {
        SoNT = false;
    } else {
        SoNT = true;
        int i = 2;
        while (i <= sqrt(n)) {
            if (n % i == 0) {
                SoNT = false;
                break;
            }
            i++;
        }
    }
    SoNT ? cout << n << " La so nguyen to" : cout << n << " Khong phai la so nguyen to";
    
    return 0;
}