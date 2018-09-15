#include<iostream>

int main()
{
    long m,n,t;
    std::cin>>n>>m>>t;
    int table[n][m][1];
    long int t1=0,t2=0;
    long y,z;
    for(y=0;y<n;y++)
    {
        for(z=0;z<m;z++)
        {
            table[y][z][0]=0;
        }
    }
    for(y=0;y<t;y++)
    {
        std::cin>>t1>>t2;
        table[t1-1][t2-1][0]=1;
    }
    long pos1=1,pos2=1;
    int count;
    for(y=0;y<n;y++)
    {
        for(z=0;z<m;z++)
        {
            for(pos1=1;pos1+y<n;pos1++)
            {
                for(pos2=1;pos2+z<m;pos2++)
                {
                    count=0;
                    if(table[y][z][0]==1)
                        count++;
                    if(table[y+pos1][z][0]==1)
                        count++;
                    if(table[y][z+pos2][0]==1)
                        count++;
                    if(table[y+pos1][z+pos2][0]==1)
                        count++;
                    if(count==3)
                    {
                        table[y][z][0]=1;
                        table[y+pos1][z][0]=1;
                        table[y][z+pos2][0]=1;
                        table[y+pos1][z+pos2][0]=1; 
                    }
                }
            }
        }
    }
    std::cout<<"----"<<std::endl;
    count=0;
    for(y=0;y<n;y++)
    {
        for(z=0;z<m;z++)
        {
            if(table[y][z][0]==0)
            {
               count++;
               std::cout<<y<<" "<<z<<std::endl;
            }
        }
    }
    std::cout<<count;
}