#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int num;
  int sum_even=0,sum_odd=0;
  int count_even=0,count_odd=0;
  while(true){
    cin>>num;
    if(num==-1)
    break;
    if(num%2==0){
      sum_even+=num;
      count_even++;
    }else{
      sum_odd+=num;
      count_odd++;
    }
  }
  cout<<sum_even<<"\n";
  cout<<sum_odd<<"\n";
  if(count_odd==0)
    cout<<fixed<<setprecision(1)<<0.0<<"\n";
  else
    cout<<fixed<<setprecision(2)<<(double)sum_even/count_even<<"\n";
  if(count_even==0)
    cout<<fixed<<setprecision(1)<<0.0<<"\n";
  else
    cout<<fixed<<setprecision(2)<<(double)sum_odd/count_odd<<"\n";
  return 0;
}