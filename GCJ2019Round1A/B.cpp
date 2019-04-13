#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc, n, m;
    cin >> tc >> n >> m;
    int d[7] = {3, 4, 5, 7, 11, 13, 17};
    for(int it = 1; it <= tc; it++){
        vector<int> r(7);
        for(int i = 0; i < 7; i++){
            for(int j = 0; j < 18; j++){
                if(j) cout << " ";
                cout << d[i];
            }
            cout << endl;
            for(int j = 0; j < 18; j++){
                int a;
                cin >> a;
                r[i] += a;
                r[i] %= d[i];
            }
        }
        int ans = -1;
        for(int i = 1; i <= m; i++){
            bool f = true;
            for(int j = 0; j < 7; j++){
                if(i % d[j] != r[j]){
                    f = false;
                    break;
                }
            }
            if(f){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
        int ver;
        cin >> ver;
    }
}