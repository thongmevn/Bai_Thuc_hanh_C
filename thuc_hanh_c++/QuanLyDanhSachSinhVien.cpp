#include <iostream>
#include <cstring>

using namespace std;

struct SinhVien {
	char maSV[20];
	char HoTen[50];
	int tuoi;
	float diemTB;
};

void nhap1SV(struct SinhVien &sv){
	cout <<"Nhap ma sinh vien : ";
	cin.ignore();
	cin.getline(sv.maSV,20);
	cout << "Nhap ho ten : ";
	cin.getline(sv.HoTen,50);
	cout << "Nhap tuoi : ";
	cin >> sv.tuoi;
	cout << "Nhap diem trung binh : ";
	cin >> sv.diemTB;
}

void nhapDanhSachSV (struct SinhVien ds[], int n){
	for (int i = 0; i < n; i++){
		cout << "-------------Nhap sinh vien thu : "<<(i+1)<<endl;
		nhap1SV(ds[i]);
	}
}

void xuat1SV(struct SinhVien sv){
	cout <<"Ma sv 	: "<<sv.maSV <<endl
		<< "Ho ten 	: " <<sv.HoTen <<endl
		<< "Tuoi 	: " <<sv.tuoi <<endl
		<< "Diem TB : "<<sv.diemTB <<endl;
}

void XuatDanhSach(struct SinhVien ds[], int n){
	for (int i = 0; i < n; i++){
		cout<<" ===> Danh sach sinh vien thu : "<<(i+1) << endl;
		xuat1SV(ds[i]);
	}
}

int main() {
	int n;
	cout << "Nhap so luong sinh vien : ";
	cin >> n;
	
	struct SinhVien ds[100];
	
	nhapDanhSachSV(ds,n);
	
	cout<<" ============> Danh sach sinh vien ======="<<endl;
	XuatDanhSach(ds,n);
}
