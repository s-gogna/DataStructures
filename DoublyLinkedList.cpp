/*!*****************************************************************************
@file DoublyLinkedList.cpp

Operation  |  Average  |  Worst
-------------------------------------------------------------------------------
Insertion  |  O(1)     |  O(1)
Deletion   |  O(1)     |  O(1)
Access     |  O(n)     |  O(n)
Search     |  O(n)     |  O(n)
*******************************************************************************/

template <typename T>
class DoubleLinkNode;

template <typename T>
class DoublyLinkedList
{
   public:
      DoublyLinkedList();
      DoublyLinkedList(const DoublyLinkedList& src);
      ~DoublyLinkedList();

      void insert(const T& input)
      {
         // If list is empty
            // Create a new node containing the input

            // Set cursor, front, and back to new node

         // Else
            // Create a new node containing the input

            // Update cursor and previous node's pointers

            // If cursor is at the front
               // Update front pointer

            // Else if cursor is at the back
               // Update back pointer

         // Return true
      }

      bool remove(T& output)
      {
         // If the list is empty, return false

         // Output is assigned the value of the node at the cursor

         // If cursor is at the front
            // Update the previous pointer of the next node

            // Update the cursor and front

         // Else if cursor is at the back
            // Update the next pointer of the previous node

            // Update the cursor and back

         // Else
            // Update the next pointer of the previous node

            // Update the previous pointer of the next node

            // Update cursor

         // If front or back are NULL, the list is empty

         // Return true
      }

      bool get(size_t index, T& output)
      {
         // If the list is empty, return false

         // If the index is out of bounds, return false

         // If the index is closer to the front
            // Follow node next-pointers to index-th element

         // If the index is closer to the end
            // Follow node previous-pointers to index-th element

         // Output is assigned the value of the node
         // Return true
      }

      bool find(T& input)
      {
         // If the list is empty, return false

         // Start at the front pointer

         // Loop until the pointer is NULL
            // If the value of the node is equal to the input
               // Return true

            // Follow the "next" pointer

         // Return false
      }

      bool replace(const T&);

      bool empty();

      void clear();

      size_t size();

      bool gotoFront();

      bool gotoEnd();

      bool gotoNext();

      bool gotoPrev();

   private:
      size_t size;
      DoubleLinkNode<T>* cursor;
      DoubleLinkNode<T>* front;
      DoubleLinkNode<T>* back;
};

template <typename T>
struct DoubleLinkNode
{
   DoubleLinkNode(T value, DoubleLinkNode<T>* next, DoubleLinkNode<T>* prev);

   T value;
   DoubleLinkNode<T>* next;
   DoubleLinkNode<T>* prev;
};
