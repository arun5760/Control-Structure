#include<iostream>
using namespace std;
int main()
{
  int num,sum=0;
  do
  {
    cin>>num;
    //sum+=num;
    sum=sum+num;
  }while(num!=-1);
    sum=sum+1;
    cout<<sum<<endl;
    return 0;
}
