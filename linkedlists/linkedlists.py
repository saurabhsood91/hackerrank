class Node():
    def __init__(self, data):
        self.next = None
        self.data = data

class LinkedList():
    def __init__(self):
        self.head = None

    def insert_front(self, value):
        node = Node(value)
        if self.head == None:
            self.head = node
        else:
            node.next = self.head
            self.head = node

    def insert_back(self, value):
        node = Node(value)

        if self.head == None:
            self.head = node
            return

        temp = self.head
        while temp.next != None:
            temp = temp.next
        temp.next = node

    def insert_at_position(self, k, value):
        temp = self.head
        i = 0
        while i < k - 1 and temp != None:
            temp = temp.next
            i += 1

        if temp != None:
            node = Node(value)
            node.next = temp.next
            temp.next = node

    def print_values(self):
        temp = self.head
        while temp != None:
            print temp.data,
            temp = temp.next
        print

if __name__ == "__main__":
    list = LinkedList()
    list.insert_back(1)
    list.insert_back(2)
    list.insert_back(3)
    list.insert_back(4)
    list.insert_back(5)
    list.insert_front(9)
    list.insert_front(8)
    list.insert_front(7)
    list.insert_front(10)
    list.insert_front(11)
    list.print_values()
    list.insert_at_position(4, 15)
    list.print_values()
