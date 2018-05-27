#include <iostream>
using namespace std;
int main()
{
int N,a[N],b[N],i,j,k=0;
cin>>N;
for(i=0;i<N;i++)
{
cin>>a[i];
}
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)   
{ 
if(a[j]==a[i]&&i!=j)
{
b[k]=a[i];
k++;
}
}
}
cout<<b[0];
return 0;
}
