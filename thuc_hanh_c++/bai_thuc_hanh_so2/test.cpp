#include <iostream>
#include <string>
using namespace std;

// Hàm nhập thông tin & điểm
void nhapThongTin(string *hoten, string *ngaysinh, float *toan, float *ly, float *hoa) {
    cout << "Nhap ho ten: ";
    getline(cin, *hoten);

    cout << "Nhap ngay sinh (dd/mm/yyyy): ";
    getline(cin, *ngaysinh);

    cout << "Nhap diem Toan: ";
    cin >> *toan;
    cout << "Nhap diem Ly: ";
    cin >> *ly;
    cout << "Nhap diem Hoa: ";
    cin >> *hoa;
}

// Hàm tính điểm trung bình
float tinhTrungBinh(float *toan, float *ly, float *hoa) {
    return (*toan + *ly + *hoa) / 3.0f;
}

// Hàm xếp loại
string xepLoai(float *dtb) {
    if (*dtb >= 8.0) return "Gioi";
    else if (*dtb >= 6.5) return "Kha";
    else if (*dtb >= 5.0) return "Trung binh";
    else return "Yeu";
}

// Hàm in kết quả
void inKetQua(string *hoten, string *ngaysinh, float *dtb, string *loai) {
    cout << "\n===== KET QUA =====" << endl;
    cout << "Ho ten    : " << *hoten << endl;
    cout << "Ngay sinh : " << *ngaysinh << endl;
    cout << "Diem TB   : " << *dtb << endl;
    cout << "Xep loai  : " << *loai << endl;
}

// Hàm main
int main() {
    string hoten, ngaysinh;
    float toan, ly, hoa;

    nhapThongTin(&hoten, &ngaysinh, &toan, &ly, &hoa);

    float dtb = tinhTrungBinh(&toan, &ly, &hoa);

    string loai = xepLoai(&dtb);

    inKetQua(&hoten, &ngaysinh, &dtb,   &loai);

    return 0;
}
