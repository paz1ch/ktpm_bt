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


int findMax(int num1, int num2, int num3){
    int max = 0;
    if ((num1 > num2) && (num1 > num3))
        max = num1;
    if ((num2 > num1) && (num2 > num3))
        max = num2;
    if ((num3 > num1) && (num3 > num2))
        max = num3;
    return max;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.inp","r",stdin);
    int test[][3] = {{3, 2, 1}, {1, 3, 2}, {1, 2, 3}, {2, 2, 1}};
    int kq[] = {3, 3, 3, 2};
    for (int i = 0; i < 4; i++){
    int ans = findMax(test[i][0], test[i][1], test[i][2]);
    cout << "findMax(" << test[i][0] << ", " << test[i][1] << ", " << test[i][2] << ") = " << ans;
    if (ans == kq[i])
        cout << " dung" << endl;
    else
        cout << " sai (kq dung la " << kq[i] << ")" << endl;
    }
    return 0;
}