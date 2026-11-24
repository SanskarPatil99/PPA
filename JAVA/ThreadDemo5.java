class Demo extends Thread
{
    public void run()
    {
        System.out.println("thread is Running....");
    }
}


public class ThreadDemo5 
{
    public static void main(String A[])
    {
        System.out.println("Inside Main Thread");

        Demo dobj1= new Demo();
        Demo dobj2= new Demo();
        
        dobj1.start();
        dobj2.start();
        
        System.out.println("End Of Main Thread"); //issue calls first


    }
}
