import java.util.ArrayList;
import java.util.LinkedList;

/**
 * chaining
 */
public class chaining {
    static int bucket=8;
    static ArrayList<LinkedList<Integer>> table=new ArrayList<LinkedList<Integer>>();
    public static void main(String[] args) {
        for(int i=0;i<bucket;i++){
            table.add(new LinkedList<Integer>());
        }
    }

    public static void insert(int number) {
        int i=number%bucket;
        table.get(i).add(number);

        
    }
    public static Boolean search(int key) {
        int i=key%bucket;
        return table.get(i).contains(key);

        
    }
public static void remove(int key) {
    int i=key%bucket;
    table.get(i).remove((Integer)key);
    
}


    
}