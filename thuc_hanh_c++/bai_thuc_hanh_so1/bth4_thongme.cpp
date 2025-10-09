#include <iostream>
#include <string>
using namespace std;

int main() {
    string hoTen;
    float diemToan, diemVan, diemTin;

    // Nhap thong tin sinh vien
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);

    cout << "Nhap diem toan: ";     
    cin >> diemToan;
    cout << "Nhap diem van: ";
    cin >> diemVan;
    cout << "Nhap diem tin: ";
    cin >> diemTin;

    float diemTrungBinh = (diemToan + diemVan + diemTin) / 3;
    cout << "\n=== Ket qua ===\n";
    cout << "Ho ten: " << hoTen << endl;
    cout << "Diem trung binh: " << diemTrungBinh << endl;

    if (diemTrungBinh < 5) {
        cout << "Hoc yeu";
    } else if (diemTrungBinh < 7) {
        cout << "Hoc trung binh";
    } else if (diemTrungBinh < 8) {
        cout << "Hoc kha";
    } else {
        cout << "Hoc gioi";
    }

    return 0;
}