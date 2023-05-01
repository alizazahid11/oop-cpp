//driver drives the car
#include <iostream>
using namespace std;
class car{
    string colour;
    string model;
    int year;
public:    
car();
car(string c ,string m,int y=0){
    colour=c;
    model = m;
    year =y;}
void setModel(string m){
    this->model=m;
}    
void setYear(int y){
    this->year=y;}
void setColoue(string c){
    this->colour=c;}
        
string getModel(){
    return model;}
int getYear(){
    return year;}
string getColour(){
    return colour;}   
void display(){
    cout<<"model of car is "<<model<<endl;
    cout<<"year of car is "<<year<<endl;
    cout<<"colour of car is "<<colour<<endl;
    }
};
class drives{
    bool liscence;
    bool cnic;
    string name;
 public:
 drives();
 drives(bool l ,bool c,string n){
    liscence=l;
    cnic=c;
    name=n;}
void setName(string n){
    this->name=n;
}    
void setLiscence(bool l){
    this->liscence=l;}
void setCnic(bool c){
    this->cnic=c;}
        
string getName(){
    return name;}
bool getLiscence(){
    return liscence;}
bool getCnic(){
    return cnic;}   
void driver(car k){
    cout<<"liscence "<<liscence<<endl;
    cout<<"cnic "<<cnic<<endl;
    cout<<"name  "<<name<<endl;
}


};
int main(){
    car fx;
    drives s;
    s.driver(fx);
    return 0;
}
