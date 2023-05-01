#include <iostream>
using namespace std;
class liza{
public:
    void msg(){
        cout<<"aliza is piyare";
    }
};
class sama:public liza{
    public:
      void msg(){
          cout<<"we both are piyare";
     
      }
};
int main(){
 
  liza u;
  u.msg();
return 0;

}

