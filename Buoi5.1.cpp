#include<iostream>
#include<math.h>
using namespace std;
int NhapTangDan(int a[], int n){
	cout<<"Nhap so phan tu mang:";cin>>n;
	int i;
	Nhap:
	for(i=0;i<n;i++){
		cout<<"a["<<i<<"]=";cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]>a[i+1]||a[i]<0){
			cout<<"Vui long nhap theo thu tu tang dan";
			goto Nhap;
		}
	}
}

 bool SoNguyenTo(int n){
 	if(n<2)
 		return false;
 	for(int i=2;i<=sqrt(n);i++){
 		if(n%i==0){
 			return false;
		 }
	 }
	 return true;
 }

int main(){
	int a[100],n;
	NhapTangDan(a,n);
	for(int i=0;i<n;i++){
		if(SoNguyenTo(a[i])){
			cout<<"Cac so nguyen to trong mang:"<<a[i]<<endl;
		}
	}
}
