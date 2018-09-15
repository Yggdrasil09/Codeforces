#include<iostream>

int main()
{
    long n;
    std::cin>>n;
    long y,z,frnd[n];
    long count=0,a,b;
    for(y=0;y<n;y++)
    {
        std::cin>>frnd[y];
        for(z=0;z<y;z++)
        {
            a=frnd[y];
            b=frnd[z];
            while(a!=b)
            {
                if(a>b)
                {
                    a-=b;
                }
                else
                {
                    b-=a;
                }
            }
            if(a>count)
            {
                count=a;
            }
        }
    }
    std::cout<<count;
}