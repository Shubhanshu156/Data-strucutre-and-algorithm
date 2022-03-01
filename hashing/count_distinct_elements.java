
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
// import java.util.HashSet;
import java.util.List;

// import javax.print.event.PrintEvent;

public class answer {
    public static void main(String[] args) {
        Integer[] arr=new Integer[] {15,12,13,12,13,13,18};
        HashSet<Integer> mp=new HashSet<Integer>(Arrays.asList(arr));
        System.out.print(mp.size());
}}