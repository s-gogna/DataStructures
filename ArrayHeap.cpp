/*!*****************************************************************************
@file ArrayHeap.cpp

Operation  |  Average  |  Worst
-------------------------------------------------------------------------------
Insertion  |           |
Deletion   |           |
Access     |           |
Search     |           |
*******************************************************************************/

template <typename T>
class ArrayHeap
{
   public:
      ArrayHeap(int maxSize = 16);
      ArrayHeap(const ArrayHeap& src);
      ~ArrayHeap();

      bool push(const T& input)
      {
         // TODO
      }

      bool pop(T& output)
      {
         // TODO
      }

      bool search(const T& input)
      {
         // TODO
      }

      bool replace(const T& input);

      int size();

      bool empty();

      void clear();

   private:
      void siftUp()
      {
         // TODO, used on insertion
      }

      void siftDown()
      {
         // TODO, used on removal/replacement
      }

      int size;
      int maxSize;
      T* table;
};
