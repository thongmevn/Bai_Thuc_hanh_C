#include <iostream>
using namespace std;

// Ham nhap ma tran
void NhapMaTran(int a[10][10], int &rows, int &cols){
    cout << "Nhap so hang cua ma tran : ";
    cin >> rows;
    cout << "Nhap so cot cua ma tran : ";
    cin >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Nhap a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
    }
}

// Ham xuat ma tran
void XuatMaTran(int a[10][10], int rows, int cols) {
    cout << "Ma tran vua nhap la : " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

// Ham main 
int main() {
    int a[10][10];
    int rows, cols;

    // Goi ham
    NhapMaTran(a, rows, cols);
    XuatMaTran(a, rows, cols);

    return 0;
}