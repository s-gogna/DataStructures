/*!*****************************************************************************
@file Stack.cpp

Operation  |  Average  |  Worst
-------------------------------------------------------------------------------
Insertion  |  O(1)     |  O(1)
Deletion   |  O(1)     |  O(1)
Access     |  O(n)     |  O(n)
Search     |  O(n)     |  O(n)
*******************************************************************************/

template <typename T>
class Stack
{
   public:
      Stack();
      Stack(const Stack&);
      ~Stack();

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

      bool empty()
      {
         // Return if size is 0
      }

      void clear()
      {
         // Existing elements can be ignored
         // Set size to 0 to effectively "clear" the stack
      }

   private:
      int size;
      int maxSize;
      T* data;
};
