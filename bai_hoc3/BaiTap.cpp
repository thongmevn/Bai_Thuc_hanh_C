#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
	string MaSV;
	string HoTen;
	int Tuoi;
	float DTB;
};

void NhapDS(SinhVien sv[] , int n){
	cout << "Nhap thong tin sinh vien."<<endl;
	cin.ignore();// loai bo ky tu '\n' con lai
	for (int i = 0; i < n; i++){
		cout<< " => Thong tin sinh vien thu : "<< i+1 <<endl;
		cout << "Nhap MaSV : " ;
		getline(cin,sv[i].MaSV);
		
		cout << "Nhap ho ten : ";
		getline(cin,sv[i].HoTen);
		
		cout << "Nhap tuoi : ";
		cin>>sv[i].Tuoi;
		
		cout << "Nhap DTB : ";
		cin >> sv[i].DTB;
		
		cin.ignore();
	}
}

// /xuat danh sach sinh vien
void XuatDS(SinhVien sv[], int n){
	cout <<"====================================================================="<<endl;
	cout<<"====> Danh sach sinh vien."<< endl;
	for (int i = 0; i < n; i++){
		cout<<"---------> Danh sach nguoi thu : "<<i+1 << endl;;
		cout<<" MaSV   : "<<sv[i].MaSV << endl
			<<" Ho ten : "<<sv[i].HoTen << endl
			<<" Tuoi   : "<<sv[i].Tuoi << endl
			<<"  DTB   : "<<sv[i].DTB << endl;
	}
}

// Tim Diem cao nhat
void TimMax(SinhVien sv[], int n){
	int max = 0;
	for (int i = 1; i < n; i++){
		if(sv[i].DTB > sv[max].DTB){
			max = i;
		}
	}
	cout <<"====================================================================="<<endl;
	cout<<"=====> Sinh vien co diem cao nhat : "<< endl;;
	cout<<" MaSV   : "<<sv[max].MaSV << endl
		<<" Ho ten : "<<sv[max].HoTen << endl
		<<" Tuoi   : "<<sv[max].Tuoi << endl
		<<"  DTB   : "<<sv[max].DTB << endl;
}

// Ham xep giai dan
void XepGiaiDan(SinhVien sv[], int n){
	for (int i = 0 ; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (sv[i].DTB < sv[j].DTB){
				SinhVien temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
	cout <<"====================================================================="<<endl;
	cout << "\n====> Danh sach sau khi sap xep giam dan theo DTB:\n";
    XuatDS(sv, n);
}

//Ham main
main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    
    SinhVien sv[100];
    
    //Goi ham
	NhapDS(sv,n);
	XuatDS(sv,n);
	TimMax(sv,n);
	XepGiaiDan(sv,n);
	
	return 0;
}
