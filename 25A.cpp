#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int y,z;
    int count,count1;
    int check=0;
    for (y=0;y<n;y++)
    {
        std::cin>>z;
        if(z%2!=0)
        {
            count=y+1;
        }
        else
        {
            check++;
            count1=y+1;
        }
    }
    (check==1)?std::cout<<count1:std::cout<<count;
}