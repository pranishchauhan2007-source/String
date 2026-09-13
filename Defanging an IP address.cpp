#include<iostream>
using namespace std;
int main()
{
string address;
cout<<"Enter the IP address:";
cin>>address;
int index=0;
string ans;
while(index<address.size())
{
 if (address[index]=='.')
 ans=ans+"[.]";
 else
 ans=ans+address[index];
 index++;
}
cout<<ans;
}