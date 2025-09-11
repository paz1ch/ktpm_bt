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
 

const double tol = 1e-9;

bool double_equal(double a, double b) {
    return fabs(a - b) < tol;
}

int solveQuartic(double a, double b, double c, double x[]) {
    if (a == 0 && b == 0 && c == 0) {
        return -1;
    }
    if (a == 0 && b == 0) {
        return 0;
    }
    if (a == 0) {
        double y = -c / b;
        if (y < 0) return 0;
        x[0] = sqrt(y);
        x[1] = -sqrt(y);
        return 2;
    }
    double delta = b * b - 4 * a * c;
    if (delta < 0) return 0;
    double y1 = (-b + sqrt(delta)) / (2 * a);
    double y2 = (-b - sqrt(delta)) / (2 * a);
    int count = 0;
    if (y1 >= 0) {
        x[count++] = sqrt(y1);
        x[count++] = -sqrt(y1);
    }
    if (y2 >= 0 && y2 != y1) {
        x[count++] = sqrt(y2);
        x[count++] = -sqrt(y2);
    }
    return count;
}

struct TestCase {
    double a, b, c;
    int expected_n;
    vector<double> expected_solutions;
};

vector<TestCase> test_cases = {
    {0, 0, 0, -1, {}},
    {0, 0, 1, 0, {}},
    {0, 2, -4, 2, {sqrt(2), -sqrt(2)}},
    {0, 2, 4, 0, {}},
    {1, -5, 6, 4, {sqrt(3), -sqrt(3), sqrt(2), -sqrt(2)}},
    {1, 0, 0, 2, {0, 0}},
    {1, 0, -4, 2, {2, -2}},
    {1, 0, 4, 0, {}},
    {1, 3, 2, 0, {}},
    {1, -3, 2, 4, {1, -1, sqrt(2), -sqrt(2)}},
    {1, -4, 4, 2, {sqrt(2), -sqrt(2)}},
    {1, -5, 0, 4, {0, 0, sqrt(5), -sqrt(5)}}
};



signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // freopen("input.inp","r",stdin);
    // freopen("output.out","w",stdout);
    int passed = 0;
    for (int i = 0; i < test_cases.size(); i++) {
    TestCase tc = test_cases[i];
    double x[4];
    int n = solveQuartic(tc.a, tc.b, tc.c, x);
    if (n != tc.expected_n) {
        cout << "Test case " << i+1 << " failed: expected " << tc.expected_n << " solutions, got " << n << endl;
        continue;
    }
    if (n == -1) {
        cout << "Test case " << i+1 << " passed." << endl;
        passed++;
        continue;
    }
    if (n == 0) {
        cout << "Test case " << i+1 << " passed." << endl;
        passed++;
        continue;
    }
    vector<double> actual_solutions(x, x + n);
    vector<double> expected_solutions = tc.expected_solutions;
    sort(actual_solutions.begin(), actual_solutions.end());
    sort(expected_solutions.begin(), expected_solutions.end());
    bool match = true;
    for (int j = 0; j < n; j++) {
        if (!double_equal(actual_solutions[j], expected_solutions[j])) {
            match = false;
            cout << "Test case " << i+1 << " failed: solution " << j << " expected " << expected_solutions[j] << ", got " << actual_solutions[j] << endl;
            break;
        }
    }
    if (match) {
        cout << "Test case " << i+1 << " passed." << endl;
        passed++;
    }
    }
    cout << "Passed " << passed << " out of " << test_cases.size() << " test cases." << endl;
    return 0;
}