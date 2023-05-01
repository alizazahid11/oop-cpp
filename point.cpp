#include <iostream>
using namespace std;

class point {

int x_coord;
int y_coord;


 public:


 point() {
  x_coord=0;
  y_coord=0;
 }

 point(int x, int y) {
 x_coord = x;
 y_coord = y;


 }
point(const point & z){
x_coord = z.x_coord;
y_coord = z.y_coord;
 }
 void showdata() {
 cout << "\n x is: " << x_coord ;
  cout << "\n y is: " << y_coord ;

 }
};




int main() {
 point c;
 c.showdata();
 point t (5,10);
 t.showdata();
 point s(t);
 s.showdata();
 return 0;
}