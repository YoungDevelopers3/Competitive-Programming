class Solution {
  public:
    vector<int> safeNodes(int V, vector<vector<int>>& edges) {
        // Code here
      vector<vector<int>> adj_rev(V);
        vector<int> outdegree(V, 0);

        for(auto it : edges) {
            int u = it[0];
            int v = it[1];

            adj_rev[v].push_back(u);  // reverse edge
            outdegree[u]++;           // original outgoing edge count
        }

        queue<int> q;

        for(int i = 0; i < V; i++) {
            if(outdegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> safe_nodes;

        while(!q.empty()) {
            int node = q.front();
            q.pop();

            safe_nodes.push_back(node);

            for(auto it : adj_rev[node]) {
                outdegree[it]--;

                if(outdegree[it] == 0) {
                    q.push(it);
                }
            }
        }

        sort(safe_nodes.begin(), safe_nodes.end());
        return safe_nodes;
    }
};