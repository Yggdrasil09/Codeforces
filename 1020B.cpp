#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int std[n];
    int y,z;
    int check[n];
    for(y=0;y<n;y++)
    {
        std::cin>>std[y];
        check[y]=0;
    } 
    int dul;  
    for(y=0;y<n;y++)
    {
       dul=std[y];
       check[y]++;
       dul--;
       int g=0;
       while(g!=1) 
       {
           check[dul]++;
           dul=std[dul]-1;
           for(z=0;z<n;z++)
           {
               if(check[z]==2)
               {
                   g=1;
                   std::cout<<z+1<<" ";
                   break;
               }
           }
       }
       for(z=0;z<n;z++)
       {
           check[z]=0;
       }
    }
}