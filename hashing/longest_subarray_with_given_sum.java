import java.lang.annotation.Target;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
public class answer 
{
    public static void main(String[] args)
    {
        HashMap<Integer,Integer> st=new HashMap<Integer,Integer>();
        Integer[] arr=new Integer[]{8,3,1,5,-6,6,2,2};
        Integer res=0;
        Integer cf=0;
        int Target=4;
        for (Integer i = 0; i < arr.length; i++) {
            cf+=arr[i];
            if (cf==Target) {    // if arr upto i is subarray then ans is index+1
                res=i+1;
            }
            if (!st.containsKey(cf)) {
                st.put(cf, i);      //we will check if presum is already there if not then store it 
                                    // because we want to store only leftmost index of any presum to make 
                                    //subarray big
                
            }
            if (st.containsKey(cf-Target)) {
                Integer v3=i-st.get(cf-Target);    //length of subarray is index where cf-target is found minus current index
                if (v3>res) {
                    res=v3 ;                  
                }
                // res=max(res,v3);

            }
        }
System.out.println(res);

    }

}