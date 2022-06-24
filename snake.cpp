#include<bits/stdc++.h>
using namespace std;
const int n=10;
char a[20][20];
int cx=1,cy=1,ix=0,iy=0,coin=0;
//void print(){
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++) cout << a[i][j];
//		cout << '\n';
//	}
//}
void move(char x){
	if(x=='w') ix--;
	if(x=='a') iy--;
	if(x=='s') ix++;
	if(x=='d') iy++;
	memset(a,'#',sizeof(a));
	a[ix%20][iy%20]='@';
	a[cx%20][cy%20]='$';
	system("cls");
//	print();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout << a[i][j];
		cout << '\n';
	}
}
int main(){
	memset(a,'#',sizeof(a));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout << a[i][j];
		cout << '\n';
	}
	char tmp;
	while(coin<10){
		cin >> tmp;
		move(tmp);
	}
	system("cls");
	cout << "you win!";
	return 0;
}