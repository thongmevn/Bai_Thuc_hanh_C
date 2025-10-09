
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long SoTienCanNhan;
    int Thang;
    double LaiSuat;

    cout << "Nhap so tien can nhan: ";//150000
    cin >> SoTienCanNhan;
    cout << "Nhap so thang gui: ";//5
    cin >> Thang;
    cout << "Nhap lai suat (%/thang): ";//10
    cin >> LaiSuat;

    float TienGui = SoTienCanNhan / pow(1 + LaiSuat / 100, Thang);

    cout << "\n => Ket qua : " << endl;
    cout << "So tien can gui la: " << TienGui << endl;
    return 0;
}