#include<bits/stdc++.h>
using namespace std;

void bfs (int source, vector<int> graph[], vector<bool>& visited) {
	queue<int> q;
	q.push(source);
	visited[source] = true;

	while(!q.empty()) {
		int current_vertex = q.front();
		q.pop();
		cout << current_vertex << endl;

		for (int child : graph[current_vertex]) {
			if (!visited[child]) {
				q.push(child);
				visited[child] = true;
			}
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

	// Taking input of graph
	for (int i = 0; i < n - 1; ++i) {
		int node_1, node_2;
		cin >> node_1 >> node_2;
		graph[node_1].emplace_back(node_2);
		graph[node_2].emplace_back(node_1);
	}

	bfs (1, graph, visited);

	return 0;
}
