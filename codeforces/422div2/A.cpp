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

int fact(int p){
  if(p==0) return 1;
  else return p*fact(p-1);
}

int main(){
	ios_base::sync_with_stdio(false);
  int a, b;
  cin >> a >> b;
  cout << fact(min(a,b)) << endl;
	return 0;
}

