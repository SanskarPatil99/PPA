#include<iostream>
using namespace std;
class Arithematic
{
    public:
        int no1;
        int no2;

        Arithematic(){
           this->  no1=0;
           this->  no2=0;
        }
        Arithematic(int i,int j){
          this->  no1=i;
          this->  no2=j;
        }
        //int addition (Arithmetic *this)
        int addition()
        {
            int ans=0;
            ans=this->no1 + this->no2;
            return ans;
        }
          //int substraction (Arithmetic *this)
        int substraction()
        {
            int ans=0;
            ans=this->no1 - this->no2;
            return ans;
        }
};
int main()
{
   Arithematic aobj1(21,10);
   int result=0;
  
   //result=addition(&aobj1)
   result=aobj1.addition();
   cout<<"Addition is: "<<result<<"\n";

    //result=substraction(&aobj1)
   result=aobj1.substraction();
   cout<<"Substraction  is: "<<result<<"\n";

    
    return 0;
}