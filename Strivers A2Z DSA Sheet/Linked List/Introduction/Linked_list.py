class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_beginning(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def insert_at_end(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        last = self.head
        while last.next:
            last = last.next
        last.next = new_node

    def delete_node(self, key):
        temp = self.head
        if temp is not None:
            if temp.data == key:
                self.head = temp.next
                temp = None
                return
        while temp is not None:
            if temp.data == key:
                break
            prev = temp
            temp = temp.next
        if temp == None:
            return
        prev.next = temp.next
        temp = None

    def print_list(self):
        temp = self.head
        while temp:
            print(temp.data, end="->")
            temp = temp.next
        print("None")

# Example usage
if __name__ == "__main__":
    linked_list = LinkedList()
    linked_list.insert_at_end(1)
    linked_list.insert_at_end(2)
    linked_list.insert_at_end(3)
    linked_list.insert_at_beginning(0)
    linked_list.print_list()  # Output: 0->1->2->3->None
    linked_list.delete_node(2)
    linked_list.print_list()  # Output: 0 1
    linked_list.delete_node(0)
    linked_list.print_list()  # Output: 1
    linked_list.delete_node(1)
    linked_list.print_list()  # Output: 
# This code defines a simple implementation of a singly linked list in Python. It includes methods for inserting nodes at the beginning and end of the list, deleting nodes by value, and printing the contents of the list. The example usage demonstrates how to use these methods to manipulate the linked list.
