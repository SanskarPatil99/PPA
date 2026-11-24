import java.util.Scanner;

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}


public class ExceptionDemo4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int Age=0;
        System.out.println("Enter Your Age: ");
        Age = sobj.nextInt();
        try
        {
        if(Age<18)
        {
            throw new AgeInvalid("You are under Age");
        }
        else
        {
            System.out.println("Welcome to hamster");
        }
    }
    catch(AgeInvalid aobj)
    {
        System.out.println("Exception occured due to age");
    }


    }
}

