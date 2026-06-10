class Solution {
  public:

    bool isCyclicDFS(int node, vector<int>& visited,
                     vector<int>& rec_path,
                     vector<vector<int>>& adj) {
        visited[node] = 1;
        rec_path[node] = 1;

        for (auto v : adj[node]) {
            if (!visited[v]) {
                if (isCyclicDFS(v, visited, rec_path, adj)) {
                    return true;
                }
            }
            else if (rec_path[v]) {
                return true;
            }
        }

        rec_path[node] = 0;
        return false;
    }

    void topoOrder(int node, vector<int>& visited,
                   stack<int>& st,
                   vector<vector<int>>& adj) {
        visited[node] = 1;

        for (auto v : adj[node]) {
            if (!visited[v]) {
                topoOrder(v, visited, st, adj);
            }
        }

        st.push(node);
    }

    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
        vector<vector<int>> adj(n);

        for (auto it : prerequisites) {
            int course = it[0];
            int prereq = it[1];

            adj[prereq].push_back(course);
        }

        vector<int> visited(n, 0);
        vector<int> rec_path(n, 0);
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                if (isCyclicDFS(i, visited, rec_path, adj)) {
                    return {};
                }
            }
        }

        stack<int> st;
        visited.assign(n, 0);

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                topoOrder(i, visited, st, adj);
            }
        }

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};