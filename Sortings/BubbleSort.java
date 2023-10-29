// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class BubbleSort {
    
    
    public static void bubbleSort(int [] arr,int n)
    {
        boolean flg;
        int tmp;
        for(int i=0;i<n-1;i++)
        {
            flg = false;
             
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j] > arr[j+1])
                {
                    tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                    flg = true;
                }
                
            }
            if(flg ==false)
            break;
        }
    }
    public void printArray(int[] arr)
    {
        int n = arr.length;
         System.out.println("Array element is ");
        for(int i=0;i<n;i++)
        {
            System.out.println(arr[i] + " ");
        }
    }
    
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        int [] arr = {5,6,1,3,12,343,56,34};
        int n = arr.length;
        BubbleSort bs = new BubbleSort();
        
       bs.printArray(arr);
         bs.bubbleSort(arr,n);
         System.out.println("Array element after sorting are ");
         bs.printArray(arr);
        
    }
}
