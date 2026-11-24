/*
  Sequence Decide by the JVM it changes everytime when code is excuted.There is no chance to predict the execution flow.

*/

class Demo extends Thread
{
    public void run() 

    {
        try {
             int i=0;  
               for(i=1;i<=10;i++)
       {
             System.out.println("Thread "+Thread.currentThread().getName()+" "+i);
             Thread.sleep(1000);
        }
             
        } 
        catch (Exception eobj) 
        {
         
        }
       
          
        
    }
}


public class ThreadDemo9
 {
    public static void main(String A[]) throws Exception
    {
        System.out.println("Inside Main Thread");

        Demo dobj1= new Demo();
        Demo dobj2= new Demo();

        dobj1.setName("First_Thread");
        dobj2.setName("Second_Thread");
        
        dobj1.start();
        dobj2.start();

        dobj1.join();
        dobj2.join();
        
        System.out.println("End Of Main Thread");


    }
}
