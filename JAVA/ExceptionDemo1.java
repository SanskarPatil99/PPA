import java.util.Scanner;

public class ExceptionDemo1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int no1=0,no2=0,ans=0;

        System.out.println("Enter First Number:  ");
        no1=sobj.nextInt();
         
        System.out.println("Enter Second Number:  ");
        no2=sobj.nextInt();

        ans=no1/no2; //Exception Prone code

        System.out.println("Divison is: "+ans);

    }
}
