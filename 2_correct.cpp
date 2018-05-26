#include <iostream>
using namespace std;
int main()
{
int N,a[N],b[N],i,j,count,temp;
cin>>N;
for(i=0;i<N;i++)
{cin>>a[i];
b[i]=-1;
}
for(i=0;i<N;i++)
{
for(j=i+1;j<N;j++) 
{
 if(a[i]<a[j]) 
 {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
 }
}
}
for(i=0;i<N;i++)
{
count=1;
for(j=i+1;j<N;j++) 
{
 if(a[i]==a[j])
 {
 count++;
 b[j]=0;
 }
}
b[i]=count;
}
for(i=0;i<N;i++)
{
if(b[i]==1)
{
cout<<a[i];
}
}
return 0;
}
