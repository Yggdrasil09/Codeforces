#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    std::cin>>t;
    int y;
    int result[t];
    for(y=0;y<t;y++)
    {
        int n,z;
        std::cin>>n;
        string s;
        std::cin>>s;
        int count=0;
        for(z=0;z<n/2;z++)
        {
            if(s[z]+1==s[n-1-z]+1||s[z]+1==s[n-1-z]-1||s[z]-1==s[n-1-z]+1||s[z]-1==s[n-1-z]-1)
            {
                count++;
            }
        }
        if(count==n/2)
        {
            result[y]=1;
        }
        else
        {
            result[y]=0;
        }
    }
    for(y=0;y<t;y++)
    {
        std::cout<<((result[y])?("YES"):("NO"))<<endl;
    }
}