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

struct student {
    string name;
    int korean, english, math;
    double avg;
};

int N, K, E, M; string s;

int main() {
    fastio;
    cin >> N;
    cout.precision(1);
    cout << fixed;
    fri(N) {
        cin >> s >> K >> E >> M;
        cout << s << " ";
        cout << (double)(K+E+M)/3 << " ";
        if(K >= 90 || E >= 90 || M >= 90) cout << "GREAT ";
        if(K < 70 || E < 70 || M < 70) cout << "BAD" << endl;
    }
    return 0;
}