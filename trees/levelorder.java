/*

    class Node
       int data;
       Node left;
       Node right;
   */

   void LevelOrder(Node root)
    {
       java.util.LinkedList<Node> queue = new java.util.LinkedList<Node>();
       if(root == null) {
           return;
       }
       queue.add(root);
       while(!queue.isEmpty()) {
           Node temp = queue.removeFirst();
           System.out.print(temp.data + " ");
           if(temp.left != null) {
               queue.add(temp.left);
           }
           if(temp.right != null) {
               queue.add(temp.right);
           }
       }
    }
