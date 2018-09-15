#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n,m;
    std::cin>>n>>m;
    string x[m];
    int y;
    for(y=0;y<m;y++)
    {
        cin>>x[y];
    }
    if(n%m==0)
    {
        cout<<x[m-1];
    }
    else
    {
        cout<<x[n%m-1];
    }
}