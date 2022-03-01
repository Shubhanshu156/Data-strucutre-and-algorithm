import java.util.Arrays;
import java.util.HashSet;

// import javax.print.event.PrintEvent;

public class answer 
{
    public static void main(String[] args)
     {
         Integer[] arr1=new Integer[]{11,5,6};
         int target=10;
         HashSet<Integer> st=new HashSet<Integer>();
         Boolean cond=false;
         for (Integer v : arr1) {
             if (st.contains(target-v)) {
                 cond=true;
                 System.out.println(v+" "+(target-v));
                 break;
             }
             else{
                 st.add(v);
             }
             
         }
        if (cond) {
             System.out.print("YES PAIR IS THERE");
            
        }
        }

}