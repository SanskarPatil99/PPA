import java.util.Scanner;

public class ExceptionDemo1xx
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int no1=0,no2=0,ans=0;
        
        try
        {
        System.out.println("Enter First Number:  ");
        no1=sobj.nextInt();
         
        System.out.println("Enter Second Number:  ");
        no2=sobj.nextInt();

        ans=no1/no2; //Exception Prone code
        }
        catch(ArithmeticException aobj)
        {
            System.out.println("Exception Occured: "+aobj);//+ concatination
        }
        catch(Exception eobj)
        {
            System.out.println("Inside Genric Catch");

        }
        finally
        {
            System.out.println("Inside Finally blocked");
        }
        
        System.out.println("Divison is: "+ans);

    }
}
