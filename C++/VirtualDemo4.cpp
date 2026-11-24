#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
   public:
    int i,j;
    void fun()
    {cout<<"Base Fun\n";}
    void gun()
    {cout<<"Base Gun\n";}
    virtual void Sun()
    {cout<<"Base Sun\n";}
    virtual void Run()
    {cout<<"Base Run\n";}

};//16 Bytes

#pragma pack(1)
class Derived:public Base
{
    public:
        int x;
        void fun()
        {cout<<"Derived Fun\n";}
        virtual void Sun()
        {cout<<"Derived Sun\n";}
        virtual void Mun()
        {cout<<"Derived Mun\n";}
        void Bun()
        {cout<<"Derived Bun\n";}
        
};//20 Bytes

int main(){
        Base*bp= new Derived();
       
        cout<<sizeof(Base)<<"\n";
        cout<<sizeof(Derived)<<"\n";

        bp->fun();
        bp->gun();
        bp->Sun();
        bp->Run();
       // bp->Bun(); Error
       // bp->Mun(); Error

}
