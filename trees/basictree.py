class Node():
    def __init__(self, item):
        self.data = item
        self.left = None
        self.right = None

class Tree():
    def __init__(self, root=None):
        self.root = root

    def preorder(self, root):
        if root == None:
            return
        self.preorder(root.left)
        print root.data, ' ',
        self.preorder(root.right)

    def inorder(self, root):
        if root == None:
            return
        print root.data,  ' ',
        self.inorder(root.left)
        self.inorder(root.right)

    def postorder(self, root):
        if root == None:
            return
        self.postorder(root.left)
        self.postorder(root.right)
        print root.data, ' ',


if __name__ == "__main__":
    node_1 = Node(1)
    node_2 = Node(2)
    node_3 = Node(3)
    node_4 = Node(4)
    node_5 = Node(5)

    node_1.left = node_2
    node_1.right = node_3
    node_2.left = node_4
    node_2.right = node_5

    tree = Tree(node_1)
    tree.preorder(tree.root)
    print
    tree.inorder(tree.root)
    print
    tree.postorder(tree.root)
