#include<iostream>
using namespace std;

class BaseA
{
    public:
         int i,j;
    BaseA()
    {
        cout<<"Inside BaseA Constructor\n";
    }
    ~BaseA()
    {
        cout<<"Inside BaseA destructor\n";
    }
    void fun()
    {
        cout<<"Inside BaseA Fun\n";
    }

};
class BaseB
{
    public:
         int X,Y;
    BaseB()
    {
        cout<<"Inside BaseB Constructor\n";
    }
    ~BaseB()
    {
        cout<<"Inside BaseB destructor\n";
    }
    void gun()
    {
        cout<<"Inside BaseB  gun\n";
    }

};

class Derived:public BaseB,public BaseA
{
    public:
        int a;
        Derived()
        {
            cout<<"Inside Derived Constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside Derived destructor\n";
        }
        void sun(){
            cout<<"Inside Derived Sun\n";
        }
};



int main()
{   
   cout<<sizeof(BaseA)<<"\n";
   cout<<sizeof(BaseB)<<"\n";
   cout<<sizeof(Derived)<<"\n";
    Derived dobj;
        dobj.fun();
        dobj.gun();
        dobj.sun();
    return 0;
}