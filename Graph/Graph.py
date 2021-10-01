"""
Undirected Graph Representation using a matrix and their traversals (BFS, DFS)
-------------------------------------------------------------------
"""

class UndirectedGraph : 
    def __init__(self, vertices) -> None : 
        self.vertices = vertices
        self.graph = [[0 for _ in range(vertices)] for _ in range(vertices)] 
    

    #   function to add an edge into the graph
    def addEdge(self, u, v) -> None : 
        self.graph[u][v] = 1
        self.graph[v][u] = 1
    

    #   function check if an edge exists between two edges
    def edgeExists(self, u, v) -> bool : 
        return self.graph[u][v] == 1 and self.graph[v][u] == 1
    

    #   function to remove an edge from the graph
    def removeEdge(self, u, v) -> None : 
        if self.edgeExists(u, v) : 
            self.graph[u][v] = 0
            self.graph[v][u] = 0
    

    #   function to get the bfs traversal of the graph
    def bfsTraversal(self, source) -> None : 
        visited = [False] * self.vertices
        visited[source] = True
        queue = list()
        queue.append(source)

        while queue : 
            node = queue.pop(0)
            print(node, end = " ")

            for i in range(self.vertices) : 
                if self.graph[node][i] == 1 and visited[i] is False : 
                    queue.append(i)
                    visited[i] = True
    

    #   function to get the depth first traversal of the graph
    def dfsTraversal(self, source, visited) -> None : 
        visited[source] = True
        print(source, end = " ")

        for i in range(self.vertices) : 
            if self.graph[source][i] == 1 and visited[i] is False : 
                self.dfsTraversal(i, visited)
    


    #   function to print the graph
    def printGraph(self) -> None : 
        for row in self.graph : 
            print(row)


def main() : 
    #   enter the number of vertices and edges
    vertices, edges = map(int, input().split())

    graph = UndirectedGraph(vertices)
    
    for _ in range(edges) : 
        u, v = map(int, input().split())
        graph.addEdge(u, v)
    

    
    graph.bfsTraversal(1)
    print()
    visited = [False] * vertices
    graph.dfsTraversal(0, visited)



if __name__ == '__main__' : 
    main()
