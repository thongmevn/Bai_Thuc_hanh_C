#include <iostream>
#include <string>
using namespace std;

int main() {
    string tenMatHang;
    float trongLuong, donGia;
    string maChatLuong;
    int soLuong;

    // nhap du lieu
    cout << "Nhap ten mat hang : ";
    getline(cin, tenMatHang);

    cout << "Nhap trong luong : ";
    cin >> trongLuong;

    cout << "Nhap don gia : ";
    cin >> donGia;

    cout << "Nhap ma chat luong : ";
    cin >> maChatLuong;

    cout << "Nhap so luong : ";
    cin >> soLuong;

    // xuat du lieu
    cout << "\n =>  Thong tin mat hang \n";
    cout << "Ten mat hang  : " << tenMatHang << endl;
    cout << "Trong luong   : " << trongLuong << " kg" << endl;
    cout << "Don gia       : " << donGia << " VND" << endl;
    cout << "Ma chat luong : " << maChatLuong << endl;
    cout << "So luong      : " << soLuong << endl;

    return 0;
}
