/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:P3378 【模板】堆
    Date:2022/07/15
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAXN 1000000+5

int w[MAXN];
int tot;

int top(){
    return w[1];
}

void modify(int x){
    if(x == 1 || w[x] > w[x/2]){
        return ;
    }
    swap(w[x], w[x/2]);
    modify(x/2);
}

void push(int x){
    w[++tot] = x;
    modify(tot);
}

void repair(int x){
    if(x*2 > tot)   return;
    int tar = x*2;
    if(x*2+1 <= tot) tar = w[x*2] > w[x*2+1] ? x*2 : x*2+1;
    if(w[x] < w[tar]){
        swap(w[x], w[tar]);
        repair(tar);
    }
}

void pop(){
    swap(w[1], w[tot--]);
    repair(1);
}

int main(){
    std::ios::sync_with_stdio(false);
    int n,x;
    cin >> n;
    while(n--){
        int op;
        cin >> op;
        if(op == 1){
            cin >> x;
            push(x);
        }
        else if(op == 2){
            cout << top() << endl;
        }
        else{
            pop();
        }
    }
    return 0;
}