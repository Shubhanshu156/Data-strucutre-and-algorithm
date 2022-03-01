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
        String a="aabca";
        String b="acaba";
        System.out.println(areAnagram(a, b));
   
     
    }
    public static boolean areAnagram(String a,String b) {
        int[] count=new int[256];
        for (int i = 0; i < a.length(); i++) {
            count[a.charAt(i)]+=1;

            
        }
        for (int i = 0; i < b.length(); i++) {
            count[a.charAt(i)]-=1;
        }
        for (int i : count) {
            if (i!=0) {
                return false;
                
            }
            
        }


        return true;
        
    }

}
