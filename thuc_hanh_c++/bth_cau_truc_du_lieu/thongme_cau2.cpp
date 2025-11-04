#include <iostream>
#include <vector>
using namespace std;


int demCap(const vector<int>& a) {
    int dem = 0;
    for (int i = 0; i < (int)a.size() - 1; i++)
        if (a[i] == a[i + 1]) dem++;
    return dem;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << demCap(a) << endl;
    }
}
