#include<bits/stdc++.h>
using namespace std;
const int n=10;
char a[25][25];
int cx=9,cy=4,ix=0,iy=0,coin=0,nx,ny;
string s;
char x;
void move(){
	system("cls");
	for(int i=0;i<s.size();i++){
		x=s[i];
		if(x=='w') ix--;
		if(x=='a') iy--;
		if(x=='s') ix++;
		if(x=='d') iy++;
	}
	ix=ix%10;
	iy=iy%10;
	printf("%d %d %d %d\n",ix,iy,cx,cy);
	if(ix==cx && iy==ny){
		coin++;
		cx=rand();
		cy=rand();
		cout << 1 << '\n';
	}
	else{
		cout << 0 << '\n';
	}
	
	memset(a,'#',sizeof(a));
	a[ix%n][iy%n]='@';
	a[cx%n][cy%n]='$';
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout << a[i][j];
		cout << '\n';
	}
	printf("coin: %d\n",coin);
}
int main(){
	srand(time(0));
	memset(a,'#',sizeof(a));
	a[0][0]='@';
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout << a[i][j];
		cout << '\n';
	}
	while(coin<10){
		cin >> s;
		move();
	}
	system("cls");
	cout << "you win!";
	return 0;
}
