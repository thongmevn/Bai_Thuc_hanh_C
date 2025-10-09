#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

//Ham kiem tra mat khau manh
int CheckPassword (char *pw){
	if (strlen(pw) < 8)
		return 0;
	
	bool ChuHoa = false;
	bool ChuThuong = false;
	bool ChuSo = false;
	
	for (int i = 0; pw[i] != '\0'; i++){
		if (isupper(pw[i])) ChuHoa = true;
		if (islower(pw[i])) ChuThuong = true;
		if (isdigit(pw[i])) ChuSo = true;
	}
	
	if (ChuHoa && ChuThuong && ChuSo)
		return 1;
	else 
		return 0;
}

// Ham main
int main() {
	char pw1[] = "Abc123456k";
	char pw2[] = "sdfghjklkjhgfg";
	char pw3[] = "QWERTYUIOXDFGH";
	
	cout << "Mat khau 1: " << (CheckPassword(pw1) ? "Manh" : "Yeu") << endl;
	cout << "Mat khau 2: " << (CheckPassword(pw2) ? "Manh" : "Yeu") << endl;
	cout << "Mat khau 3: " << (CheckPassword(pw3) ? "Manh" : "Yeu") << endl;
	
	return 0;
}
