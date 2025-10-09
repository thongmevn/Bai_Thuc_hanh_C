#include <iostream>
using namespace std;

main () {
    float diem4;
    float diem10;
    string diemChu;

    cout << "Nhap diem thang 10 : ";
    cin >> diem10;

    if (diem10 >= 9.0){
        diem4 = 4.0;
        diemChu = "A+";
    } else if (diem10 >= 8.0 && diem10 < 9.0){
        diem4 = 3.5;
        diemChu = "A";
    } else if (diem10 >= 7.0 && diem10 < 8.0){
        diem4 = 3.0;
        diemChu = "B+";
    } else if (diem10 >= 6.0 && diem10 < 7.0){
        diem4 = 2.5;
        diemChu = "B";
    } else if (diem10 >= 5.0 && diem10 < 6.0){
        diem4 = 2.0;
        diemChu = "C";
    } else if (diem10 >= 5.5){
        diem4 = 2.0;
        diemChu = "C";
    } else if (diem10 >= 4.0 && diem10 < 5.0){
        diem4 = 1.5;
        diemChu = "D+";
    } else {
        diem4 = 1.0;
        diemChu = "F";
    }

    cout << "\n => Ket qua \n" << endl;
    cout << "Diem thang 4 la : " << diem4 << endl;
    cout << "Diem chu la : " << diemChu << endl;
}