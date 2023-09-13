#include<bits/stdc++.h>
using namespace std;
class mang{
	private:
		int* a;
		int n;
	public:
		mang();
		mang(int x);
//		~mang();
	    friend istream& operator>>(istream& nhap,mang &A);
		friend ostream& operator<<(ostream& xuat,mang A);
		mang operator+(mang y);	
		mang operator*(mang z);
		int operator++();
		friend void xoa(int *a,int n,int vitrixoa,mang Q);
      
};

mang::mang(){
	n=0;
	a=NULL;
	}
mang::mang(int x){
     n=x;
     a=new int[n];
     for(int i =0;i<n;i++){
     	a[i]=2;
     	}
}
//mang::~mang(){
//	delete []a;
//	}
istream& operator>>(istream& nhap,mang &A){
   cout<<"\nNhap n: ";		nhap>>A.n;
   A.a=new int[A.n];
   for(int i = 0;i<A.n;i++){
   	cout<<"a["<<i<<"]= ";
   	nhap>>A.a[i];
   	}
   	return nhap;
}	
ostream& operator<<(ostream& xuat,mang A){
	for(int i = 0;i<A.n;i++){
		xuat<<A.a[i]<<" ";
		}
		return xuat;
	}
mang mang::operator+(mang y){
	mang kq;
	if(n==y.n){
		kq.n=n;
		kq.a=new int[n];
		for(int i = 0;i<n;i++){
			kq.a[i]=a[i]+y.a[i];
		}
		}
	else{
		cout<<"\nKhong cong duoc vi hai mang ko = nhau";
	}	
	return kq;
	}
mang mang::operator*(mang y){
    mang kq;
    if(n==y.n){
    	kq.n=n;
    	kq.a=new int[n];
    	for(int i=0;i<n;i++){
    		kq.a[i]=a[i]*y.a[i];
    	}
    	}
    else{
    	cout<<"\nKhong nhan duoc vi  hai mang ko = nhau";
	}
	return kq;
}
int mang::operator++(){
		int MAX=a[0];
		for(int i= 0;i<n;i++){
			if(a[i]>MAX)
			   MAX=a[i];
			}
		return MAX;
		}	
int main(){
    mang Q,Z,tong,tich;
    int *a;
    int n;
    int vitrixoa;
    cout<<"\nNhap mang thu 1 ";
    cin>>Q;
    cout<<"\nXuat mang thu 1: ";
    cout<<Q;
    cout<<"\nMax cua mang thu 1 la: "<<++Q;
    cout<<"\nNhap mang thu 2 ";
    cin>>Z;
    cout<<"\nXuat mang thu 2: ";
    cout<<Z;
    cout<<"\nMax cua mang thu 2 la: "<<++Z;
    tong=Q+Z;
    cout<<"\nTong 2 mang la: "<<tong;
    tich=Q*Z;
    cout<<"\nTich 2 mang la: "<<tich;
    xoa(a,n,vitrixoa,Q);
    cout<<"\nXoa 1 phan tu trong mang 1: "<<Q;
}	
	
