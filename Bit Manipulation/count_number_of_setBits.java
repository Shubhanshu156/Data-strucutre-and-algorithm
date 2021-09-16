public class count_number_of_setBits {
    public static void main(String[] args) {
        // Approach1 logn base 2 times

        int n=11;
        int f=1;
        int cnt=0;
    //     while (n>0) {
    //         if ((n & 1)>0) {
    //             cnt+=1;
    //         }
    //         n=n>>1;            
    //     }
    //     System.out.println(cnt);
    // }
    // Approach 2
    //https://www.geeksforgeeks.org/count-set-bits-in-an-integer/ (Brian Kernighan’s Algorithm)
    while(n>0){
        cnt+=1;
        n=n&(n-1);

    }
    System.out.println(cnt);
    
}}
