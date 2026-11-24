#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
   public:
    int i,j;
    void fun()              //1000
    {cout<<"Base Fun\n";}   
    void gun()              //2000
    {cout<<"Base Gun\n";}
    virtual void Sun()     //3000
    {cout<<"Base Sun\n";}
    virtual void Run()     //4000
    {cout<<"Base Run\n";}

};//16 Bytes

#pragma pack(1)
class Derived:public Base
{
    public:
        int x;
        void fun()              //5000 Address
        {cout<<"Derived Fun\n";}
        virtual void Sun()      //6000
        {cout<<"Derived Sun\n";}
        virtual void Mun()      //7000
        {cout<<"Derived Mun\n";}
        void Bun()              //8000
        {cout<<"Derived Bun\n";}
        
};//20 Bytes

int main(){
        Base*bp= new Derived();
       


        bp->fun(); 
        bp->gun(); 
        bp->Sun();
        bp->Run();
       // bp->Bun(); Error
       // bp->Mun(); Error

}
