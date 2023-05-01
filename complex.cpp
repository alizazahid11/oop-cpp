#include <iostream>
using namespace std;
class complex{
   public:
   int real;
   float imaginary;
  complex(){   //default con
      real=5;
      imaginary=3.3;
  } 
  complex(int x,float y){ //para con
      real=x;
      imaginary=y;
  }
  complex(const complex&z);//copy con
  void display(){
      cout<<"\n real number is:"<<real;
      cout<<"\n imaginary number is:"<<imaginary;
  }
  complex addcomplexnum(complex c1,complex c2){ //add
      complex result1;
      result1.real=c1.real+c2.real;
      result1.imaginary=c1.imaginary+c2.imaginary;
      return result1;
  }
  complex subcomplexnum(complex n1,complex n2){  //sub
      complex result2; 
      result2.real=n1.real-n2.real;
      result2.imaginary=n1.imaginary-n2.imaginary;
      return result2;
  }
  complex multiplycomplexnum(complex m1,complex m2){  //multiply
      complex result3;
      result3.real=m1.real*m2.real;
      result3.imaginary=m1.imaginary*m2.imaginary;
      return result3;
  }
};
complex::complex(const complex&z){ //defining copy con
    real=z.real;
    imaginary=z.imaginary;

}
int main(){
    complex def1; //invoke default
    def1.display();
    complex par1(2,4.4);//invoke para
    par1.display();
    complex co1(par1);//invoke copy
    co1.display();
      cout << endl  
         << endl;
    complex c1(4,5.5);//add first complex number
        cout << "Complex number 1 : " << c1.real  
         << " + i" << c1.imaginary << endl;
    complex c2(5,6.7);//add secon complex num
         cout << "Complex number 2 : " << c2.real  
         << " + i" << c2.imaginary << endl;  
    complex c3; //storing the sum
    c3=c3.addcomplexnum(c1,c2);
        cout << "Sum of complex number : "  
         << c3.real << " + i"  
         << c3.imaginary<<endl;
    complex n1(6,7.8);//subt first complex num
        cout << "Complex number 1 : " << n1.real  
         << " - i" << n1.imaginary << endl;
    complex n2(3,4.4);//subt second complex num
        cout << "Complex number 2: " << n2.real  
         << " - i" << n2.imaginary << endl;
    complex c4;//storing the sum
    c4=c4.subcomplexnum(n1,n2);
        cout << "Sum of complex number : "  
         << c4.real << " - i"  
         << c4.imaginary<<endl;
    complex m1(2,3.3);//multiply first complex num
     cout << "Complex number 1 : " << m1.real  
         << " * i" << m1.imaginary << endl;
    complex m2(4,4.4);
     cout << "Complex number 2 : " << m2.real //multiply second complex number 
         << " *i" << m2.imaginary << endl;     
    complex c5;
    c5=c5.multiplycomplexnum(m1,m2);//storing the sum
         cout << "Sum of complex number : "  
         << c5.real << " * i"  
         << c5.imaginary<<endl;

     return 0;


}
