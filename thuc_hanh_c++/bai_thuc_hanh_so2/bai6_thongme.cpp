#include <iostream>
using namespace std;

void TinhThangItNhat (long TienGui, long SotienCanNhan, double LaiSuat) {
    int Thang = 0;
    while (TienGui < SotienCanNhan){
        Thang++;
        TienGui = TienGui + (TienGui * LaiSuat / 100);
    }
    cout << "\n => Ket qua : " << endl;
    cout << "So thang it nhat de co so tien can nhan la: " << Thang << endl;
}

int main () {
    long tienGui;
    long sotienCanNhan;
    double laiSuat;

    cout << "Nhap so tien gui: ";//100000
    cin >> tienGui; 
    cout << "Nhap so tien can nhan: ";//150000
    cin >> sotienCanNhan;
    cout << "Nhap lai suat (%/thang): ";//10
    cin >> laiSuat;

    TinhThangItNhat(tienGui, sotienCanNhan, laiSuat);
}