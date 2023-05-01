#include <iostream>
using namespace std;
class thing{
    int*x;
    int value;
public:
thing(){
    cout<<"constructing new thing using default const"<<endl;

}

thing(int val){
    
    cout<<"constructing new thing with value "<<val<<endl;
}   
~thing(){
    cout<<"deleting thing with value "<<endl;
} 
void set(int val){
    this->value=val;
    
}
int getval(){
    return value;
}
void do1(int level){
    cout<<"enter do1 with level="<<level<<endl;
    thing ttt(level);
    do2(level+1);
}
void do2(int level){
    cout<<"enter do2 with level="<<level<<endl;
    thing tt(level); 
}
}; 
int main(){
    thing t1;
    t1.do2(2);
    cout<<endl;
    t1.do1(3);
    cout<<endl;
    t1.do2(2);
    cout<<endl;
    return 0;
}