#include <iostream>
using namespace std;
int main()
{
int N,a[N],b[N],i,j,count=0,k=0,temp;
cin>>N;
for(i=0;i<N;i++)
cin>>a[i];
for(i=0;i<N;i++)
{
for(j=i+1;j<N;j++)
{
if(a[i]==a[j])
{
b[k]=a[i];
k++;
count++;
}
}
}
if(count==0)
cout<<"unique"<<endl;
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++) 
{
 if(b[i]>b[j]) 
 {
     temp=b[i];
     b[i]=b[j];
     b[j]=temp;
 }
}
}
for(i=0;i<k;i++)
{
cout<<b[i]<<' ';
}
return 0;
}
