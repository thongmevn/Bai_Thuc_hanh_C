#include <iostream>
#include <cstring>

using namespace std;

void daoNguocChuoi(char *str){
    int left = 0;
    int right = strlen(str) - 1;//-1 vi chi so bat dau tu 0
    char temp;

    while (left < right){
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main () {
    char str[100];

    cout << "Nhap chuoi: ";
    cin.getline(str, 100);

    daoNguocChuoi(str);
    cout << "Chuoi sau khi dao nguoc: " << str << endl;
    return 0;
}