/**
 * permutation_with_spaces
 */
/**
 * permutation_with_case_change
 */
public class letter_case_permutation {
    // if you want all unique then store in map and check every time
    public static void subset(String ip,String op) {
        if (ip.length()==0)
        {
            System.out.println(op); //at leaf node we can get all permutation
            return;
        }
        String op1=op; 
        String op2=op;
        char temp=ip.charAt(0);
        op1+=ip.charAt(0); // we arae not capitalizing chracter  in this choice
        ip=ip.substring(1);  // we are removing 1 char from input
        if (Character.isAlphabetic(temp)) {
            if (Character.isUpperCase(temp)) {
                op2=op2+Character.toLowerCase(temp);
            }
            else{

                op2=op2+Character.toUpperCase(temp);  // we are captilizing which is our first choice
            }
            subset(ip, op1);   
            subset(ip, op2);            
        }
        else{
            subset(ip, op1);
        }

    }
    public static void main(String[] args) {
        subset("a1B2", "");
    }
    
}
