# DFS 

### Depth First Search: Algorithm
<ol>
  <li>Define a Stack of size total number of vertices in the graph.</li>
  <li>Select any vertex as starting point for traversal. Visit that vertex and push it
onto the Stack.</li>
  <li>Visit any one of the non-visited adjacent vertices of a vertex that is at the top
of the stack and push it onto the stack.</li>
  <li>Repeat step 3 until there is no new vertex to be visited from the vertex
which is at the top of the stack.</li>
  <li>When there is no new vertex to visit then use backtracking and pop one
vertex from the stack.</li>
  <li>Repeat steps 3, 4, and 5 until the stack becomes Empty.</li>
  <li>When the stack becomes Empty, then produce the final spanning tree by
removing unused edges from the graph</li>
</ol>

### Depth First Search: Graph and Adjacency matrix

Let's consider the following graph to understand DFS traversal. And creat an adjacency matrix from this graph to generate input for the code

![4fbbd266-cebf-4199-b802-df36327f24da](https://github.com/Maya0not/Assignment/assets/168619673/e681043b-46a0-4932-8f77-dc905ca35e0f)

## Output of the Code:
![output](https://github.com/Maya0not/Assignment/assets/168619673/f9e2a975-e1e6-42bc-84c5-e1621547984c)

## Git Bash Screenshot:
![git bash](https://github.com/Maya0not/Assignment/assets/168619673/f77f7c6c-6792-4a07-9abe-4914759a81d0)

