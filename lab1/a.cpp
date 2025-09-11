#include <bits/stdc++.h>
#define endl "\n"
#define maxn 100
// #define int long long 
#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long
 
using namespace std;
using ll = long long;   
const long long mod = 1e9+7;
const int dx[8] = {-1,-1,-1,0,0,1,1,1};
const int dy[8] = {-1,0,1,-1,1,-1,0,1};
 
int f1(int x){
    if (x > 10)
        return 2 * x;
    else
        return -x;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  // freopen("input.inp","r",stdin);
  // freopen("output.out","w",stdout);
  int test[] = {9,10,11,-1};
  int ans[] = {-9,-10,22,1};
    for (int i = 0; i < 3; i++){
        int kq = f1(test[i]);
        cout << "f1(" << test[i] << ") = " << kq;
        if (kq == ans[i])
            cout << " dung" << endl;
        else
            cout << " sai (kq dung la " << ans[i] << ")" << endl;
    }
  return 0;
}