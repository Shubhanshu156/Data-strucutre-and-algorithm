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
    public static void main(String[] args)
    {
        int[] count=new int[26];
        String s="geekforgeeks";
        for (int i = 0; i < s.length(); i++) {
            count[s.charAt(i)-'a']+=1;
        }
        for (int i = 0; i < count.length; i++) {
            if (count[i]>0) {
                
                System.out.println((char)(i+'a')+" "+count[i]);
            }
            
        }


    }


}