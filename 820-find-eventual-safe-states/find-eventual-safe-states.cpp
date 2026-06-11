class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       int V = graph.size();

        vector<vector<int>> adj_rev(V);

        vector<int> outdegree(V, 0);

        // reverse the graph

        for(int i = 0; i < V; i++) {

            for(auto it : graph[i]) {

                adj_rev[it].push_back(i);

                outdegree[i]++;

            }

        }

        queue<int> q;

        // terminal nodes

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