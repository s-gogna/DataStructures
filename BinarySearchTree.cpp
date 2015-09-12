/*!*****************************************************************************
@file BinarySearchTree.cpp

Operation  |  Average  |  Worst
-------------------------------------------------------------------------------
Insertion  |  O(log n) |  O(n)
Deletion   |  O(log n) |  O(n)
Access     |  --*      |  --*
Search     |  O(log n) |  O(n)

* Not supported without augmenting the tree. Refer to Order Statistic Tree
 for n-th node access operations.
*******************************************************************************/

template <typename T>
class BinaryTreeNode;

template <typename T>
class BinarySearchTree
{
   public:
      BinarySearchTree();
      BinarySearchTree(const BinarySearchTree& src);
      ~BinarySearchTree();

      bool insert(const T& input);

      bool search(const T& key);

      bool remove(const T& key);

      int size();

      bool empty();

      void clear();

   private:

      bool insertHelper(BinaryTreeNode*& node, const T& input)
      {
         // If node is null
            // Create a new node containing the input

            // "node" is assigned the newly created node

            // Return true (insertion success)

         // Else
            // If the input is "lesser" than the value of node
               // return insertHelper(node -> left, input)

            // Else if the input is "greater" than the value of the node
               // return insertHelper(node -> right, input)

            // Else
               // return false (failure)
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

      bool removeHelper(BinaryTreeNode*& node, const T& key)
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
                  // Deallocate and set node pointer to NULL

               // Else if left == NULL && right != NULL
                  // Assign node to right

                  // Remove old node

               // Else if left != NULL && right == NULL
                  // Assign node to left

                  // Remove old node

               // Else
                  // Find the largest predecessor (LP)
                  // Follow the left node once and loop to the "deepest" right node

                  // "node" is assigned the LP

                  // Remove the LP

               // Return true
      }

      int size;
      BinaryTreeNode<T>* root;
};

template <typename T>
struct BinaryTreeNode
{
   BinaryTreeNode(T value, BinaryTreeNode<T>* left, BinaryTreeNode<T>* right);

   T value;
   BinaryTreeNode<T>* left;
   BinaryTreeNode<T>* right;
};
