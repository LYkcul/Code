/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:P1786 帮贡排序
    Date:2022/07/14
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node{
    string name;  //姓名
    string work;  //以前职位
    string nw;  //现在职位
    ll bg; //帮贡
    ll dj; //等级
    ll id; //顺序
} a[115];

int n;

bool cmp1(Node a, Node b){
    if(a.bg == b.bg)    return a.id < b.id;
    else    return a.bg > b.bg;
}

int check(string s){
    if(s == "BangZhu") return 1;
    else if(s == "FuBangZhu") return 2;
    else if(s == "HuFa") return 3;
    else if(s == "ZhangLao") return 4;
    else if(s == "TangZhu") return 5;
    else if(s == "JingYing") return 6;
    else if(s == "BangZhong") return 7;
    return 0;
}

bool cmp2(Node a, Node b){
    if(check(a.nw) == check(b.nw)){
        if(a.dj == b.dj)    return a.id < b.id;
        else    return a.dj > b.dj;
    }
    else{
        return check(a.nw) < check(b.nw);
    }    
}

int main(){
    std::ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i].name >> a[i].work >> a[i].bg >> a[i].dj;
        a[i].id = i;
    }
    sort(a+4, a+n+1, cmp1);
    for(int i = 1; i <= n; ++i){
        if(i == 1) a[i].nw = "BangZhu";
        else if(i == 2 || i == 3)    a[i].nw = "FuBangZhu";
        else if(i == 4 || i == 5)    a[i].nw = "HuFa";
        else if(i >= 6 && i <= 9)   a[i].nw = "ZhangLao";
        else if(i >= 10 && i <= 16)  a[i].nw = "TangZhu";
        else if(i >= 17 && i <= 41) a[i].nw = "JingYing";
        else    a[i].nw = "BangZhong";
    }
    sort(a+4, a+n+1, cmp2);
    for(int i = 1; i <= n; ++i){
        cout << a[i].name << " " << a[i].nw << " " << a[i].dj << endl;
    }
    return 0;
}