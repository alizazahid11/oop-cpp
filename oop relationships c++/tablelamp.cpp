#include <iostream>
using namespace std;
void mystry(int*pint){
    pint=new int;
    *pint=143;
    cout<<*pint<<" ";
}
void main(){
    int i=142;
    int*pint=&i;
    mystry(pint);
    cout<<*pint<<" ";
    }
