// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.*;

class Stack {
    public  int [] arr;
    public  int index ;
    Stack()
    {
        index = 0;
            arr = new int[20];
    }
    public void insert(int x)
    {
        index++;
        arr[index] = x;
    }
    public void popelement()
    {
        // remove last element
        if(index >= 0)
        index--;
       arr =  Arrays.copyOf(arr, arr.length-1);

    }
    public int top_Element()
    {
        if(index != -1)
        {
            return arr[index];
            
        }
        return -1;
    }
    public static void main(String[] args) {
        System.out.println("Try programiz.pro");
        List<Integer> ls = Arrays.asList(32,12,31,22,10);
       int ans  = ls.stream().mapToInt(Integer::intValue).max().orElseThrow();
        System.out.println("Hii" + ans);
        Stack st = new Stack();
        st.insert(20);
        st.insert(11);
        System.out.println("Top element is " + st.top_Element());
        st.popelement();
        System.out.println("Top element is " + st.top_Element());
        
    }
    
}
// class Main {
    
// }
