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
	//void Start_engine() 
	//{
		//cout << "Engine is starting" << endl;
	//}
	/*void Accelerate() 
	{
		cout << "Vehicle is accelerating" << endl;
	}
	void Apply_Brakes() 
	{
		cout << "Brakes are being applied" << endl;
	}*/
  void show(){
    cout<<"reg number is "<<reg_number<<endl;
  }
};
class car:public vehicle{
private:
string name;
int year;
public:
car(){
	name="civic";
	year=2010;
}

car(string m ,int y){
    name = m;
    year =y;}
 

void show(){
    cout<<"name of car is "<<name<<endl;
    cout<<"year of car is "<<year<<endl;}

};
int main(){
//car c1,C2;
car c1;
 //c1.show();// will print derived class function
 //c2.vehicle::show();//will print base class fumction

//CALL OVERRIDDEN USING POINTER

vehicle*ptr=&c1;
ptr->show();//it will print derive class function
return 0;

}