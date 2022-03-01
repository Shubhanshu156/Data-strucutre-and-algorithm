
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
// import java.util.HashSet;
import java.util.List;
import java.util.Map;

// import javax.print.event.PrintEvent;

public class answer {
    public static void main(String[] args) {
        HashMap<Integer,Integer> mp=new HashMap<Integer,Integer>();
        Integer[] arr=new Integer[]{1,2,3,5,11,3,42,12,3,2};
        for (Integer eleme : arr) {
            mp.put(eleme,mp.getOrDefault(eleme, 0)+1);
        }
        for (Map.Entry<Integer,Integer> e:mp.entrySet()) {
            System.out.println(e.getKey()+" "+e.getValue());
            
        }
}}