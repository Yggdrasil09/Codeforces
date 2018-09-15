#include<iostream>
#include<algorithm>

int main()
{
    int range[3],result[3];
    int y;
    for(y=0;y<3;y++)
    {
        std::cin>>range[0]>>range[1]>>range[2];
        std::sort(range,range+3);
        result[y]=range[1];
    }
    std::sort(result,result+3);
    std::cout<<result[1];
}