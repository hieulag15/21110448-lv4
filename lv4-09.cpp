#include<iostream>
bool Kiemtra(int n);
using namespace std;


int main() {
	int n;
	do {
	cout <<" Nhap n: ";
	cin >> n;
	} while ( n < 0);
	if (Kiemtra(n)){
		cout<<n<<" giam dan";
	} else {
		cout<<n<<" khong giam dan";
	}
	return 0;
}

bool Kiemtra(int n){
	int s = n, last = s % 10, min = last; 
	while (s > 10){
		s /= 10;
		last = s % 10;
		if (min > last)
			return false;
		min = last;
	}
	return true;
}

