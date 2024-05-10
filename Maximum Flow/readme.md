Constants and Functions:
               The code defines the maximum number of vertices V in the graph and declares two functions: bfs (Breadth-First Search) and 
               fordFulkerson (Ford-Fulkerson algorithm).

Breadth-First Search (BFS) Function:
              This function performs a BFS on the residual graph rGraph to find a path from source s to sink t. It marks visited vertices,
              uses a queue to explore vertices in BFS order, and updates the parent array to keep track of the path.

Ford-Fulkerson Algorithm:
              This function implements the Ford-Fulkerson algorithm using the residual graph. It repeatedly finds augmenting paths using BFS 
              (bfs function) and updates the residual capacities until no more augmenting paths are found.

Main Function: 
              1) It performs file input/output operations to read the graph from input.txt and write results to output.txt.
              2) Reads the number of nodes, source, sink, and edge weights from the input file.
              3) Initializes the graph and updates it with the edge weights.
              4) Measures the time taken to calculate the maximum flow using Ford-Fulkerson algorithm.
              5) Writes the maximum flow and the time taken to the output file.
              6) Closes the file streams and returns 0.
