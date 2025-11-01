#include <iostream>
using namespace std;
int gcd(int a, int b){
    // Nếu a = 0 => ucln(a,b) = b
    // Nếu b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; // a = a - b
        }else{
            b -= a;
        }
    }
    return a; // return a or b, bởi vì lúc này a và b bằng nhau
}

int main(){
	int a,b;
	cout << "Nhap a:";
	cin >> a;
	cout << "Nhap b";
	cin >> b;
	cout << "Uoc chung lon nhat la: " << gcd(a,b);
	return 0;
}