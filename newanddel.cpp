#include<iostream>
using namespace std;
int main() {
     // Pointer initialization to null
    int*p=NULL;
     // Request memory for the variable
    // using new operator
    p=new(nothrow) int;
    if (!p)
        cout<<"memory allocation failed";
    else 
    {
        // Store value at allocated address
        *p=29;
        cout<<"value of p: "<< *p<<endl ;
        }
        // Request block of memory
    // using new operator
    float*r=NULL;
    r=new(nothrow) float;
      if (!r)
        cout<<"memory allocation failed"<<endl;
    else 
    {
        *r=75.25;
        cout<<"value of r: "<<  *r <<endl;
        }
    // Request block of memory of size n    
    int n=5;
  \
     int*q=new(nothrow) int[5];
     if (!q)
        cout<<"memory allocation failed"<<endl;
    else 
    {    
        
         for(int i=0;i<n;i++)
            q[i]=i+1;
    
         cout << "Value store in block of memory: ";
        for (int i = 0; i < n; i++)
            cout << q[i] << " "; 


        }
    // freed the allocated memory    
    delete p;
    delete r;
    // freed the block of allocated memory
    delete[]q;
    return 0;



}