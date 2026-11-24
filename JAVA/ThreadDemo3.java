class Demo implements Runnable  
{
    public void run()
    {
        System.out.println("thread is Running....");
    }
}


public class ThreadDemo3 {
    public static void main(String A[])
    {
        System.out.println("Inside Main Thread");

        Demo dobj1= new Demo();
        Demo dobj2= new Demo();
        
        dobj1.start(); //Errro
        dobj2.start();//Error
        


    }
}
