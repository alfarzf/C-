#include <iostream>
using namespace std;
 
int main(){
  int x;
  int i;
  bool prime=true;
  
  //Input
  cout<<"Masukkan Bilangan Bulat Positif"<<endl;
  cin>>x;
 
  //Output
  if(x==0||x==1){
    prime=false;
  }
  else{
    for(i=2;i<=x/2;i++){
      if(x%i==0){
        prime=false;
        break;
      }
    }
  }
 
  
  if (prime){
  	cout<<x<<" adalah angka prima";
	}
  else{
    cout<<x<<" bukan angka prima";
	}
 return 0;
}
