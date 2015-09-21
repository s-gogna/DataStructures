/*!*****************************************************************************
@file RedBlackTree.cpp

Operation  |  Average  |  Worst
-------------------------------------------------------------------------------
Insertion  |  O(log n) |  O(log n)
Deletion   |  O(log n) |  O(log n)
Access     |  --       |  --
Search     |  O(log n) |  O(log n)
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

            // doInsertCases(node)

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
         // If node is null
            // Return false (not found)

         // Else
            // If the key is "lesser" than the value of node
               // return removeHelper(node -> left, key)

            // Else if the key is "greater" than the value of the node
               // return removeHelper(node -> right, key)

            // Else
               // If leaf node (NULL left and NULL right pointers)
                  // If the node is red
                     // Deallocate and set node pointer to NULL

                  // If the node is black
                     // doRemoveCases()

                  // Deallocate and set node pointer to NULL

               // Else if left == NULL && right != NULL
                  // replace(node, node -> right)

                  // If the original node was black
                     // If the new node is red
                        // Recolor the new node to black

                     // Else
                        // doRemoveCases(new-node)

                  // Deallocate the original node

               // Else if left != NULL && right == NULL
                  // replace(node, node -> left)

                  // If the original node was black
                     // If the new node is red
                        // Recolor the new node to black

                     // Else
                        // doRemoveCases(new-node)

                  // Deallocate the original node

               // Else
                  // Find the largest predecessor (LP)
                  // Follow the left node once and loop to the "deepest" right node

                  // Node copies the value of LP
                  // Pointers and color of node remain the same

                  // Remove the LP

               // Return true
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

      void doInsertCases(BinaryTreeNode<T>*& node)
      {
         // If parent of node is NULL (node is root)
            // Color the node black

         // Else if parent of node is black
            // Do nothing (black-height constraint not broken)

         // Else if parent is red and uncle (other child of grandparent) is red
            // Recolor parent and uncle to black

            // Recolor grandparent to red

            // doInsertCases(grandparent)

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

      void doRemoveCases(BinaryTreeNode<T>*& node)
      {
         // NOTE: NULL children are considered black. To prevent
         // seg. faults, pointer's should be checked before dereferencing.

         // If parent of node is NULL (node is root)
            // Return since there is nothing to do

         // If sibling is red
            // Recolor parent to red

            // Recolor sibling to black

            // If node is a left child
               // rotateLeft(node's parent)

            // Else
               // rotateRight(node's parent)

         // If parent is black, sibling is black, and
         // sibling's children are black
            // Recolor sibling to red

            // doRemoveCases(node's parent)

            // Return

         // If parent is red, sibling is black, and
         // sibling's children are black
            // Recolor sibling to red

            // Recolor parent to black

            // Return

         // If sibling is black
            // If node is a left child, sibling->right is black,
            // and sibling->left is red
               // Recolor sibling to red

               // Recolor sibling->left to black

               // rotateRight(sibling)

            // If node is a right child, sibling->left is black,
            // and sibling->right is red
               // Recolor sibling to red

               // Recolor sibling->right to black

               // rotateLeft(sibling)

         // Recolor sibling to parent's color

         // Recolor parent to black

         // If node is a left child
            // Recolor sibling->right to black

            // rotateLeft(node's parent)

         // Else
            // Recolor sibling->left to black

            // rotateRight(node's parent)
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

      void replace(BinaryTreeNode<T>* dest, BinaryTreeNode<T>* src)
      {
         // Copy the values and color of src into dest

         // Copy pointers of src into dest
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
