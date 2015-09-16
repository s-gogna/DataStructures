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

      bool insert(const T& input)
      {
         // If the tree is empty
            // Create a new node containing the input

            // Color it black

            // Return true

         // Else
            // Return insertHelper(root, input)
      }

      bool search(const T& key);

      bool remove(const T& key);

      int size();

      bool empty();

      void clear();

   private:

      bool insertHelper(BinaryTreeNode*& node, const T& input)
      {
         // TODO
      }

      bool findHelper(BinaryTreeNode*& node, const T& key)
      {
         // TODO
      }

      bool removeHelper(BinaryTreeNode*& node, const T& key)
      {
         // TODO
      }

      void rotateLeft(BinaryTreeNode*& node)
      {
         // TODO
      }

      void rotateRight(BinaryTreeNode*& node)
      {
         // TODO
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
