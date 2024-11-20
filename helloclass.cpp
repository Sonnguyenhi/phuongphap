#include <iostream>
#include <math.h>
#include <vector>
#include <stdio.h>
#include <climits>
#define MAX 100
using namespace std;

int check(int n){
	while (n){
		int r = n % 10;
		if(r % 2 == 0)
			return 0;
			n/= 10;
	}
		return 1;	
}
void nhap(int a[], int &n){
	do{
		printf("Moi nhap vao tong cac phan tu cua mang = ");
		scanf("%d", &n);
	}while(n <= 0 || n > 100);
for(int i  = 0; i < n; i++){
    printf("Moi nhap vao cac gia tri cho mang a[%d] =", i);
	scanf("%d", &a[i]);
}
}
void xuat(int a[], int n){
	int tong = 0;
	for(int i = 0; i < n; i++){
		if(check(a[i])) ++tong;
	}
		printf("%d",tong );
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
void lietke(int a[], int n){
for(int i = 0; i < n; i++){
	if(a[i] % 2 == 1){
		printf("%d", a[i]);
	}
}
}
int main(){
	int n;
	int a[100];
	nhap(a, n);
	xuat(a, n);
	cout << "Cac so le la = ";
	lietke(a, n);
	return 0;
}