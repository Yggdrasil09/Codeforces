#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n,a,b;
    std::cin>>n>>a>>b;
    string s;
    std::cin>>s;
    int count=0;
    int y;
    if(a+b>n)
    {
        cout<<-1<<endl;
        return 0;
    }
    int z;
    int x[n];
    for(y=0;y<n;y++)
    {
        for(z=0;z<n;z++)
        {
            if(s[y]<s[z])
            {
                char temp=s[y];
                s[y]=s[z];
                s[z]=temp;
            }
        }
        x[y]=2;
    }
    for(y=0;y<a;y++)
    {
        x[y]=0;
    }
    for(y=a;y<a+b;y++)
    {
        x[y]=1;
    }
    for(y=0;y<n;y++)
    {
        if(x[y]!=s[y]-48)
        {
            count++;
        }
    }
    cout<<count<<endl;
    for(y=0;y<n;y++)
    {
        std::cout<<x[y];
    }
}

