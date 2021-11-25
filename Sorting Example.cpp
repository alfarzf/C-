#include <iostream>
#include <ncurses.h>
using namespace std;
//Contoh sorting bilangan
int main(){
	int n;
	int temp=0;
	cin>>n;
	int angka[n];
	for(int i=0;i<n;i++){
		cin>>angka[i];
	}for(int i=0;i<n;i++){
		for(int k=0;k<n-1;k++){
			if(angka[k]>angka[k+1]){
				temp=angka[k];
				angka[k]=angka[k+1];
				angka[k+1]=temp;
			}
		}
	}for(int i=0;i<n;i++){
		cout<<angka[i];
		cout<<" ";
	}
	return 0;
}
