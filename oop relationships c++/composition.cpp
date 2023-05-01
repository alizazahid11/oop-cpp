//car has an engine //compile by UROOJ KHALID 20102181
#include <iostream>
using namespace std;
class engine{
  int cylinder;
  int accelerator;
  
public: 
engine(int c=0,int a=0){ //constructor 
    this->cylinder=c;
    this->accelerator=a;
   
} 
void displayengine(int c=0,int a=0 ){
   this->cylinder=c;
   this->accelerator=a;
}
void printengine(){  //to print date
    cout<<cylinder<<","<<accelerator;
}
};
class car{
    string name;
    int year;
    engine e1;
public:
car(string n,int y=0,int c=0,int a=0) {
   name=n;
   year=y;
   e1.displayengine(c,a);

  
}  
void printinfo(){
    cout<<"car name is "<<name<<endl;
     cout<<"car year is "<<year<<endl;
    cout<<"car engine has cylinder and acceleration=   "<<endl;
    e1.printengine();
}
};
int main(){
    car c("yaris",2015,205,215);
    c.printinfo();

}
