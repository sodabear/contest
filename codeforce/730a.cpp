#pragma comment(linker, "/STACK:1024000000,1024000000")
#include <cstdio>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <cstring>
#include <set>
#include <queue>
#include <algorithm>
#include <vector>
#include <map>
#include <cctype>
#include <cmath>
#include <stack>
#define freopenr freopen("in.txt", "r", stdin)
#define freopenw freopen("out.txt", "w", stdout)
using namespace std;
typedef long long LL;
typedef pair<int, int> P;
const int INF = 0x3f3f3f3f;
const double inf = 0x3f3f3f3f3f3f;
const LL LNF = 0x3f3f3f3f3f3f;
const double PI = acos(-1.0);
const double eps = 1e-8;
const int maxn = 1e2 + 100;
const int mod = 1e9 + 7;
const int dr[] = {-1, 0, 1, 0};
const int dc[] = {0, 1, 0, -1};
const char *Hex[] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
int n, m;
const int mon[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int monn[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
inline int Min(int a, int b){ return a < b ? a : b; }
inline int Max(int a, int b){ return a > b ? a : b; }
inline LL Min(LL a, LL b){ return a < b ? a : b; }
inline LL Max(LL a, LL b){ return a > b ? a : b; }
inline int gcd(int a, int b){ return b ? gcd(b, a%b) : a; }
inline int lcm(int a, int b){ return a * b / gcd(a, b); }
inline bool is_in(int r, int c){
    return r >= 0 && r < n && c >= 0 && c < m;
}
struct Node{
    int num, id;
    Node() { }
    Node(int n, int i) : num(n), id(i) { }
    bool operator < (const Node &p) const{
        return num > p.num;
    }
};
Node a[maxn];
char s[maxn];
int mmin;
bool cmp(const Node &lhs, const Node& rhs){
    return lhs.num > rhs.num;
}
vector<string> ans;
multiset<Node> sets, tmp;
multiset<Node> :: iterator it;
 
void print(){
    printf("%d\n", ans.size());
    for(int i = 0; i < ans.size(); ++i)
        cout << ans[i] << endl;
}
int main(){
    while(scanf("%d", &n) == 1){
        sets.clear();  ans.clear();
        for(int i = 0; i < n; ++i){
            scanf("%d", &m);
            sets.insert(Node(m, i));
        }
        for(int i = 0; i < n; ++i) s[i] = '0';
        s[n] = 0;
        while(sets.begin()->num != sets.rbegin()->num){
            int cnt = 2, t[3];
            if(sets.count(*sets.begin()) == 3) ++cnt;
            tmp.clear();it = sets.begin();
            for(int i = 0; i < cnt; ++i){
                Node u = *it;
                sets.erase(it++);
                u.num = Max(0, u.num-1);
                t[i] = u.id;
                s[t[i]] = '1';
                tmp.insert(u);
            }
            ans.push_back(s);
            for(int i = 0; i < cnt; ++i)  s[t[i]] = '0';
            sets.insert(tmp.begin(), tmp.end());
        }
        printf("%d\n", sets.begin()->num);
        print();
    }
    return 0;
}
