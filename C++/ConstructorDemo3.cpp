#include<iostream>
using namespace std;

class PPA
{
    public:
        int No1;
        int No2;
        // default Constructor
        PPA()
        {
            cout<<"Inside Default Constructor\n";
        }
        //Destructor
        ~PPA(){
            cout<<"Inside Destructor\n";
        }
         //paramterised Constructor
        PPA(int a,int b)
        {
            cout<<"Inside Parameterised Constructor\n";
        }
        //COPY CONSTRUCTOR
        PPA(PPA &obj){
            cout<<"Inside Copy Constructor\n";
        }
};

int main()
{
    PPA Pobj1;//DEFAULT
    PPA Pobj2(11,21);//PARAMETRISED
    PPA Pobj3(Pobj1);//COPY
    

    return 0;
}