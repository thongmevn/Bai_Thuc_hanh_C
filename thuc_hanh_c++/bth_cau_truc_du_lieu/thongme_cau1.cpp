#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

//Ham kiem tra so nguyen to
bool laNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

//Ham kiem tra so chinh phuong
bool laChinhPhuong(int n) {
    int k = sqrt(n);
    return k * k == n;
}

// Ham in mang
void inMang(const vector<int>& a) {
    for (int x : a) cout << x << " ";
    cout << endl;
}

// Ham main
int main()  {
    int n;

    // a. Ham nhap mang co n phan tu so nguyen
    cout << "Nhap n (0 < n < 100) : "; 
    cin >> n;
    vector<int> a(n);
    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    // b. Ham in mang
    cout << "Day vua nhap : ";
    inMang(a);

    // c. Ham in so nguyen to
    cout << "So nguyen to : ";
    for (int x : a)
        if (laNguyenTo(x)) cout << x << " ";
    cout << endl;

    // d. Ham in so chinh phuong trong mang
    cout << "So chinh phuong : ";
    for (int x : a)
        if (laChinhPhuong(x)) cout << x << " ";
    cout << endl;

    // e. Ham kiem tra mang doi xung
    bool doiXung = true;
    for (int i = 0; i < n / 2; i++)
        if (a[i] != a[n - 1 - i])
            doiXung = false;
    cout << "Mang doi xung? " << (doiXung ? "Co" : "Khong") << endl;

    // f. Ham keim tra tang dan hoac giam dan
    bool tang = true, giam = true;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) tang = false;
        if (a[i] > a[i - 1]) giam = false;
    }
    cout << "Tang dan? " << (tang ? "Co" : "Khong") << endl;
    cout << "Giam dan? " << (giam ? "Co" : "Khong") << endl;

    // g. Ham nhap k va tim k co trong mang hay khong
    int k;
    cout << "Nhap k: "; 
    cin >> k;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            cout << "Tim thay tai vi tri " << i + 1 << endl;
            found = true;
        }
    }
    if (!found) cout << "Khong tim thay k\n";

    // h. Ham sap xep mang theo thu tu tang dan va in ra ket qua
    sort(a.begin(), a.end());
    cout << "Mang sau khi sap xep tang dan : ";
    inMang(a);

    // Giam dan
    sort(a.begin(), a.end(), greater<int>());
    cout << "Mang sau khi sap xep giam dan : ";
    inMang(a);
}