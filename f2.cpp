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
 
int f2(int x) {
    if (x < 10)
        return 2 * x;
    else if (x < 2)
        return -x;
    else
        return 2 * x;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  // freopen("input.inp","r",stdin);
  // freopen("output.out","w",stdout);
    int test_cases[] = {5, 15};
    int expected[] = {10, 30};
    for (int i=0; i<2;i++){
        int result = f2(test_cases[i]);
        cout << "f2(" << test_cases[i] << ") = " << result;
        if (result == expected[i])
            cout << " dung" << endl;
        else
            cout << "sai (kq dung la " << expected[i] << ")" << endl;
    }
  return 0;
}