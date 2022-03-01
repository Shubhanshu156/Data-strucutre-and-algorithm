import java.util.HashSet;

// import javax.print.event.PrintEvent;

public class answer 
{
    public static void main(String[] args)
     {
         Integer[] arr1=new Integer[]{10,15,20,15,30,30,5};
         Integer[] arr2=new Integer[]{30,5,30,80};
         HashSet<Integer> st=new HashSet<Integer>();
         for (Integer elemens : arr1) {
             st.add(elemens);
         }
         int res=0;
         for (Integer elemets : arr2) {
             if (st.contains(elemets)) {
                 res++;
                 st.remove(elemets);
             }
             
         }
         System.out.println(res);
    }
}