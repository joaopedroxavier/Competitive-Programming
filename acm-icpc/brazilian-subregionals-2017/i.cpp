//
// 내가 나인 게 싫은 날
// 영영 사라지고 싶은 날
// 문을 하나 만들자 너의 맘 속에다
// 그 문을 열고 들어가면
// 이 곳이 기다릴 거야
// 믿어도 괜찮아 널 위로해줄 magic shop
//
#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define st first
#define nd second

typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;

const ld EPS = 1e-9;
const ld PI = acos(-1);

const int N = 1e5+5;
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;

int n, c, vis[N], wt[N], e[N];
map<ii, int> cost;
vector<int> adj[N];

int dfs(int u) {
  vis[u] = 1;
  int sum = 0;
  for(int v : adj[u]) if(!vis[v]) {
    sum += dfs(v) + (wt[v]+c-1)/c * 2 * cost[mp(u,v)];
    wt[u] += wt[v];
  }
  wt[u] += e[u];
  return sum;
}

int main(){
  //freopen("in", "r", stdin);
  //freopen("out", "w", stdout);

  scanf("%d %d", &n, &c);
  for(int i=1; i<=n; i++) scanf("%d", &e[i]);
  for(int i=1; i<n; i++) {
    int u, v, w; scanf("%d %d %d", &u, &v, &w);
    adj[u].push_back(v);
    adj[v].push_back(u);
    cost[mp(u,v)] = cost[mp(v,u)] = w;
  }
  printf("%d\n", dfs(1));
	return 0;
}

