#include<iostream>
using namespace std;
int main(){
  int d1,c1,d2,c2; 
  cin>>d1>>c1>>d2>>c2; 
  int cents=c1+c2;
  int carrydollor=cents/100;
  cents=cents%100;
  int totaldollors=d1+d2+carrydollor;
  cout<<totaldollors<<endl;
  cout<<cents;
  return 0;
}