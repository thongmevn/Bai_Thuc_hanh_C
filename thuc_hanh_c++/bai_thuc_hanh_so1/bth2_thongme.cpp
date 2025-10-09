#include <iostream>
#include <string>
using namespace std;

main () {
    string tenKhachHang;
    int soDienCu;
    int soDienMoi;
    float donGiaDien;
    float tienDien;

    cout << "Nhap ten khach hang: ";
    getline(cin, tenKhachHang);

    cout << "Nhap so dien cu: ";
    cin >> soDienCu;

    cout << "Nhap so dien moi: ";
    cin >> soDienMoi;

    cout << "Nhap don gia dien: ";
    cin >> donGiaDien;

    float soLuong = soDienMoi - soDienCu;

    if (soLuong <= 100){
        tienDien = soLuong * 1418;
    } else if (soLuong <= 150){
        tienDien = 100 * 1418 + (soLuong - 100)*1622;
    } else if (soLuong <= 200){
        tienDien = 100 * 1418 + 50 * 1622 + (soLuong - 150)*2044;
    } else if (soLuong <= 300){
        tienDien = 100* 1418 + 50 * 1622 + 50*2044 + (soLuong - 200)*2210;
    } else if (soLuong <= 400){
        tienDien = 100 * 1418 + 50 * 1622 + 50*2044 + 100*2210 + (soLuong - 300)*2361;
    } else {
        tienDien = 100 * 1418 + 50 * 1622 + 50*2044 + 100*2210 + 100* 2361 + (soLuong - 400)*2420;
    }

    cout << "\n => Ket qua \n" << endl;
    cout << "So tien dien cua khach hang " << tenKhachHang << " la : " << tienDien << " VND" << endl;
}