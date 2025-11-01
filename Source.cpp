#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
bool Check_SHT(int N);
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
	cout << "Tich = " << tich(a,b);
	system("pause");
	return 0;
	
}

int tich(int a,int b){
	return a*b;
}

int tinhhieu(int a, int b) {
	return a - b;
}
int tinhTong(int a, int b){
	return a+b;
}
bool Check_SHT(int N)
{
    int S = 0;
    for (int i = 1; i < N; i++)
        if (N % i == 0)
            S += i; 

    if (S == N)
        return true; 
    return false;     
}
