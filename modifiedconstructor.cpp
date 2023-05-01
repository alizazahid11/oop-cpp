#include <iostream>
using namespace std;
class form{
    string name;
    string fathername;
    int seatnum;
public:
    form(){           //default constructor
    name="aliza";
    fathername="muhammad zahid";
    seatnum=07;
    }

    form(string x,string y,int z){ //parametrised constructor
    name=x;
    fathername=y;
    seatnum=z;
    }
    form(const form & m); //copy constructor
    void display(){
    
    cout <<" \n NAME: " << name;
    cin>>name;

    cout <<" \n father NAME: " << fathername;
    cin>>fathername;
    cout <<" \n seatnum: " << seatnum;
    cin>>seatnum;
    }

};
form::form(const form & m) //copy constructor define
{
    name = m.name;
    fathername = m.fathername;
    seatnum = m.seatnum;
}
int main(){
    form j; //invoking null constructor
    j.display();
    form r1 =form("aliza", "muhammad zahid" , 07);//invoking parameterized constructor
    r1.display();
    form student(r1);//invoking copy constructor
    student.display();
    return 0;
}   