#include <iostream>
using namespace std;
int main(){
    float x,y;

    int z;
    x=10.3;
    y=20.5;
    z=static_cast<int>(x)+static_cast<int>(y);

  
    cout<<"result  = "<<z;
    return 0;

}