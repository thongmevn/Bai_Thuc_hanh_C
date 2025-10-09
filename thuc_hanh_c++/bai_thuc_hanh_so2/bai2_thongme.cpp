#include <iostream>
using namespace std;

void TinhDiem(float diem10) {
    float diem4;
    string xepLoai;

    if (diem10 >= 9.0){
        diem4 = 4.0;
        xepLoai = "A+";
    } else if (diem10 >= 8.0){
        diem4 = 3.5;
        xepLoai = "A";
    } else if (diem10 >= 7.0){
        diem4 = 3.0;
        xepLoai = "B+";
    } else if (diem10 >= 6.0){
        diem4 = 2.5;
        xepLoai = "B";
    } else if (diem10 >=5.0){
        diem4 = 2.0;
        xepLoai = "C";
    } else if (diem10 >=4.0){
        diem4 = 1.0;
        xepLoai = "D";
    } else if (diem10  < 4.0){
        diem4 = 1.0;
        xepLoai = "F";
    }
    cout << "\n => Ket qua : " << endl;
    cout << "Diem he 4 : " << diem4 << endl;
    cout << "Xep loai : " << xepLoai << endl;

}

int main () {
    float diem10;

    cout << "Nhap diem he 10: ";
    cin >> diem10;
    //Goi ham
    TinhDiem(diem10);
}