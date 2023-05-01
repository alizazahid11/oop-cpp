#include <iostream>
using namespace std;
class employee {
public:
     string Name;
     string Company;
     int Age;
 void introduceyourself() {
    std::cout<< "name-" << Name <<std::endl;
    std::cout<< "company-" << Company <<std::endl;
    std::cout<< "age-" << Age <<std::endl;

 }   
public:
    employee(string name,string company,int age){
    Name=name;
    Company=company;
    Age=age;
    }

};
int main(){
   employee employee1=employee("aliza","yt",20);
   employee1.introduceyourself();
}