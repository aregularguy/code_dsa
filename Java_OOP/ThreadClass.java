// There are two ways to create a thread:
import java.io.*; 

// By extending Thread class
// By implementing Runnable interface.
// Commonly used methods of Thread class:
        // public void run(): is used to perform action for a thread.
        // public void start(): starts the execution of the thread.JVM calls the run() method on the thread.
        // public void sleep(long miliseconds): Causes the currently executing thread to sleep (temporarily cease execution) for the specified number of milliseconds.
        // public void join(): waits for a thread to die.
        // public void join(long miliseconds): waits for a thread to die for the specified miliseconds.
        // public int getPriority(): returns the priority of the thread.
        // public int setPriority(int priority): changes the priority of the thread.
        // public String getName(): returns the name of the thread.
        // public void setName(String name): changes the name of the thread.
        // public Thread currentThread(): returns the reference of currently executing thread.
        // public int getId(): returns the id of the thread.
        // public Thread.State getState(): returns the state of the thread.
        // public boolean isAlive(): tests if the thread is alive.
// public class MyClass extends Thread {
//     public void run()
//     {
        
//         System.out.println("Thread started " + Thread.currentThread().getName());
//         // above staement will print
//         // Thread started Thread-0 
//         // when start method is called and when run is called `main` will be printed
        
//     }
//     public static void main(String args[])
//     {
//         MyClass obj = new MyClass();
//         obj.run();
//     }
// }

// By implementing Runnable interface.
 class MyClass implements Runnable {
    public void run() {
        System.out.println("This Thread is running using Runnable Interface " + Thread.currentThread().getName());
        
    }
    public static void main(String args[])
    {
        MyClass obj = new MyClass();
        Thread t = new Thread(obj);
            t.start();
        
    }
}
