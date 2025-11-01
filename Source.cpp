#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a, b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "nhap a:";
	cin >> a;
	cout << "nhap b:";
	cin >> b;
	cout<<"Tong ="<< tinhTong(a,b);
	cout << "Hieu = " << tinhhieu(a, b);
	system("pause");
	return 0;
	
}
int tinhhieu(int a, int b) {
	return a - b;
}
int tinhTong(int a, int b){
	return a+b;
}