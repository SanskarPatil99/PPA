public class ThreadDemo1 {
    public static void main(String A[])
    {
        System.out.println("Inside Main");

        Thread t = Thread.currentThread();
        System.out.println("Current Thread  name is: "+t.getName());

        System.out.println("Current Thread ID is: "+t.getId()); //Depricated Method

        System.out.println("Thread is Alive or Not "+t.isAlive());

        System.out.println(" thread Priority is: "+t.getPriority());
    }
}
