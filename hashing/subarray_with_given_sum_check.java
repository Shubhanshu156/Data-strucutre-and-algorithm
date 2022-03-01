import java.util.Arrays;
import java.util.HashSet;

// import javax.print.event.PrintEvent;

public class answer 
{
    public static void main(String[] args)
    {
        HashSet<Integer> st=new HashSet<Integer>();
        Integer[] arr=new Integer[]{5,8,6,13,3,-1};
        int target=22;
        Integer cf=0;
        for (Integer inti : arr) {
            cf+=inti;
            if (cf==target) {
                System.out.println("yes subarray found");
                break;
                
            }
            if(st.contains(cf-target)){
                System.out.println("yes subarray found");
                break;
            }
                // System.out.println(cf);
                st.add(cf);

            
        }

    }

}