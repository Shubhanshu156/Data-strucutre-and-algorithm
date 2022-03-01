import java.lang.annotation.Target;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;

// import javax.print.event.PrintEvent;

public class answer 
{
    public static void main(String[] args)
    {
        Integer[] lst=new Integer[]{0,0,1,1,1,1,1,0};
        HashMap<Integer,Integer> st=new HashMap<Integer,Integer>();
        int cf=0;
        int res=0;
        for (int i = 0; i < lst.length; i++) {  // Make 0 to -1and then find maximum subarray with zero sum
            if (lst[i]==0) {
                lst[i]=-1;
            }
            
        }
        for (int i = 0; i < lst.length; i++) {
             cf+=lst[i];
            if (cf==0) {
                res=i+1;
                
            }
            if (!st.containsKey(cf)){
                st.put(cf, i);  
            }
            if (st.containsKey(cf)) {
                if (res<i-st.get(cf)){
                    res=i-st.get(cf);
                }                
            }
            
        }
        System.out.println(res);

    }

}