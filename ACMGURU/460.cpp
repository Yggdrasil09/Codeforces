#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int y;
    string result[t];
    for(y=0;y<t;y++)
    {
        string s;
        cin>>s;
        switch(s[s.length()-1])
        {
            case 'x':
                        ;
            case 's':
                        ;
            case 'o':
                        result[y]=s+"es";
                        break;
            case 'f':
                        result[y]=s.substr(0,s.length()-1)+"ves";
                        break;
            case 'e':
                        if(s[s.length()-2]=='f')
                        {
                            result[y]=s.substr(0,s.length()-2)+"ves";
                            break;
                        }
                        else
                        {
                            result[y]=s+'s';
                        }
                        break;
            case 'h':
                        if(s[s.length()-2]=='c')
                        {
                            result[y]=s+"es";
                            break;
                        }
                        else
                        {
                            result[y]=s+'s';
                        }
                        break;
            case 'y':
                        result[y]=s.substr(0,s.length()-1)+"ies";     
                        break; 
            default : 
                        result[y]=s+'s';                  

        }
    }
    for(y=0;y<t;y++)
    {
        cout<<result[y]<<endl;
    }
}