/**
 * j
 */
public class j {
    public static void main(String[] args) {
        
        Node head=new Node(10);
        head.next=new Node(20);
        head.next.next=new Node(30);

        Node v=head;
        while (v!=null) {
            System.out.println(v.data);
            v=v.next;
            // if (v==null) {
            //     break;
                
            // }
            
        }

    }
    



}
/**
 * Innerj
 */
class Node {
    int data;
    Node next;
  Node(int dat) {
        data=dat;
        this.next=null;   
    }
    

    
}