#include <iostream>
using namespace std;

main () {
    long tienGui;
    long tienNhan;
    double laiSuat;

    cout << "Nhap so tien gui: ";//100000
    cin >> tienGui;
    cout << "Nhap tien nhan duoc: ";//120000
    cin >> tienNhan;
    cout << "Nhap lai suat (%/thang): ";//5
    cin >> laiSuat;

    int thang = 0;
    while (tienGui < tienNhan) {
        thang++;
        tienGui = tienGui + (tienGui * laiSuat / 100);
    }
    cout << "\n => Ket qua : " << endl;
    cout << "So thang can gui de duoc " << tienNhan << " la: " << thang << " thang." << endl;
    cout << "tien gui sau " << thang << " thang la: " << tienGui << endl;
}