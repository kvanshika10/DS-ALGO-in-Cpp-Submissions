#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--)
{
long long n,m,l,k,count=0;
cin>>n>>m;
char arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)

        {   
            cin>>arr[i][j];
        }
    }
string s;
cin>>s;
l=s.size();
    for(int i=0;i<l;i++)
    {
        k=i%n;
            for(int j=0;j<m;j++)
            {
                if(arr[k][j]==s[i])
                {       
                        arr[k][j]='!';
                        count++;
                        break;
                }
            }

    }
if(count>=l)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
