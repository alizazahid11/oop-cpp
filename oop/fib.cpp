#include <iostream>
using namespace std;
class Fib2{
private:


    static int fib2(int num){
        int*n;
        

    if(num<2){
            return num;}
        return Fib2::fib2(num-1)+Fib2::fib2(num-2);
    }
    public:
    void setFib(int b){
        this->num=b;
        
   }
   Fib2(){
       num=0;
   }
   Fib2(int*N){
       this->n=N;;
   }
    int*getFib()  {
       return n;
   }
};
int main(){
    Fib2 f;
    int* ptr = (int*)&f;
    //s1.setFib(5);
    //s1.setFib(10);
    *ptr = 05;
    *ptr = 10;
    cout<<"fifth value is = "<<f.getFib()<<endl;
    cout<<"fifth value is = "<<f.getFib()<<endl;



}
