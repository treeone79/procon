#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

struct node {
    node *next[26] = {};
    int val = 0;
};

node *root = new node();

void add(string x){
    node *curr = root;
    for(int i = 0; i < x.size(); i++){
        int j = x[i] - 'a';
        if (!curr->next[j]) curr->next[j] = new node();
        curr = curr-> next[j];
    }
    curr->val++;
}

void remove(string x){
    node *curr = root;
    for(int i = 0; i < x.size(); i++){
        int j = x[i] - 'a';
        curr = curr-> next[j];
    }
    curr->val--;
}

int query(string x){
    node *curr = root;
    for(int i = 0; i < x.size(); i++){
        int j = x[i] - 'a';
        if (!curr->next[j]) return 0;
        curr = curr-> next[j];
    }
    return curr->val;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    for(int it = 1; it <= tc; it++){
        int n;
        cin >> n;
        rep(i, 0, n){
            string s;
            cin >> s;
            
        }
        cout << "Case #" << it << ": ";
    }
}