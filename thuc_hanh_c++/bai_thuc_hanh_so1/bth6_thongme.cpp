#include <iostream>

using namespace std;

main () {
    long tienGui;
    int thang;
    float laiSuat;

    cout << "Nhap so tien gui: ";//100000
    cin >> tienGui;
    cout << "Nhap so thang gui: ";//5
    cin >> thang;
    cout << "Nhap lai suat (%/thang): ";//10
    cin >> laiSuat;

    int i = 1;
    while (i <= thang) {
        tienGui = tienGui + (tienGui * laiSuat / 100);
        i = i + 1;//i++
    }
    cout << "\n => Ket qua : " << endl;
    cout << "So tien nhan duoc sau " << thang << " thang la: " << tienGui << endl;
}