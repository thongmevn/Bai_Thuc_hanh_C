#include <iostream>
using namespace std;

void TinhTienGui(long tienGui, int thang, double laiSuat) {
    int i = 1;
    while (i <= thang) {
        tienGui = tienGui + (tienGui * laiSuat / 100);
        i = i + 1; // i++
    }
    cout << "\n => Ket qua : " << endl;
    cout << "So tien nhan duoc sau " << thang << " thang la: " << tienGui << endl;
}

int main () {

    long tienGui;
    int thang;
    double laiSuat;

    cout << "Nhap so tien gui: ";//100000
    cin >> tienGui;
    cout << "Nhap so thang gui: ";//5
    cin >> thang;
    cout << "Nhap lai suat (%/thang): ";//10
    cin >> laiSuat;
    //Goi ham
    TinhTienGui(tienGui,thang,laiSuat);
}