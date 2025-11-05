#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

//ham dem khoang trong 
int demKhoangTrang(const string &s) {
    int c = 0;
    for (char ch : s)
        if (isspace(ch)) c++;
    return c;
}

// Ham xoa khoang trong
string xoaKhoangTrangThua(string s) {
    string res;
    bool space = false;
    cout << s << "\n";
    for (char c : s) {
        cout << "token : " << c << endl;
        if (c == ' ') {
            if (!space && !res.empty()) {
                res += ' ';
                // cout << "res in if : "  << res << endl;
            }
            space = true;
        } else {
            // cout << "in if : " << res << endl;
            res += c;
            space = false;
        }
    }
    return res;
}

// Doi ky tu dau tien cua moi tu thanh hoa
string vietHoaDauMoiTu(string s) {
    bool newWord = true;
    for (char &c : s) {
        if (isspace(c)) newWord = true;
        else if (newWord) {
            c = toupper(c);
            newWord = false;
        } else c = tolower(c);
    }
    return s;
}

//Ham main
int main() {
    string s;

    // a. Ham nhap string (chuoi)
    cout << "Nhap chuoi: ";
    getline(cin, s);

    // b. Ham dem khoang trong
    cout << "So khoang trang : " << demKhoangTrang(s) << endl;

    // c. Ham xoa khoang trong
    cout << "So khoang trang: " << demKhoangTrang(s) << endl;
    string kq = xoaKhoangTrangThua(s);
    cout << "Chuoi sau khi xoa khoang trang thua: " << kq << endl;


    // d. Nhap va noi hai chuoi s1, s2 , va in ket qua
    string s1, s2;
    cout << "Nhap s1 : "; getline(cin, s1);
    cout << "Nhap s2 : "; getline(cin, s2);
    cout << "Chuoi sau khi noi (s1 + s2) : " << s1 + s2 << endl;

    // e . Doi ky tu dau tien cua moi tu thanh hoa
    cout << "Viet hoa ky tu dau moi tu: " << vietHoaDauMoiTu(kq) << endl;

    // f. Dao nguoc chuoi
    reverse(s.begin(), s.end());
    cout << "Chuoi dao nguoc: " << s << endl;

}