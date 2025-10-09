#include <iostream>
#include <cmath>

using namespace std; 

bool KiemTraSNT (int n){
	if (n < 2) return false; // so 0 , 1 khong phai la so nguyen to.
	if (n == 2) return true; // so 2 la so nguyen  to
	if (n % 2 == 0) return false; // so chan khong phai la so nguyen to
	for (int i = 3; i <= sqrt(n) ; i += 2){
		if (n % i == 0) return false;
	}
	return true;
}
//Ham dem so nguyen to
int DemSNT(int m, int n){
	int count = 0;
	for (int i = m; i<=n ; i++){
		if(KiemTraSNT(i)) 
			count++;
	}
	return count;
}

//Ham main
int main() {
	cout << "So nguyen to trong doan [1,10] : " <<DemSNT(1,10)  << endl;
	cout << "So nguyen to trong doan [1,1000] : " <<DemSNT(1,1000)  << endl;
	cout << "So nguyen to trong doan [1001,100000] : " <<DemSNT(1001,100000)  << endl;
}
