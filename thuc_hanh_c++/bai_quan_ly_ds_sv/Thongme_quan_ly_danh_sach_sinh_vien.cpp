#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

// Cau truc sinh vien
struct SinhVien {
    string hoTen;
    string ngaySinh;
    string gioiTinh;
    float diemTB;
};

// Nhap thong tin mot sinh vien
SinhVien nhapSV(){
    SinhVien sv;
    cin.ignore(); // xoa \na
    cout << "Nhap ho ten : ";
    getline(cin , sv.hoTen);
    cout << "Nhap ngay sinh (dd/mm/yyyy) : ";
    getline(cin, sv.ngaySinh);
    cout << "Nhap gioi tinh : ";
    cin >> sv.gioiTinh;
    cout << "Nhap diem trung binh : ";
    cin >> sv.diemTB;
    return sv;
}

// Hien thi danh sach theo bang
void hienThiDS(const vector<SinhVien> &ds){
    cout << left    << setw(20) << "Ho ten  | "
                    << setw(15) << "Ngay sinh | "
                    << setw(10) << "Gioi tinh | "
                    << setw(10) << "Diem TB | " << endl;
    cout << string(60, '-') << endl;

    for (auto sv : ds) {
        cout << left << setw(20) << sv.hoTen
            << setw(15) << sv.ngaySinh
            << setw(10) << sv.gioiTinh
            << setw(10) << sv.diemTB << endl;
    }
}

// Xoa sinh vien theo ten 
void xoaSVTheoTen(vector<SinhVien>&ds , string ten) {
    bool found = false;
    for (auto it = ds.begin(); it != ds.end();++it){
        if(it->hoTen == ten) {
            ds.erase(it);
            cout << "Xoa sinh vien ten : " << ten << " thanh cong." << endl;
            found == true;
            break;
        }
    }
    if (!found) cout << "khong tim thay sinh vien!\n";
}

// Sua thong tin sinh vien theo ten
void suaSinhVien(vector<SinhVien> &ds, string ten){
    bool found = false;
    for (auto &sv : ds) {
        if (sv.hoTen == ten) {
            cout << "Nhap lai thong tin moi cho sinh vien." << endl;
            sv = nhapSV();
            found = true;
            break;
        }
    }
    if(!found) cout << "khong tim thay sinh vien!\n";
}

// Tim kiem sinh vien theo  ten
void timSVTheoTen(const vector<SinhVien> &ds, string ten) {
    bool found = false;
    for (auto sv : ds) {
        if (sv.hoTen == ten) {
            cout << "\nThong tin sinh vien can tim : \n";
            cout << left << setw(25) << "Ho ten | "
                << setw(15) << "Ngay sinh | "
                << setw(10) << "Gioi tinh | "
                << setw(10) << "Diem TB | " << endl;
            cout << left << setw(25) << sv.hoTen
                << setw(15) << sv.ngaySinh
                << setw(10) << sv.gioiTinh
                << setw(10) << sv.diemTB << endl;
            found = true;
        }
    }
    if(!found) cout << "Khong tim thay sinh vien!\n";
}

// Tim kiem sinh vien theo khoang diem trung binh
void timTheoDiem (const vector<SinhVien> &ds , float minD, float maxD){
    bool found = false;
    cout << "Danh sach sinh vien co diem tu " << minD << " den " << maxD << " : \n";
    for (auto sv : ds) {
        if (sv.diemTB >= minD && sv.diemTB <= maxD){
            cout << left << setw(25) << sv.hoTen
                << setw(15) << sv.ngaySinh
                << setw(10) << sv.gioiTinh
                << setw(10) << sv.diemTB << endl;
            found = true;
        }
    }
    if (!found) cout << "khong tim thay sinh vien trong khoang diem nay.\n";
}

// Sap xep theo diem trung binh giam dan
void sapXepTheoDiem(vector<SinhVien> &ds) {
    for (int i = 0; i < ds.size() - 1 ; i++) {
        for (int j = i + 1; j < ds.size(); j++) {
            if(ds[i].diemTB < ds[j].diemTB){
                swap(ds[i], ds[i]);
            }
        }
    }
    cout << "Da sap xep giam dan roi.\n";
}

// sap xep theo ten A => Z
void sapXepTheoTen(vector<SinhVien> &ds) {
    for (int i = 0; i < ds.size(); i++) {
        for (int j = i + 1; j < ds.size(); j++) {
            if(ds[i].hoTen > ds[j].hoTen) {
                swap(ds[i] , ds[j]);
            }
        }
    }
    cout << "Da sap xep theo A => Z . \n";
}

// Ham main
int main() {
    vector<SinhVien> ds;
    int chon;

    do {
        cout << "\n ===========MENU QUAN LY SINH VIEN =======\n";
        cout << "1. Them sinh vien \n";
        cout << "2. Hein thi danh sach \n";
        cout << "3. Xoa sinh vien theo ten \n";
        cout << "4. Sua thong tin sinh vien \n";
        cout << "5. Tim sinh vien theo ten \n";
        cout << "6. Tim sinh vien theo khoang diem \n";
        cout << "7. Sap xep theo diem trung binh giam dan \n";
        cout << "8. Sap xep theo A => Z \n";
        cout << "9. Thoat \n";
        cout << "Lua chon : ";
        cin >> chon;

        switch (chon) {
            case 1 : {
                SinhVien sv = nhapSV();
                ds.push_back(sv);
                break;
            }
            case 2 : {
                hienThiDS(ds);
                break;
            }
            case 3 : {
                string ten;
                cin.ignore();
                cout << "Nhap ten can xoa : ";
                getline(cin, ten);
                xoaSVTheoTen(ds,ten);
                break;
            }
            case 4 : {
                string ten;
                cin.ignore();
                cout << "Nhap ten can sua : ";
                getline(cin,ten);
                suaSinhVien(ds,ten);
                break;
            }
            case 5 : {
                string ten;
                cin.ignore();
                cout << "Nhap ten can tim : ";
                getline (cin, ten);
                timSVTheoTen(ds,ten);
                break;
            }
            case 6 : {
                float minD, maxD;
                cout << "Nhap diem min  : ";
                cin >> minD;
                cout << "Nhap diem max : ";
                cin >> maxD;
                timTheoDiem(ds,minD, maxD);
                break;
            }
            case 7 : {
                sapXepTheoDiem(ds);
                break;
            }
            case 8 : {
                sapXepTheoTen(ds);
                break;
            }
            case 9 : {
                cout << "Thoat chuong trinh. \n";
                break;
            }
            default : 
                cout << "Lua chon khong hop le!\n";
        }

    }
    while (chon != 0);
    return 0;
}