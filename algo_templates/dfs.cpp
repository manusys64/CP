#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 5;

//basic dfs structure
void dfs (int vertex, vector<int> graph[], vector<bool> visited) {
	visited[vertex] = true;
	cout << vertex << endl;
	for (int child : graph[vertex]) {
		if (visited[child] == true) continue;
		else {
			dfs(child, graph, visited);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// Numuber of nodes in the given graph
	int n;
	cin >> n;

	// Declaring adjacency list && visited array
	vector<int> graph[n + 1];
	vector<bool> visited(n + 1, false);

	// Takig input of graph
	for (int i = 0; i < n - 1; ++i) {
		int node_1, node_2;
		cin >> node_1 >> node_2;
		graph[node_1].emplace_back(node_2);
		graph[node_2].emplace_back(node_1);
	}

	// starting dfs from node 1
	dfs(1, graph, visited);

	return 0;
}
