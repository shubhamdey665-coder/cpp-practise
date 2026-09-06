#include<iostream>
#include<vector>
using namespace std ;
int main()
{
   vector<int> v = {4,8,2,8,10,2,5};
   int largest = INT_MIN;
   int secLargest =INT_MIN;
   for(int val : v)
   {
    if(val>= largest)
    {
        secLargest = largest;
        largest = val;
        
    } 
    else if(val<largest && val>=secLargest) {
        secLargest = val;
    }
   }
   
   
   cout<<secLargest<<endl;
    return 0;
}