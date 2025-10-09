#include <iostream>
using namespace std;

main () {
    int month;
    int year;
    int daysInMonth;

    cout << "Nhap thang: ";
    cin >> month;

    cout << "Nhap nam: ";
    cin >> year;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        daysInMonth = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else {
        daysInMonth = 0;
    }
    
    if (daysInMonth != 0) {
        cout << "Thang " << month << " nam " << year << " co " << daysInMonth << " ngay." << endl;
    } else {
        cout << "Thang khong hop le!" << endl;
    }
}