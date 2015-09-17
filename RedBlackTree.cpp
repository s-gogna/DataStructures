/*!*****************************************************************************
@file RedBlackTree.cpp

Operation  |  Average  |  Worst
-------------------------------------------------------------------------------
Insertion  |           |
Deletion   |           |
Access     |           |
Search     |           |
*******************************************************************************/

template <typename T>
class BinaryTreeNode;

template <typename T>
class RedBlackTree
{
   public:
      RedBlackTree();
      RedBlackTree(const RedBlackTree& src);
      ~RedBlackTree();

      bool insert(const T& input);

      bool remove(const T& key);

      bool find(const T& key);

      int size();

      bool empty();

      void clear();

   private:

      bool insertHelper(BinaryTreeNode<T>*& node, const T& input)
      {
         // If node is null
            // Create a new node containing the input

            // Color it red

            // "node" is assigned the newly created node

            // recolor(node)

         // Else
            // If the input is "lesser" than the value of node
               // return insertHelper(node -> left, input)

            // Else if the input is "greater" than the value of the node
               // return insertHelper(node -> right, input)

            // Else
               // return false (failure)
      }

      bool removeHelper(BinaryTreeNode<T>*& node, const T& key)
      {
         // TODO
      }

      bool findHelper(BinaryTreeNode<T>*& node, const T& key)
      {
         // If node is null
            // Return false (not found)

         // Else
            // If the key is "lesser" than the value of node
               // return findHelper(node -> left, key)

            // Else if the key is "greater" than the value of the node
               // return findHelper(node -> right, key)

            // Else
               // return true (found)
      }

      void verifyColor(BinaryTreeNode<T>*& node)
      {
         // If parent of node is NULL (node is root)
            // Color the node black

         // Else if parent of node is black
            // Do nothing (black-height constraint not broken)

         // Else if parent is red and uncle (other child of grandparent) is red
            // Recolor parent and uncle to black

            // Recolor grandparent to red

            // verifyColor(grandparent)

         // Else if parent is red and uncle is black
            // If node is a right child and parent is a left child
               // rotateLeft(parent)

               // Node points to node's old parent
               // The remainder of the code will validate colors from that node

            // Else if node is a left child and parent is a right child
               // rotateRight(parent)

               // Node points to node's old parent
               // The remainder of the code will validate colors from that node

            // Parent is colored black

            // Grandparent is colored red

            // If parent is a right child
               // rotateLeft(parent)

            // Else
               // rotateRight(parent)
      }

      int rotateLeft(BinaryTreeNode<T>*& node)
      {
         // Left tree is the initial
         // Right tree is after the rotateLeft(A)
         //
         //   A              C
         //  / \            / \
         // B   C    ->    A   E
         //    / \        / \
         //   D   E      B   D

         // If node does not have a right child, return NO_RIGHT_CHILD

         // Node's right-child's left-child becomes right-child of node

         // Node becomes left-child of the original right-child
      }

      int rotateRight(BinaryTreeNode<T>*& node)
      {
         // Left tree is the initial
         // Right tree is after the rotateRight(A)
         //
         //     A            B
         //    / \          / \
         //   B   C   ->   D   A
         //  / \              / \
         // D   E            E   C

         // If node does not have a left child, return NO_LEFT_CHILD

         // Node's left-child's right-child becomes left-child of node

         // Node becomes right-child of the original left-child
      }

      int size;
      BinaryTreeNode<T>* root;
};

template <typename T>
struct BinaryTreeNode
{
   BinaryTreeNode(bool isRed, T value, BinaryTreeNode<T>* parent,
      BinaryTreeNode<T>* left, BinaryTreeNode<T>* right);

   bool isRed;
   T value;
   BinaryTreeNode<T>* parent;
   BinaryTreeNode<T>* left;
   BinaryTreeNode<T>* right;
};
