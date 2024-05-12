#include <iostream>
#include <stack>

using namespace std;

const int MAX = 7;

int graph[MAX][MAX] = {
    {0, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 1, 0, 0, 1, 1, 1},
    {1, 0, 0, 0, 1, 0, 0},
    {1, 1, 1, 0, 0, 1, 0},
    {0, 0, 1, 0, 1, 0, 1},
    {0, 0, 1, 0, 0, 1, 0}
};

bool v[MAX] = {false};

void dfs(int num, int start) {
    stack<int> stack;
    stack.push(start);
    v[start] = true;

    cout << "Depth-First Traversal: ";

    while (!stack.empty()) {
        int current = stack.top();
        stack.pop();
        cout << current << " ";

        for (int i = 0; i < num; i++) {
            if (graph[current][i] && !v[i]) {
                stack.push(i);
                v[i] = true;
            }
        }
    }

    cout << endl;
}

int main() {
    int start;
    cout << "Enter the starting node (index from 0 to " << MAX-1<< "): ";
    cin >> start;

    if (start < 0 || start >= MAX) {
        cout << "Starting node is invalid!\n";
        return 1;
    }

    dfs(MAX, start);

    return 0;
}
