/*!*****************************************************************************
@file AdjacencyMatrixGraph.cpp

Operation     |  Average
-------------------------------------------------------------------------------
Add Vertex    |  O(|V|)      (See Note 1)
Add Edge      |  O(1)
Remove Vertex |  O(|V|^2)    (See Note 2)
Remove Edge   |  O(1)
Query         |  O(1)
Storage       |  O(|V|^2)

The pseudo-implementation below describes an undirected, unweighted graph.

Notes:
(1) Some implementations will copy the matrix as it grows. This implementation
assumes a fixed size, so adding a vertex is O(|V|).
(2) Removing a vertex at a smaller index requires copying the rest of the
data "up and over". This is the main reason the operation is O(|V|^2).

Row lists edges "belonging" to a vertex.
Column lists edges that "lead" to a specific vertex.
  | A | B
----------
A | 0 | 1
B | 1 | 0
*******************************************************************************/

template <typename T>
class AdjacencyMatrixGraph
{
   public:
      AdjacencyMatrixGraph(size_t maxSize = 10);
      AdjacencyMatrixGraph(const AdjacencyMatrixGraph& src);
      ~AdjacencyMatrixGraph();

      bool addVertex(const T& vertex)
      {
         // If the vertex exists in the vertex list
            // Return false

         // Add to the vertex list
         // Vertex list maintains the index of the vertex in the matrix

         // Add a row and column for the vertex

         // Return true
      }

      bool addEdge(const T& alpha, const T& beta)
      {
         // If either vertices does not exist in the vertex list
            // Return false

         // Set matrix[alpha][beta] to true
         // Set matrix[beta][alpha] to true
         // This graph is undirected, so edges can exist from both vertices

         // Return true
      }

      bool removeVertex(const T& vertex)
      {
         // If the vertex does not exist in the vertex list
            // Return false

         // Remove to the vertex list
         // Vertex list maintains the index of the vertex in the matrix

         // Remove its corresponding column and row from the matrix
         // This can be done by loops that overwrite the row and column

         // Return true
      }

      bool removeEdge(const T& alpha, const T& beta)
      {
         // If either vertices does not exist in the vertex list
            // Return false

         // Set matrix[alpha][beta] to false
         // Set matrix[beta][alpha] to false
         // This graph is undirected, so edges can exist from both vertices

         // Return true
      }

      bool hasEdge(const V& alpha, const V& beta)
      {
         // If either vertices does not exist in the vertex list
            // Return false

         // Return matrix[alpha][beta]
      }

      int getInDegree(const int& vertex);

      int getOutDegree(const int& vertex);

      size_t size();

      void clear();

   private:
      int indexOf(const T& vertex);

      size_t size;
      size_t maxSize;
      bool** matrix;
      T* vertexList;
};
