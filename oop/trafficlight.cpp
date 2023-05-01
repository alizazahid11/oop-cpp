#include <iostream>
using namespace std;
const int red=2;
const int green=1;
class trafficlight{
private:
    int colour;
public:
    trafficlight(){
        colour=red;
    }
    void changecolour(){
        if(colour==red){
            colour=green;
        }
        else{
        colour=red;
        }}
        void showcolour(){
            if(colour==red){
                cout<<"red"<<endl;
            }
            else{
                cout<<"green"<<endl;
            }}
};
trafficlight external_light;
int main(){
    external_light.changecolour();
    for(int i=0;i<2;i++){
        cout<<"times the loop has excuted "<<i<<endl;
        trafficlight automaticlight;
        automaticlight.changecolour();
        static trafficlight staticlight;
        staticlight.changecolour();
        cout<<"the automatic light is ";
        automaticlight.showcolour();
        cout<<"the static light is ";
        staticlight.showcolour();
    } 
    cout<<"external light is ";
    external_light.showcolour();
 return 0;
}

