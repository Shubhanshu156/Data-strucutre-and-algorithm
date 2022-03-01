import java.lang.annotation.Target;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;

// import javax.print.event.PrintEvent;

public class answer 
{

// create empty map
// for i in range(arr)
// if map contains arr[i] =>map[arr[i]]++
// elif map size is less than k-1 then put arr[i] in map (arr[i],1)
// else decrease all element count by 1 if any element freq is zero then remove that element from map
// remainig element in map are answer

    public static void main(String[] args)
    {
        Integer[] arr=new Integer[]{30,10,20,20,20,10,40,30,30};
        int k=4;
        HashMap<Integer,Integer>mp=new HashMap<Integer,Integer>();
        for (Integer ele : arr) {
            if (mp.size()<k-1 || mp.containsKey(ele)) {
                mp.put(ele, mp.getOrDefault(ele, 0)+1);
            }
            else{
                for (Map.Entry<Integer,Integer> e: mp.entrySet()) {
                    int v=mp.getOrDefault(e.getKey(), 0)-1;
                    if (v==0) {
                        mp.remove(e.getKey());
                    }
                    else{
                        mp.put(e.getKey(), e.getValue()-1);
                    }
                

                    
                }

            }
            
        }
     System.out.println(mp.size());
    }


}