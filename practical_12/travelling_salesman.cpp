#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dfs(vector<vector<int>>& cost, vector<bool>& vis, int last, int cnt) {
    int n = cost.size();
    if (cnt == n)
        return cost[last][0];

    int minCost = (int)1e9;

    for (int city = 1; city < n; city++) {
        if (!vis[city]) {
            vis[city] = true;
            minCost = min(minCost, cost[last][city] +
                                   dfs(cost, vis, city, cnt + 1));
            vis[city] = false;
        }
    }
    return minCost;
}

int tsp(vector<vector<int>>& cost) {
    int n = cost.size();
    vector<bool> vis(n, false);
    vis[0] = true;

    return dfs(cost, vis, 0, 1);
}

int main() {
    vector<vector<int>> cost = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int res = tsp(cost);
    cout << "Minimum cost:"<<res<<endl;
    cout<<"En Roll:92460118608";
}
