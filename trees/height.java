/*

 class Node
    int data;
    Node left;
    Node right;
*/
int height(Node root)
 {
      if(root == null) {
          return 0;
      }
    int left_height = 1 + height(root.left);
    int right_height = 1 + height(root.right);
    if(left_height > right_height) {
        return left_height;
    } else {
        return right_height;
    }
 }
