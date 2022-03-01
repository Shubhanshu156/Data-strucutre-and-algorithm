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

public class answer {
    public static void main(String[] args) {
        System.out.println(is_subsequence("hello", ""));
     
    }
    public static boolean is_subsequence(String a,String b) {
        int a1=a.length();
        int b1=b.length();
        int i=0;
        int j=0;
        while (i<a.length()) {
            if (a.charAt(i)==b.charAt(j)) {
                i++;
                j++;
                
            }
            else{
                i++;
            }
            
        }
        return j==b.length();
        
    }

}
