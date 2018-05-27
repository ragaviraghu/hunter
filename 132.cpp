#include <iostream>
using namespace std;
int main() 
{
string S;
int sum=0,n;
cin>>S;
n=S.length();
for(int i=0;i<n;i++)
{
 int m=S[i];
 sum=sum+m;
}
cout<<sum<<endl;
return 0;
}
