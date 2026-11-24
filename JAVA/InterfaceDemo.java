interface Calculations
{
    int Addition(int no1,int no2);
    int Substraction(int no1,int no2);
}
class Mathematics implements Calculations
{
    public int Addition(int no1,int no2)
    {
        return no1+no2;
    }
    public int Substraction(int no1,int no2)
    {
        return no1-no2;
    }
    public int multiplication(int no1,int no2)
    {
        return no1*no2;
    }
}

public class InterfaceDemo 
{
    public static void main(String A[])
    {
        Mathematics mobj=new Mathematics();
        System.out.println(mobj.Addition(11,10)); 
        System.out.println(mobj.Substraction(11,10));
        System.out.println(mobj.multiplication(11,10));
    }
}
