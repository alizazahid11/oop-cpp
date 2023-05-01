#include <iostream>
using namespace std;
void swap(int*a,int*b){
    int temp=*a;
    *b=*a;
    *b=temp;
}
int main(){
    int a=10;
    int b=12;
    int*aptr=&a;
    int*bptr=&b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
 
    

}