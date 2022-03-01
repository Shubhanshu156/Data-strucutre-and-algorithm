import javax.swing.plaf.ColorUIResource;

/**
 * j
 */
public class j {    
    public static void main(String[] args) {
        Node head=new Node(10);
        Node temp1=new Node(20);
        Node temp2=new Node(30);
        head.next=temp1;
        temp1.next=temp2;
        temp2.next=head;

        
        // display(head);
        display((head));

    }
    public static void display(Node head) {
        Node nexthead=head.next;
        System.out.println(head.data);
        while (nexthead!=head) {
            System.out.println(nexthead.data);
            nexthead=nexthead.next;
            
        }
        
    }
}
class Node {
    int data;
    Node next;

  Node(int dat) {
        data=dat;
        this.next=null;   
    }    
}