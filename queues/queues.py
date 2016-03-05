class Queue():
    def __init__(self, capacity=5):
        self.data = []
        self.capacity = capacity

    def enqueue(self, item):
        if self.isFull():
            print "Queue is Full"
            return
        self.data.append(item)

    def isFull(self):
        return len(self.data) == self.capacity

    def dequeue(self):
        if len(self.data) == 0:
            print "Queue is Empty"
            return None
        return self.data.pop()

    def print_values(self):
        print self.data


if __name__ == "__main__":
    q = Queue(6)
    for i in xrange(0, 7):
        q.enqueue(i)
    q.print_values()

    print q.dequeue()
    print q.dequeue()
    print q.dequeue()
    print q.dequeue()
    print q.dequeue()
    q.print_values()
