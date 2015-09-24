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
      ArrayStack(size_t capacity = 10);
      ArrayStack(const ArrayStack& src);
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

      bool get(size_t index, T& output)
      {
         // If the stack is empty, return false

         // If the index is out of bounds, return false

         // Output is assigned the element at array index
         // Return true
      }

      bool find(T& input)
      {
         // Loop through the array
            // If element is equal to input
            // Return true

         // Return false
      }

      const T& peek();

      size_t capacity();

      bool empty();

      void clear();

      bool resize(const size_t& newCapacity);

   private:
      size_t size;
      size_t maxSize;
      T* data;
};
