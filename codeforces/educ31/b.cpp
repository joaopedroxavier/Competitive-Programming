#include <bits/stdc++.h>

using namespace std;

#define topper top //XDDDDDDD

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " <<  x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n, x;
int a[N];

int main(){
  scanf("%d %d", &n, &x);

  ll sum = 0;
  for(int i=0; i<n; i++) scanf("%d", &a[i]), sum += a[i];

  printf("%s\n", sum + n - 1 == x ? "YES" : "NO"); 

	return 0;
}

