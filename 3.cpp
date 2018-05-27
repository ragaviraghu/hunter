#include <iostream>
using namespace std;
int main()
{
  int N,a[100],b[50],i,count=0;
  cin>>N;
  for(i=0;i<N;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<N;i++)
  {
    if(i==a[i])
    {
    count++;
    cout<<a[i]<<' ';
    }
  }
  if(count==0)
  {
    cout<<"-1"<<endl;
  }
  return 0;
}
