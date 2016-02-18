/* Node is defined as :
class Node
   int data;
   Node left;
   Node right;

   */

static Node Insert(Node root,int value)
{
   Node temp = root;
   Node t = root;
   if(root == null) {
       Node n = new Node();
       n.left = null;
       n.right = null;
       n.data = value;
       return n;
   }
   while(root != null) {
       temp = root;
       if(value > root.data) {
           root = root.right;
       } else {
           root = root.left;
       }
   }
   Node n = new Node();
   n.data = value;
   n.left = null;
   n.right = null;
   if(value > temp.data) {
       temp.right = n;
   } else {
       temp.left = n;
   }
   return t;
}
