#include <bits/stdc++.h>
using namespace std;

struct Result {
    Result() { fill(output1, output1 + 100, -1); }
    int output1[100];
};

struct Result needForSpeed(int N, string input2[], int R, int **routes) {
    vector<pair<int, int>> graph[N];  // Graph: {destination, travel_time}

    // Build graph from input
    for (int i = 0; i < R; i++) {
        int u = routes[i][0], v = routes[i][1], t = routes[i][2];
        graph[u].push_back({v, t});
        graph[v].push_back({u, t});  // Assuming bidirectional roads
    }

    // Min-Heap (priority queue) storing {time, city}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    vector<int> minTime(N, INT_MAX);

    pq.push({0, 0});  // {time, city}
    minTime[0] = 0;

    while (!pq.empty()) {
        auto [time, city] = pq.top();
        pq.pop();

        if (city == N - 1) break;  // Stop early if destination is reached

        for (auto &[next, travelTime] : graph[city]) {
            int newTime = time + travelTime;

            // Apply speed modifiers
            if (input2[city] == "Nitro") newTime /= 2;
            if (input2[city] == "Sand") newTime *= 2;
            if (input2[city] == "Crash") newTime += 5;

            // If we find a shorter path to this city, update and push into queue
            if (newTime < minTime[next]) {
                minTime[next] = newTime;
                pq.push({newTime, next});
            }
        }
    }

    // Store result
    Result res;
    for (int i = 0; i < N; i++)
        res.output1[i] = (minTime[i] == INT_MAX ? -1 : minTime[i]);

    return res;
}

// Driver Code
int main() {
    int N = 5, R = 6;
    string input2[] = {"Normal", "Nitro", "Sand", "Crash", "Normal"};

    int **routes = new int *[R];
    int routeData[][3] = {{0, 1, 5}, {1, 2, 10}, {2, 3, 3}, {3, 4, 1}, {1, 4, 20}, {0, 3, 15}};
    for (int i = 0; i < R; i++) {
        routes[i] = new int[3];
        for (int j = 0; j < 3; j++)
            routes[i][j] = routeData[i][j];
    }

    Result res = needForSpeed(N, input2, R, routes);

    for (int i = 0; i < N; i++)
        cout << res.output1[i] << " ";

    return 0;
}
