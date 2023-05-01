#include <iostream>
using namespace std;
class house{
 private:
    //membervariables   
    int length=0;
    int breadth=0;
public:  
      //memberfunctions
      void setdata(int x,int y){
      length =x;
      breadth =y;
      }
      void area()
      {
          cout<<  " area of house "  <<   length*breadth;
      }
};
//object
int main()
{
    house aliza;
    aliza.setdata(300,500);
    aliza.area();
    return 0;
}
