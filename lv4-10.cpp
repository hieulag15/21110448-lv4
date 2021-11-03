#include<iostream>
int Fibonacy(int n);
using namespace std;


int main(){
	int n;
	cout << "Nhap N phan tu dau tien: ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cout<<Fibonacy(i)<<"  ";
	}
	return 0;
}

int Fibonacy(int n){
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    
    if (n < 0) {
        return -1;
    } else {
        if ((n == 0) or (n == 1)) {
            return n;
        } else {
            for(int i = 2; i < n; i++){
                f0 = f1;
                f1 = fn;
                fn = f0 + f1;
            }
        } return fn;
    }
}
