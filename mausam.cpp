#include<iostream>
using namespace std;
int main(){
    class mausam{
        public:
            int humidity = 50;
            float temp = 20;
        public:
            void showmausam(){                //method
                cout<<"humidity"<<humidity<<endl;
                cout<<"temp"<<temp<<endl;
            }
            void enjoymausam(){
                cout<<"Weather is wonderful";
            }

    };
    mausam weather; //object
    weather.showmausam();
    weather.enjoymausam();
    return 0;
}