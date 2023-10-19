import java.util.ArrayList;
import java.util.List;

class Graph {
    private int V;
    private List<Integer>[] adj;

    public Graph(int V) {
        this.V = V;
        adj = new ArrayList[V];
        for (int i = 0; i < V; i++) {
            adj[i] = new ArrayList<>();
        }
    }

    public void addEdge(int v, int w) {
        adj[v].add(w);
        adj[w].add(v);
    }

    public void DFSUtil(int v, boolean[] visited) {
        visited[v] = true;
        System.out.print(v + " ");

        for (Integer neighbor : adj[v]) {
            if (!visited[neighbor]) {
                DFSUtil(neighbor, visited);
            }
        }
    }

    public void DFSG() {
        boolean[] visited = new boolean[V];
        DFSUtil(0, visited); // Start DFS from vertex 0
    }
}

public class DFS {
    public static void main(String[] args) {
        int V = 5; // Number of vertices
        int[][] adj = { { 2, 3, 1 }, { 0 }, { 0, 4 }, { 0 }, { 2 } };

        Graph graph = new Graph(V);

        for (int v = 0; v < V; v++) {
            for (int w : adj[v]) {
                graph.addEdge(v, w);
            }
        }

        System.out.print("DFS Traversal starting from vertex 0: ");
        graph.DFSG();
    }
}
