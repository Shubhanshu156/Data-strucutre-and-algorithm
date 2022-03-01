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
        Integer[] lst=new Integer[]{0,1,0,0,0,0};
        Integer[] lst2=new Integer[]{1,0,1,0,0,1};
        HashMap<Integer,Integer> st=new HashMap<Integer,Integer>();
        int cf=0;
        int res=0;
        for (int i = 0; i < lst.length; i++) {  // subtract two arrray and find subarray with 0 sum
            lst[i]=lst[i]-lst2[i];
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