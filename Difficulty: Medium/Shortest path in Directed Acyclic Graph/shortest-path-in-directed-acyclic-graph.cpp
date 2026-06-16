class Solution {
  private:
    void topoSort(int node, vector<pair<int,int>> adj[], stack<int>& st, vector<bool>& visited) {
        visited[node] = true;

        for (auto it : adj[node]) {
            int v = it.first;

            if (!visited[v]) {
                topoSort(v, adj, st, visited);
            }
        }

        st.push(node);
    }

  public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        vector<pair<int,int>> adj[V];

        for (int i = 0; i < E; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];

            adj[u].push_back({v, wt});
        }

        stack<int> st;
        vector<bool> visited(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                topoSort(i, adj, st, visited);
            }
        }

        vector<int> dist(V, INT_MAX);
        dist[0] = 0;

        while (!st.empty()) {
            int node = st.top();
            st.pop();

            if (dist[node] != INT_MAX) {
                for (auto it : adj[node]) {
                    int v = it.first;
                    int wt = it.second;

                    if (dist[node] + wt < dist[v]) {
                        dist[v] = dist[node] + wt;
                    }
                }
            }
        }

        for (int i = 0; i < V; i++) {
            if (dist[i] == INT_MAX) {
                dist[i] = -1;
            }
        }

        return dist;
    }
};