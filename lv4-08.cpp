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
		cout<<n<<" tang dan";
	} else {
		cout<<n<<" khong tang dan";
	}
	return 0;
}

bool Kiemtra(int n){
	int s = n, last = s % 10, max = last; 
	while (s > 10){
		s /= 10;
		last = s % 10;
		if (max < last)
			return false;
		max = last;
	}
	return true;
}