#include<iostream>
using namespace std;

class IncreDecre
{
        int a, b;
     public:
        void accept()
        {
                cout<<"\n Enter Two Numbers : \n";
                //cout<<" ";
                cin>>a;
                //cout<<" ";
                cin>>b;
        }
        void operator--() //Overload Unary Decrement
        {
                a--;
                b--;
        }
        void operator++() //Overload Unary Increment
        {
                a++;
                b++;
        }
        void display()
        {
                cout<<"\n A : "<<a;
                cout<<"\n B : "<<b;
        }
};
int main()
{
        IncreDecre id;
        id.accept();
        --id;
        //--id;
        cout<<"\n After Decrementing : ";
        id.display();
        ++id;
        ++id;
        ++id;
        cout<<"\n\n After Incrementing : ";
        id.display();
        return 0;
}