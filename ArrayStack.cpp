/*!*****************************************************************************
@file ArrayStack.cpp

Operation  |  Average  |  Worst
-------------------------------------------------------------------------------
Insertion  |  O(1)     |  O(1)
Deletion   |  O(1)     |  O(1)
Access     |  O(1)     |  O(1)
Search     |  O(n)     |  O(n)
*******************************************************************************/

template <typename T>
class ArrayStack
{
   public:
      ArrayStack(int capacity = 10);
      ArrayStack(const ArrayStack&);
      ~ArrayStack();

      bool push(const T& input)
      {
         // If stack is full, return false

         // Append the element to the end of the array
         // Return true
      }

      bool pop(T& output)
      {
         // If stack is empty, return false

         // Output is assigned to the element at the end
         // Return true
      }

      bool get(int index, T& output)
      {
         // If the stack is empty, return false

         // If the index is out of bounds, return false

         // Output is assigned the element at array index
         // Return true
      }

      bool search(T& input)
      {
         // Loop through the array
            // If element is equal to input
            // Return true

         // Return false
      }

      const T& peek();

      int capacity();

      bool empty();

      void clear();

      bool resize(const int& newCapacity);

   private:
      int size;
      int maxSize;
      T* data;
};
