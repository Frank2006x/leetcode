class Solution {
public:
    vector<pair<int, int>> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    void dfs(vector<vector<int>>& img, int x, int y, int color, int m, int n,int rose) {
        img[x][y] = rose;
        for (auto [dx, dy] : dir) {
            int ddx = x + dx;
            int ddy = y + dy;
            if (ddx >= 0 && ddy >= 0 && ddx < m && ddy < n && img[ddx][ddy] == color) {
                dfs(img, ddx, ddy, color, m, n, rose);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int m = image.size();
        int n = image[0].size();
        if(image[sr][sc]==color)return image;
        dfs(image, sr, sc, image[sr][sc], m, n, color);
        return image;
    }
};