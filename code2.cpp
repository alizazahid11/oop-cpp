#include <iostream>
using namespace std;
class Complex
{
 public:
int real;
float imaginary;
};

ostream & operator<<(ostream &out, Complex &obj)
{
out << obj.real <<"+i"<< obj.imaginary ;
return out;
}
