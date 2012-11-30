#include <iostream>
#include <queue>
#include <fstream>

using namespace std;

const int SIZE = 80;

int grid[SIZE][SIZE];
int costs[SIZE][SIZE];
int visited[SIZE][SIZE] = {};

struct node {
	node (int x, int y, int cost) 
		: x(x), y(y), cost(cost) {
	}
	int x, y;
	int cost;

	bool operator==(const node &rhs) const {
		return cost == rhs.cost;
	}
	bool operator<(const node &rhs) const {
		return cost > rhs.cost;
	}
	bool operator>(const node &rhs) const {
		return cost < rhs.cost;
	}
};

int shpath()
{
	priority_queue<node> q;
	q.push(node {0, 0, grid[0][0]});

	while (q.size() > 0) {
		node n = q.top();
		q.pop();
		if (costs[n.x][n.y] == -1 || costs[n.x][n.y] > n.cost) {
			costs[n.x][n.y] = n.cost;
		}
		if (n.x+1 < SIZE && !visited[n.x+1][n.y]) {
			visited[n.x+1][n.y] = 1;
			q.push(node {n.x+1, n.y, n.cost + grid[n.x+1][n.y]});
		}
		if (n.y+1 < SIZE && !visited[n.x][n.y+1]) {
			visited[n.x][n.y+1] = 1;
			q.push(node {n.x, n.y+1, n.cost + grid[n.x][n.y+1]});
		}
	}
	return costs[SIZE-1][SIZE-1];
}

int main(int, char **)
{
	ifstream in {"matrix.txt"};
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			in >> grid[i][j];
			in.get();
			costs[i][j] = -1;
		}
	}

	cout << shpath() << endl;
	return 0;
}
