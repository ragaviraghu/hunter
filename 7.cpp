#include <iostream>
using namespace std;
int main()
{
int N,a[N],i;
cin>>N;
for(i=0;i<N;i++)
{
cin>>a[i];
}
for(i=0;i<N;i++)
{
if(i%2==0)
{
if(a[i]%2==1)
cout<<a[i]<<' ';
}
else
{
if(a[i]%2==0)
cout<<a[i]<<' ';
}
}
return 0;
}
