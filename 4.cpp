#include <iostream>
using namespace std;
int main()
{
  int N,a[N],i,j,count;
  cin>>N;
  for(i=0;i<N;i++)
  {
    cin>>a[i];
  }
 for(i=0;i<N;i++)
 {
  count=0;
  for(j=0;j<N;j++)   
  { 
    if(a[j]==a[i]&&i!=j)
    {
    count++;
    }
 }
  if(count==0)
  {
    cout<<a[i];  
  }
  }
  return 0;
}
