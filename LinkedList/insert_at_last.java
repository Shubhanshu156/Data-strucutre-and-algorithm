
/**
 * j
 */
public class j {
    public static void main(String[] args) {
        Node head=new Node(10);
        head.next=new Node(20);
        head.next.next=new Node(30);
        display(insert(head, 40));
        // display(head);

    }
    
    
    public static void display(Node head) {
        if (head==null) {
            return;
            
        }
        System.out.println(head.data);
        display(head.next);
        
    }
    
public static Node insert(Node head,int data) {
    Node a=head;
    if (head==null) {
        return new Node(data);
        
    }
    while (a.next!=null) {
        a=a.next;
    }
    a.next=new Node(data);
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