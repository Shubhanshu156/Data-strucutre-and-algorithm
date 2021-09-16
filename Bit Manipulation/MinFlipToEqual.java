import java.util.Scanner;

public class MinFlipToEqual {
    public static void main(String[] args) {
        int a,b,c;
        int cnt=0;
        Scanner foo = new Scanner(System.in);
        a=foo.nextInt();
        b=foo.nextInt();
        c=foo.nextInt();
        for (int i = 0; i <=31; i++) {
            Boolean A,B,C;
            A=false;
            B=false;
            C=false;
            if ((a&(1<<i))>0) {
                A=true;
                
            }
            if ((b&(1<<i))>0) {
                B=true;
                
            }
            if ((c&(1<<i))>0) {
                C=true;
                
            }
            if (C==false) {
                if (A==true && B==true) {
                    cnt+=2;
                    
                }
                else if(B==true){
                    cnt+=1;
                }

                
            }
            else{
                if (A==false && B==false) {
                    cnt+=1;
                    
                }
            }
        
        
        }
        System.out.println(cnt);
    }
    
}
