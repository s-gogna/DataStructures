/*!*****************************************************************************
@file HashTable.cpp

Operation  |  Average  |  Worst
-------------------------------------------------------------------------------
Insertion  |           |
Deletion   |           |
Access     |           |
Search     |           |
*******************************************************************************/

template <typename T>
class HashTable
{
   public:
      HashTable(int size = 10);
      HashTable(const HashTable& src);
      ~HashTable();

      bool insert(const T& input)
      {
         // TODO
      }

      bool search(const T& key)
      {
         // TODO
      }

      bool remove(const T& key)
      {
         // TODO
      }

      int size();

      bool empty();

      void clear();

   private:
      int size;
      T* table;
};
