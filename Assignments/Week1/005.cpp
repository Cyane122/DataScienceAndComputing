#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fri(n) for(int i = 0; i < n; i++)
#define frj(n) for(int j = 0; j < n; j++)
#define frk(n) for(int k = 0; k < n; k++)
#define wh(n) while(n--)
#define vi vector<int>
#define vd vector<double>
#define sortV(v, amp) sort(v.begin(), v.end(), amp)
#define cinV(v, type) type p; cin >> p; v.push_back(p)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vpii vector<pair<int, int>>

using namespace std;

struct time {
    int h;
    int m;
    int s;

    time operator- (time t) {
        int H = h, M = m, S = s;
        S -= t.s;
        if (S < 0) {
            S += 60;
            M--;
        }
        M -= t.m;
        if (M < 0) {
            M += 60;
            H--;
        }
        H -= t.h;
        return {H, M, S};
    }
};

struct time t[2]; int H, M, S;

int main() {
    fastio;
    fri(2) {
        cin >> H >> M >> S; t[i] = {H, M, S};
    }
    struct time k = t[1] - t[0];
    cout << k.h << " " << k.m << " " << k.s;
    return 0;
}