def dfs(graph, node, visited, result):
    visited[node] = True
    result.append(node)

    for neighbor in graph[node]:
        if not visited[neighbor]:
            dfs(graph, neighbor, visited, result)

def dfsTraversal(V, adj):
    visited = [False] * V
    result = []

    for node in range(V):
        if not visited[node]:
            dfs(adj, node, visited, result)

    return result

# Example 1
V1 = 5
adj1 = [[2, 3, 1], [0], [0, 4], [0], [2]]
result1 = dfsTraversal(V1, adj1)
print("DFS (Example 1):", result1)

# Example 2
V2 = 4
adj2 = [[1, 3], [2, 0], [1], [0]]
result2 = dfsTraversal(V2, adj2)
print("DFS (Example 2):", result2)
