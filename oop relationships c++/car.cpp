//car is type of vehicle // COMPILE BY ALIZA MUHAMMAD ZAHID B20102016
#include <iostream>
using namespace std;
class vehicle{
	  int reg_number; 
public:
  vehicle(){
	  reg_number=0;
  }
   vehicle(int r){
	   this->reg_number=r;
   }	
	void Start_engine() 
	{
		cout << "Engine is starting" << endl;
	}
	void Accelerate() 
	{
		cout << "Vehicle is accelerating" << endl;
	}
	void Apply_Brakes() 
	{
		cout << "Brakes are being applied" << endl;
	}
  void show(){
    cout<<"reg number is "<<reg_number<<endl;
  }
};
class car:public vehicle{
private:
string name;
int year;
public:
car():vehicle(){
	name="civic";
	year=2010;
}

car(string m ,int y,int e):vehicle(e){
    name = m;
    year =y;}
 

void display(){
    cout<<"name of car is "<<name<<endl;
    cout<<"year of car is "<<year<<endl;}

};
int main(){
  car c1,c2("alto",2010,47);
  c1.Start_engine();
  c1.Accelerate();
  c1.Apply_Brakes();
  c1.display();
  c1.show();
  c2.Start_engine();
  c2.Accelerate();
  c2.Apply_Brakes();
  c2.display();
  c2.show();

}