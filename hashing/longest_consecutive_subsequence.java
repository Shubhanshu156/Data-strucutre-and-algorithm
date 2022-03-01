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
        Integer[] arr=new Integer[]{3,8,4,5,7};
        int res=0;
        HashSet<Integer> lst=new HashSet<Integer>(Arrays.asList(arr)); // add elememt into hashset
        for (Integer ele : lst) {
            // System.out.println(ele);
            if (lst.contains(ele-1)) {       
                continue;
            }
            else{
                int curr=1;                 /// we elemnt is starting point mean eleme-1 is 
                while (lst.contains(ele+curr)) //not present like 3-1=2 is not preset in set so 3 is startnig point then check for 4 then check for 5 and so om 
                {
                    curr++;
                }
                if (res<curr) {
                    res=curr;
                    
                }
            }

            
        }
    System.out.println(res);
    }


}