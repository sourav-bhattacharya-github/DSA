// Node Class
class Node {
    int data;
    Node next;
    
    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

// Linked List Class
class LinkedList {
    Node head;
    
    // Constructor
    LinkedList() {
        this.head = null;
    }
    
    // Insert at beginning
    public void insertAtBeginning(int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
    }
    
    // Insert at end
    public void insertAtEnd(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node current = head;
        while (current.next != null) {
            current = current.next;
        }
        current.next = newNode;
    }
    
    // Insert at specific position (1-indexed)
    public void insertAtPosition(int data, int position) {
        Node newNode = new Node(data);
        if (position == 1) {
            newNode.next = head;
            head = newNode;
            return;
        }
        Node current = head;
        for (int i = 1; i < position - 1 && current != null; i++) {
            current = current.next;
        }
        if (current != null) {
            newNode.next = current.next;
            current.next = newNode;
        }
    }
    
    // Delete from beginning
    public void deleteFromBeginning() {
        if (head != null) {
            head = head.next;
        }
    }
    
    // Delete from end
    public void deleteFromEnd() {
        if (head == null) return;
        if (head.next == null) {
            head = null;
            return;
        }
        Node current = head;
        while (current.next.next != null) {
            current = current.next;
        }
        current.next = null;
    }
    
    // Delete at specific position (1-indexed)
    public void deleteAtPosition(int position) {
        if (head == null) return;
        if (position == 1) {
            head = head.next;
            return;
        }
        Node current = head;
        for (int i = 1; i < position - 1 && current != null; i++) {
            current = current.next;
        }
        if (current != null && current.next != null) {
            current.next = current.next.next;
        }
    }
    
    // Display linked list
    public void display() {
        Node current = head;
        System.out.print("Linked List: ");
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }
    
    // Search element
    public boolean search(int data) {
        Node current = head;
        while (current != null) {
            if (current.data == data) {
                return true;
            }
            current = current.next;
        }
        return false;
    }
    
    // Get length
    public int length() {
        int count = 0;
        Node current = head;
        while (current != null) {
            count++;
            current = current.next;
        }
        return count;
    }
}

public class Linked_list {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        
        // Insert elements
        list.insertAtEnd(10);
        list.insertAtEnd(20);
        list.insertAtEnd(30);
        list.insertAtBeginning(5);
        list.display();
        
        // Insert at position
        list.insertAtPosition(15, 2);
        list.display();
        
        // Delete operations
        list.deleteFromBeginning();
        list.display();
        
        list.deleteFromEnd();
        list.display();
        
        // Search
        System.out.println("Search 20: " + list.search(20));
        System.out.println("Search 100: " + list.search(100));
        
        // Length
        System.out.println("Length: " + list.length());
    }
}
