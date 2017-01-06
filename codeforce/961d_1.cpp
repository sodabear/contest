#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define pb push_back
using namespace std;
const int N = 1e6+10;
int parent[N];
int input[N];
int ans[N];
vector<int> pos[N];
vector<int> val[N];
set<int> roots;
 
int root(int x){
  if (parent[x] == x) return x;
  return parent[x] = root(parent[x]);
}

int merge(int x, int y){
  x = root(x);
  y = root(y);
  if(x!=y)
    parent[y]=x;
  return 0;
}

int main(){
    int n, m;
    //cin >>n >> m;
    scanf("%d%d", &n, &m);
    //construct the parent array
    for(int i = 1; i <= n; i++){
        scanf("%d", &input[i]);
        parent[i] = i;
    }

   //construct the unions
   for(int i = 1; i <= m; i++){
     int u =0;
     int v =0;
     scanf("%d%d", &u, &v);
     merge(u,v);
   }

   //
   for(int i = 1; i <= n; i++){
      int x = root(parent[i]); // find parnt of this element
      roots.insert(x);
      pos[x].pb(i); // list of index for each root;
      val[x].pb(input[i]); // list of value for each root;
   }

  for (set<int>::iterator it=roots.begin(); it!=roots.end(); ++it){		
    sort(val[*it].begin(), val[*it].end(), greater<int>());
    for(int j=0; j<pos[*it].size(); j++){//
       ans[pos[*it][j]] = val[*it][j];
    }
  }
	for(int i=1; i<=n; i++)printf("%d%c", ans[i], i==n ? '\n':' ');
  return 0;
}
