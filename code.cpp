#include<iostream>
using namespace std ;
int main()
{
    int n=4;
    

    for(int i=1;i<=n;i++)
    {
       for(int k=0;k<i;k++)
        {
            cout<<" ";
        }
        for(int j=n;j>=i;j--)
        {
            cout<<i;
            
            
        }
        
        cout<<endl;
    }
    return 0;
}