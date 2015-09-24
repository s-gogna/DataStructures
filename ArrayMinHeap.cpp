/*!*****************************************************************************
@file ArrayMinHeap.cpp

Operation  |  Average  |  Worst
-------------------------------------------------------------------------------
Insertion  |  O(log n) |  O(log n)
Deletion   |  O(log n) |  O(log n)
Access     |  --       |  --
Search     |  O(n)     |  O(n)
*******************************************************************************/

template <typename T>
class ArrayMinHeap
{
   public:
      ArrayMinHeap(size_t maxSize = 16);
      ArrayMinHeap(const ArrayMinHeap& src);
      ~ArrayMinHeap();

      bool push(const T& input)
      {
         // If heap is full, return false

         // If heap is empty
            // Add input to beginning of array

            // Return true

         // Else
            // Insert at the end of the heap

            // While element is greater than parent and elemt is not root
               // Swap with parent

            // Return true
      }

      bool pop(T& output)
      {
         // If heap is empty, return false

         // Output is assigned the first element in the heap

         // Last element in the array is the new root

         // Assume heap does not follow the heap property

         // While not a min-heap (child is smaller than parent)
            // If left node is smaller than root
               // Swap with left child

            // Else if right node is smaller than root
               // Swap with right child

         // Return true
      }

      bool find(const T& input);

      bool replace(const T& input);

      size_t size();

      bool empty();

      void clear();

   private:

      void findHelper(size_t index, const T& input)
      {
         // If index is out of bounds, return false

         // If element is greater than input, return false

         // If element at index is input, return true

         // Else
            // Return findHelper(2 * index + 1, input) ||
            // findHelper(2 * index + 2, input)
      }

      size_t size;
      size_t maxSize;
      T* table;
};
