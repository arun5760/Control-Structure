#include<iostream>
using namespace std;
int main(){
  int num;
  cin>>num;
  int a=0,b=1;
  bool number=false;
  while(a<=num){
  if(a==num){
    number=true;
    break;
  }
  int next=a+b;
  a=b;
  b=next;
}
if(number)
  cout<<"Fibonacci Number";
else
  cout<<"Not Fibonacci Number";
  return 0;
}