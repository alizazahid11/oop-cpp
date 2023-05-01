#include <iostream>
using namespace std;
class Complex {     
      
    int real;  
    float imaginary;
    public:
    Complex(int x,float y)
    {
        x=real;
        y=imaginary;
    }    
    friend ostream &  operator <<(ostream &out,const Complex &obj) ;  
}; 
    ostream &  operator <<(ostream &out,const Complex &obj){    
    out << obj.real << obj.imaginary ;   
    return out;  }
    
int main()
{
    Complex obj(53,6.6);
    cout<<obj;
} 