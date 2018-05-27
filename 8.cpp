#include <iostream>
using namespace std;
int main() 
{int N,a[N],i,j,k;
cin>>N;
if(N>1 && N<100000)
{
for(i=0;i<N;i++)
{
 cin>>a[i];
}
for(i=0;i<N;i++)
{
for(j=i+1;j<N;j++)
{
for(k=j+1;k<N;k++)
{
if((a[i]+a[j])==a[k])
cout<<a[i]<<' '<<a[j]<<' '<<a[k]<<endl;
}
}
}
}
else
{
cout<<"invalid input"<<endl;	
}
return 0;
}
