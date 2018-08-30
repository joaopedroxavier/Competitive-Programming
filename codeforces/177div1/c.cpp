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

const int N = 1e6+5;
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;

ll ans[N];
int n;

int main(){
  //freopen("in", "r", stdin);
  //freopen("out", "w", stdout);

  scanf("%d", &n);
  for(int i=0; i<=n; i++) ans[i] = i;

  int p = 0;
  while((1<<p) <= n) {
    for(int i=0; i<=n; i+=(1<<(p+1))) {
      for(int j=i; j<i+(1<<p); j++) if(j+(1<<p)<=n) swap(ans[j], ans[j+(1<<p)]);
    }
    p++;
  }

  ll sum = 0;
  for(ll i=0; i<=n; i++) sum += (i ^ ans[i]);

  printf("%lld\n", sum);
  for(int i=0; i<=n; i++) printf("%lld ", ans[i]);
  printf("\n");


  return 0;
}

