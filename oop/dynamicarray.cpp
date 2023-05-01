#include<iostream>
using namespace std;

//declaration of class IntArr
class IntArr
{

//declaration of private data members
private:
int cap;
int nrOfEle;
int *arr;
public:

//constructor to initialize array to zero
IntArr(int ca)
{
cap=ca;
nrOfEle=0;
arr=new int[cap];
cout<<"\nCapacity of array = "<<cap;
}
//destructor to delete array
~IntArr()
{
delete[]arr;
}

//add function to assign values to the array
void add(int el)
{
nrOfEle=el;
el=5;
cout<<"\nEnter "<<el<<" elements:";
for(int i=0;i<el;i++)
cin>>arr[i];
cout<<"\nEntered elements are :";
for(i=0; i<el; i++)
cout<<arr[i]<<", ";


//expand function to increase capacity of the array
void expand(int ca)
{
cap=ca;
int *temp=new int[cap];
for(int i=0;i<nrOfEle;i++)
{
temp[i]=arr[i];
}
delete[] arr;
arr=temp;
}
};

//main function to test IntArr class
void main()
{

IntArr arr(10);
arr.add(5);
arr.expand(15);
arr.add(10);

 }