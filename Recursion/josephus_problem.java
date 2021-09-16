import java.util.ArrayList;

public class josephus_problem {
    public static int kill(int n,int k,int index,ArrayList<Integer> lst) {
        if (lst.size()==1) {
            return lst.get(0);            
        }
        index=(index+k)%lst.size();
        lst.remove(index);
        return kill(n, k, index, lst); 
        
    }


public static void main(String[] args) {
    int n=40;
   int k=7;
    k-=1;

    ArrayList<Integer> foo = new ArrayList<>();
    for (int i = 1; i <=n; i++) {
        foo.add(i);
        
    }
    System.out.println(kill(n, k, 0, foo));
}
}