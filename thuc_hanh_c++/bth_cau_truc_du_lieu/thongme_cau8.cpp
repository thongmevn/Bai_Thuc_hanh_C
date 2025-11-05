#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

struct Sach {
    string ma, ten, tacGia;
    int sl;
};

int main() {
    int n;
    cout << "Nhap so dau sach: ";
    cin >> n;
    vector<Sach> ds(n);

    // nhap mot danh sach
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "Sach " << i + 1 << ":\n";
        cout << "Ma: "; getline(cin, ds[i].ma);
        cout << "Ten: "; getline(cin, ds[i].ten);
        cout << "Tac gia: "; getline(cin, ds[i].tacGia);
        cout << "So luong: "; cin >> ds[i].sl;
        cin.ignore();
    }

    // Ham nhap ten can tim
    string ten;
    cout << "Nhap ten sach can tim: ";
    getline(cin, ten);
    bool found = false;
    for (auto &s : ds)
        if (s.ten == ten) {
            cout << "Tim thay : " << s.ma << " - " << s.tacGia << " - SL : " << s.sl << endl;
            found = true;
        }
    if (!found) cout << "Khong tim thay\n";

    // Ham nhap ten tac gia
    string tg;
    cout << "Nhap ten tac gia: ";
    getline(cin, tg);
    bool found2 = false;
    for (auto &s : ds)
        if (s.tacGia == tg) {
            cout << s.ten << " (" << s.sl << " quyen)\n";
            found2 = true;
        }
    if (!found2) cout << "Khong co sach cua tac gia nay\n";

    // Ham tinh tong
    int tong = 0;
    for (auto &s : ds) tong += s.sl;
    cout << "Tong so sach trong thu vien : " << tong << endl;
}
