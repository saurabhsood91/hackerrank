/*
   class Node
       int data;
       Node left;
       Node right;
*/
void print_right(Node root) {
    if(root == null) {
        return;
    }
    print_right(root.left);
    System.out.print(root.data + " ");
}

void top_view(Node root)
{
    Node temp;
    print_right(root.left);
    System.out.print(root.data + " ");
    temp = root.right;
    while(temp != null) {
        System.out.print(temp.data + " ");
        temp = temp.right;
    }
}
