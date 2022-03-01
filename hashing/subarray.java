import java.util.Arrays;
import java.util.HashSet;

// import javax.print.event.PrintEvent;

public class answer 
{
    public static void main(String[] args)
    {
        HashSet<Integer> st=new HashSet<Integer>();
        Integer[] arr=new Integer[]{1,4,13,-3,-10,5};
        Integer cf=0;
        for (Integer inti : arr) {
            cf+=inti;
            if(cf==0){
                System.out.println("yes subarray found");
                break;
            }
            if(st.contains(cf)){
                System.out.println("yes subarray found");
                break;
            }
                // System.out.println(cf);-
                st.add(cf);

            
        }

    }

}