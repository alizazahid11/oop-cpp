#include <iostream>
using namespace std;

class nPOINT
{
private:
    static int length;
    int *p;
    int index;

public:
    nPOINT();
    ~nPOINT();
    void Set(int index, int val)
    {
        this->index = index;
        p[this->index] = val;
    }
    int Get()
    {
        return p[this->index];
    }
    static int Length()
    {
        return length;
    }
};
int nPOINT::length = 4;
int main()
{
    nPOINT obj;
    obj.Set(0, 5);
    obj.Get();
}