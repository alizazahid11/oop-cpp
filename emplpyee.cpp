#include <iostream>
using namespace std;
class employee{
    string name;
    int yearofjoining;
    int salary;
    string address;
};
int main(){
    string name;
    int yearofjoining;
    int salary;
    string address;
    for (int i=0;i<3;i++){
        cout<<"\n name  ";
        cin>>name;
        cout<<"\n year of joining";
        cin>>yearofjoining;
        cout<<"\n salary";
        cin>>salary;
        cout<<"\n address";
        cin>>address;
        return 0;

          

    }
}