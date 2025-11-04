#include <iostream>
#include <vector>
using namespace std;

int demPhanTu(const vector<int>& a) {
    int dem = 1;
    for (int i = 1; i < (int)a.size(); i++)
        if (a[i] >= a[i - 1]) dem++;
    return dem;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n >= 2 || n >= 50) {
            cout << "Gia tri n khong hop le!" << endl;
            continue;
        }
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << demPhanTu(a) << endl;
    }
}
