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

      bool insertHelper(BinaryTreeNode*& node, const T& input)
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

      bool removeHelper(BinaryTreeNode*& node, const T& key)
      {
         // TODO
      }

      bool findHelper(BinaryTreeNode*& node, const T& key)
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

      void recolor(BinaryTreeNode*& node)
      {
         // TODO
      }

      int rotateLeft(BinaryTreeNode*& node)
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

      int rotateRight(BinaryTreeNode*& node)
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
