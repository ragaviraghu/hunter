#include <iostream>
using namespace std;
int main()
{
int N,a[N],i,j,count=0,temp;
cin>>N;
for(i=0;i<N;i++)
cin>>a[i];
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
if(a[i]==0)
count++;
}
for(i=0;i<N;i++)
{
if(count==N)
{
cout<<a[i];
break;
}
cout<<a[i];
}
return 0;
}
