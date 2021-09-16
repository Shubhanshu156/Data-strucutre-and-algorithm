public class power_of_2 {
    public static void main(String[] args) {
        int n=0;
        if ((n&(n-1))==0) {
            if (n!=0){
            System.out.println("yes");
            }  
        }
        else{
            System.out.println("no");
        }
    }
    
}
