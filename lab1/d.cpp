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
 

ll f3(int x){
    if (log(x * x * cos(x)) < 3 * x)
        return 2 * x;
    else
        return 2 * x;
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.inp","r",stdin);
    // freopen("output.out","w",stdout);
    int test[] = {1};
    int kq[] = {2};
    for (int i = 0; i < 1; i++){
    int dapan = f3(test[i]);
    cout << "f3(" << test[i] << ") = " << dapan;
    if (dapan == kq[i])
        cout << " dung" << endl;
    else
        cout << " sai (kq dung la " << kq[i] << ")" << endl;
    }
    return 0;
}