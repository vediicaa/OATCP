Function validArrangement:
              1) This function takes a vector of pairs as input, where each pair represents a directed edge in a graph. It uses two unordered maps: g to store the 
              adjacency list representation of the graph, and deg to store the in-degree and out-degree of each vertex.
              2) It populates the g and deg maps based on the input pairs. For each pair (u, v), it adds v to the adjacency list of u in g and updates the 
              in-degree and out-degree counts in deg.
              3) It defines a lambda function getsrc to find the source vertex in the graph. The source vertex is the one with out-degree minus in-degree equal to 1 
              (it starts the path). It then calls this lambda function to get the source vertex.
              4) It uses a stack (st) and a deque (path) to perform a depth-first search (DFS) traversal of the graph, starting from the source vertex. It traverses 
              edges based on the adjacency list in g and updates the path accordingly.
              5) Finally, it constructs the valid arrangement by creating pairs of consecutive vertices in the path and returns this arrangement.

Main Function: 
              1) It reads the input n representing the number of pairs.
              2) It reads n pairs of integers into the pairs vector.
              3) It calls the validArrangement function to compute the valid arrangement based on the input pairs.
              4) It prints the valid arrangement pairs to the standard output.
