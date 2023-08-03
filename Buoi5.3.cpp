#include<iostream>
using namespace std;
void Nhap(int a[],int n){
	cout<<"Nhap so luong phan tu mang:";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";cin>>a[i];
	}
}

void MotLan(int a[],int n){
	int S=1;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[i]==a[j]){
				cout<<"Cac so xuat hien mot lan:"<<a[i]<<endl;
			}
		}
	}
}

int main(){
	int a[100],n;
	Nhap(a,n);
	MotLan(a,n);
}
