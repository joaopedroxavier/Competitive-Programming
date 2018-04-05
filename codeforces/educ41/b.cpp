#include <bits/stdc++.h>

using namespace std;

#define topper top //XDDDDDDD

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

int n, k;
int a[N], t[N], pa[N], pb[N];
int sum;

int main(){
  //freopen("in", "r", stdin);
  //freopen("out", "w", stdout);

  scanf("%d %d", &n, &k);

  for(int i=1; i<=n; i++) {
    scanf("%d", &a[i]);
  }

  for(int i=1; i<=n; i++) {
    scanf("%d", &t[i]);
    pa[i] = pa[i-1] + (1-t[i])*a[i];
    sum += t[i]*a[i];
  }

  int ans = 0;
  for(int i=1; i<=n-k+1; i++) {
    ans = max(ans, sum + pa[i+k-1] - pa[i-1]);
  }

  printf("%d\n", ans);

	return 0;
}

