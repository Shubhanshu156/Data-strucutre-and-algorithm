
/**
 * j
 */
public class j {
    public static void main(String[] args) {
        Node head=new Node(10);
        // head.next=new Node(20);
        // head.next.next=new Node(30);
        display(delete(head));
        // display(head);

    }
    
    
    public static void display(Node head) {
        if (head==null) {
            return;
            
        }
        System.out.println(head.data);
        display(head.next);
        
    }
    
public static Node insert(Node head) {
    if (head==null) {
        return null;
        
    }
    if (head.next==null) {
        return null;
        
    }
    Node temp=head;
    while (temp.next.next!=null) {
        temp=temp.next;

        
    }
    temp.next=null;
    return head;
    
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