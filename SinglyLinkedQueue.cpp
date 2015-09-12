/*!*****************************************************************************
@file SinglyLinkedQueue.cpp

Operation  |  Average  |  Worst
-------------------------------------------------------------------------------
Insertion  |  O(1)     |  O(1)
Deletion   |  O(1)     |  O(1)
Access     |  O(n)     |  O(n)
Search     |  O(n)     |  O(n)
*******************************************************************************/

template <typename T>
class SingleLinkNode;

template <typename T>
class SinglyLinkedQueue
{
   public:
      SinglyLinkedQueue();
      SinglyLinkedQueue(const SinglyLinkedQueue& src);
      ~SinglyLinkedQueue();

      void enqueue(const T& input)
      {
         // If the queue is empty
            // Create a new node with the input

            // Set front and back pointers to the new node

         // Else
            // Create a new node with the input

            // "Connect" the new node to the end of the queue

            // Move the back pointer to the new node
      }

      bool dequeue(T& output)
      {
         // If the queue is empty, return false

         // Output is assigned the value in the node at the front

         // Front pointer is moved to the "next" node

         // If the front pointer is NULL, the queue is empty

         // Return true
      }

      bool get(int index, T& output)
      {
         // If the queue is empty, return false

         // If the index is out of bounds, return false

         // Start at the front

         // Attempt to follow the "next" pointer "index - 1" times

         // Output is assigned the value at the index-th node

         // Return true
      }

      bool find(T& input)
      {
         // If the queue is empty, return false

         // If the index is out of bounds, return false

         // Start at the front

         // Loop until pointer is NULL
            // If the value of the node is equal to the input
               // Return true

            // Follow the "next" pointer

         // Return false
      }

      const T& front();

      const T& back();

      int size();

      bool empty();

      void clear();

   private:
      int size;
      SingleLinkNode<T>* front;
      SingleLinkNode<T>* back;
};

template <typename T>
struct SingleLinkNode
{
   SingleLinkNode(T value, SingleLinkNode<T>* next);

   T value;
   SingleLinkNode<T>* next;
};
