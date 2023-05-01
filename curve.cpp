//aliza muhammad zahid b20102016
#include <iostream>
#include<fstream> //IT IS USE TO CREATE,WRITE OR READ FILES
using namespace std;
 class curve{ // <<INTERFACE>>

   
    public:
    curve(); //NULL CONSTRUCTOR
    virtual void compute_points()=0; //PURE VIRTUAL FUNCTION WHICH MAKE THIS CLASS AN ABSTRACT CLASS
    friend ostream&operator<<(ostream &c,const curve &C); //USING OPERATOR OVERLOADING
  
 };
 class parametriccurve: public curve{ //NOW THE PARAMETRICCURVE WILL INHERIT FROM THE CLASS (INTERFACE) CURVE
  float minT; //IMTIALIZING ATTRIBUTES
  float maxT;
  public:
  friend ostream&operator<<(ostream &c,const curve &C) //USING OPERATOR OVERLOADING
  {
    string my_text; //NOW WE CREATE A TEXT (DATA TYPE:STRING) I.E USE TO OUTPUT THE TEXT FILE
    ifstream MyFile("parametriccurvepoint.txt");//IT WILL READ FROM THE TEXT FILE
    while (getline(MyFile,my_text)){ //WE USE WHILE LOOP HERE WITH GETLINE BECAUSE IT WILL READ THE FILE LINE BY LINE 
        c<<my_text <<endl; //OUTPUT THE TEXT FROM THE FILE 
    }
    MyFile.close(); //CLOSE THE FILE
    return c;


  }
  parametriccurve(){ //NULL CONSTRUCTOR
      this->minT=0;
      this->maxT=0;
  }
  parametriccurve(float mi,float mx){ //PARA CONSTRUCTOR
      this->minT=mi;
      this->maxT=mx;
  }
  void compute_points() //FUNCTION TO COMPUTE POINTS
  {
      ofstream MyFile("parametriccurvepoint.txt");//IT WILL WRITE ON THE FILE
      float T=this->minT;
      while(T<=this->maxT){ //USING WHILE LOOP 
          float x = (T*2)+T; // USING 3 PARAMETERIC CURVE EQN
          float y=(T*T*T)-5;
          float z=(3*T)+2;
        MyFile<<"(X,Y,Z) = {"<<x<<" , "<<y<<" , "<<z<<"}"<<endl; //NOW PRINT THE VALUES OF X Y & Z
        MyFile<<" point = "<<T<<endl;
        MyFile<<" X = "<<x<<endl;
        MyFile<<" Y = "<<y<<endl;
        MyFile<<" Z = "<<z<<endl;
        T+=0.1; //INCREAMENTING IN T
      }
      MyFile.close();} //FILE CLOSE
  };
  int main(){
      parametriccurve C=parametriccurve(1,3);
      C.compute_points();
      cout << C; //HERE IT GIVES AN ERROR 
      return 0;
  }