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

int n, a[N], b[N], ord[N];
int na[N], nb[N];
int dp[N];

int main(){
  //freopen("in", "r", stdin);
  //freopen("out", "w", stdout);

  scanf("%d", &n);

  for(int i=0; i<n; i++) {
    scanf("%d %d", &a[i], &b[i]);
    ord[i] = i;
  }

  sort(ord, ord+n, [](int i, int j) { return a[i] < a[j]; });

  for(int i=0; i<n; i++) {
    na[i] = a[ord[i]];
    nb[i] = b[ord[i]];
  }

  dp[0] = 0;
  for(int i=1; i<n; i++) {
    int l = lower_bound(na, na+i, na[i]-nb[i]) - na;
    int dst = i-l;
    dp[i] = dst + (l == 0 ? 0 : dp[l-1]);
  }

  int ans = n;

  for(int i=0; i<n; i++) {
    int term = (i == 0 ? 0 : dp[i-1]);
    term += (n-i);
    ans = min(ans, term);
  }
  ans = min(ans, dp[n-1]);

  printf("%d\n", ans);

	return 0;
}

