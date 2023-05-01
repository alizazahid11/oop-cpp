#include<iostream>
using namespace std;
class A{
    public:
    int ivar = 7;
	virtual void m1(){ 
        cout<<"A's m1, ";}

     void m2(){ 
        cout<<"A's m2, ";}
    virtual void m3(){
        cout<<"A's m3, ";}
};
    class B:public A{ 
        public:
        void m1() override {
            cout<<"B's m1, ";
        }
};  
   class C : public B{  
       public:
       void m3() override {
           cout<<"C's m3, "<< ivar + 6;}
   };  
  
   
        int main(){
            A*a=new A;
            B*b=new B;
            C*c=new C;
            A*a2=new C;
         b->m1();
         c->m2();
         a->m3();
        cout<<"\n";   
        c->m1();
        c->m2();
        c->m3();
        cout<<"\n";
        a->m1();
        b->m2();
        c->m3();
       cout<<"\n";
       
            
        a2->m1();
		a2->m2();
		a2->m3();
        delete a,b,c,a2;
       
       return 0;
        }
