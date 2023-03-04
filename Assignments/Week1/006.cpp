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
    int score;
};

int C; string s; struct student student[5]; double S;

int main() {
    fastio;
    fri(5) {
        cin >> s >> C; student[i] = {s, C}; S += C;
    }
    S /= 5;
    fri(5) {
        if(student[i].score <= S) cout << student[i].name << endl;
    }
    return 0;
}