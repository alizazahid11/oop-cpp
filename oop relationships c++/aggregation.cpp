//car has passengers //COMPILE BY ALIZA MUHAMMAD ZAHID(B20102016) & FARZEEN SHAHID(B20102039)
#include <iostream>
using namespace std;
class passengers{
    string name;
    int age;
    
public:
passengers(string N,int A){
    this->name=N;
    this->age=A;


}    
void setName(string N){
    this->name=N;
}
void setAge(int A){
    this->age=A;
}

string getName(){
    return name;
}
int getAge(){
    return age;
}


void Print(){
    cout<<"name is "<<name<<endl;
    cout<<"age is "<<age<<endl;
  
}
};
class car
{
private:
string name;
int year;
passengers*cptr;
public:
car(string m,int y,passengers*pa){ //GIVING REFERENCE OF PASSENGER HERE
    name = m;
    year =y;
    cptr=pa;}
void setName(string m){
    this->name=m;
}    
void setYear(int y){
    this->year=y;}
void setPassengers(passengers*cptr){
    this->cptr=cptr;
}    

string getModel(){
    return name;}
int getYear(){
    return year;
}
passengers*getPassengers(){
    return cptr;
}
void display(){
    cout<<"name of car is "<<name<<endl;
    cout<<"year of car is "<<year<<endl;
    cptr->Print();}
};



int main(){
    
    passengers PA("XYZ",20);{
        car c("yaris",2019,&PA);
   c.display();}
    
   PA.Print(); //IF WE DESTROY PASSENGER'S OBJECT THE CAR OBJECT WILL STILL WORK. 
    return 0;

}