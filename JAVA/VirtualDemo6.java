class Base
{
  
    int i,j;
    void fun()             
    {System.out.println("Base Fun");}   
    void gun()           
    {System.out.println("Base gun");}  
    void Sun()    
    {System.out.println("Base Sun");}  
    void Run()    
    {System.out.println("Base Run");}  

}


class Derived extends Base
{
    
        int x;
        void fun()             
        {System.out.println("Derived Fun");}  
        void Sun()      
        {System.out.println("Derived Sun");}  
         void mun()      
       {System.out.println("Derived Mun");}  
        void bun()             
       {System.out.println("Derived Bun");}  
}
public class VirtualDemo6
{
    public static void main(String[] args) 
         {
            Base bp= new Derived();
        
            bp.fun(); 
            bp.gun(); 
            bp.Sun();
            bp.Run();
            //bp.mum();//error
            //bp.bun();//error
       
    
  }
}
