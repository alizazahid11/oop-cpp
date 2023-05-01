#include<iostream>
using namespace std;
class A{
    private:
    int weight;
    public:
    A(int x=0){
        weight=x;

    }
    // traditional method:
   /* A addweight(A w){
        A temp;
        temp.weight =weight+w.weight;
        return temp;
    }*/

 A operator+(A w){
     A temp;
        temp.weight =weight+w.weight;
        return temp;}
};
 

 
int main(){
    int a=53;int b=3;int c=0;
    c=a+b;
    A p(55);
    A p2(44);
    A total;
    ///total=p.addweight(p2);
   total=p+p2;
   return 0;
   }
