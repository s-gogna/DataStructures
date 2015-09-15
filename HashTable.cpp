/*!*****************************************************************************
@file HashTable.cpp

Operation  |  Average  |  Worst
-------------------------------------------------------------------------------
Insertion  |  O(1)     |  O(n)
Deletion   |  O(1)     |  O(n)
Access     |  --       |  --
Search     |  O(1)     |  O(n)

Collision resolution is very important in hash tables because a perfect hash
function is difficult for all but the most trivial cases. It is assumed
collisions will occur, so programmer(s) must make design choices for handling
them.
*******************************************************************************/

template <typename T>
class HashTable
{
   public:
      HashTable(int maxSize, int (*hash)(const T&));
      HashTable(const HashTable& src);
      ~HashTable();

      bool insert(const T& input)
      {
         // Compute the hash of the input

         // Use (hash % maxSize) to compute the index into the array

         // If an object exists at the location
            // If the object is equal to the input
               // Return true

            // Resolve the next "open" position from the collision location
            // This specifics of this part depends on the type of collision resolution

            // If the position is available
               // Insert the object

               // Return true

            // Else
               // Return false

         // Else
            // Insert the object

            // Return true
      }

      bool search(const T& input)
      {
         // Compute the hash of the input

         // Use (hash % maxSize) to compute the index into the array

         // If an object exists at the location
            // If the object is equal to the input
               // Return true

            // Else there was a collision on insertion
               // Loop through the possible locations after a collision
                  // If the object is equal to the input
                     // Return true

         // Return false
      }

      bool remove(const T& input)
      {
         // Compute the hash of the input

         // Use (hash % maxSize) to compute the index into the array

         // If an object exists at the location
            // If the object is equal to the input
               // Remove from the array

               // Return true

            // Else there was a collision on insertion
               // Loop through the possible locations after a collision
                  // If the object is equal to the input
                     // Remove from the array

                     // Return true

         // Return false
      }

      int size();

      bool empty();

      void clear();

   private:
      int size;
      int maxSize;
      T* table;
      int (*hash)(const T&);
};
