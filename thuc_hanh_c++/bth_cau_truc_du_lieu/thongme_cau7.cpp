#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct MatHang {
    string ma, ten;
    int soLuong, ton, baoHanh;
    double donGia;
};

// sap xep ton tang dan
bool soSanhTonTang(const MatHang &a, const MatHang &b) {
    return a.ton < b.ton;
}

int main() {
    int n;
    cout << "Nhap so luong mat hang : ";
    cin >> n;

    vector<MatHang> ds(n);
    
    // Nhap vao danh sach mat hang
    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin mat hang thu " << i + 1 << ":\n";
        cin.ignore();
        cout << "Ma hang : "; getline(cin,ds[i].ten);
        cout << "Ten mat hang : "; getline(cin, ds[i].ten);
        cout << "So luong : "; cin >> ds[i].soLuong;
        cout << "Don gia : "; cin >> ds[i].donGia;
        cout << "So luong ton : "; cin >> ds[i].ton;
        cout << "Bao hanh (thang) : "; cin >> ds[i].baoHanh;

    }

    // Tim mat hang co so luong nhieu nhat
    MatHang maxTon = ds[0];
    for (int i = 1; i < ds.size(); i++) {
        if (ds[i].ton > maxTon.ton)
            maxTon = ds[i];
    }
    cout << "\nMat hang co ton nhieu nhat : " << maxTon.ten
        << " co " << maxTon.ton << " san pham.\n";

    // Tim mat hang co don gia nhieu nhat va in ket qua
    MatHang maxDonGia = ds[0];
    for (int i = 1; i < ds.size(); i++) {
        if (ds[i].donGia > maxDonGia.donGia) maxDonGia = ds[i];
    }
    cout << "\nMat hang co don gia nhieu nhat : " << maxDonGia.ten
        << " co " << maxDonGia.donGia << " VND.\n";
    
    // In mat hang co bao hanh hon 12 thang
    cout << "\n Danh sach co bao hanh hon 12 thang.\n";
    for (int i = 0; i < ds.size(); i++) {
        if(ds[i].baoHanh > 12) 
            cout << " => " << ds[i].ten << " bao hanh : " << ds[i].baoHanh << " thang.\n";
    }

    // Sap xep tang dan theo ton

    sort(ds.begin(), ds.end(), soSanhTonTang);

    cout << "\nDanh sach mat hang sap xep tang dan theo ton kho :\n";
    for (auto &x : ds)
        cout << x.ten << " - Ton: " << x.ton << endl;

}