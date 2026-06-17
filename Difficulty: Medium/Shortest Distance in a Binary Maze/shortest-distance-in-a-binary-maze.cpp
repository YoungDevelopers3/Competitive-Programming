class Solution {
  public:
    int shortestPath(vector<vector<int>> &mat, vector<int> &src, vector<int> &dest) {
        // code here
        int n = mat.size();
        int m = mat[0].size();

        int sr = src[0];
        int sc = src[1];
        int dr = dest[0];
        int dc = dest[1];

        if (mat[sr][sc] == 0 || mat[dr][dc] == 0) {
            return -1;
        }

        queue<pair<pair<int,int>, int>> q;
        vector<vector<int>> visited(n, vector<int>(m, 0));

        q.push({{sr, sc}, 0});
        visited[sr][sc] = 1;

        int delRow[4] = {-1, 0, 1, 0};
        int delCol[4] = {0, 1, 0, -1};

        while (!q.empty()) {
            auto it = q.front();
            q.pop();

            int row = it.first.first;
            int col = it.first.second;
            int dist = it.second;

            if (row == dr && col == dc) {
                return dist;
            }

            for (int i = 0; i < 4; i++) {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if (nrow >= 0 && nrow < n &&
                    ncol >= 0 && ncol < m &&
                    visited[nrow][ncol] == 0 &&
                    mat[nrow][ncol] == 1) {

                    visited[nrow][ncol] = 1;
                    q.push({{nrow, ncol}, dist + 1});
                }
            }
        }

        return -1;
    }
};
