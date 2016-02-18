

 /* Node is defined as :
 class Node
    int data;
    Node left;
    Node right;

    */

static Node lca(Node root,int v1,int v2)
{
    java.util.LinkedList<Node> list = new java.util.LinkedList<Node>();
    Node temp = root;
    while(temp != null) {
        list.add(temp);
        if(v1 > temp.data) {
            temp = temp.right;
        } else if(v1 < temp.data) {
            temp = temp.left;
        } else {
            break;
        }
    }
    Node l = root;
    temp = root;
    while(temp != null) {
        if(list.indexOf(temp) != -1) {
            l = temp;
        }
        if(v2 > temp.data) {
            temp = temp.right;
        } else if(v2 < temp.data) {
            temp = temp.left;
        } else {
            break;
        }
    }
    return l;
}
