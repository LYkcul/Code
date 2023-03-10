/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:
    Date:2022/07/
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

string s,t;

int check(char s){
    if(s >= 'a' && s <= 'z'){
        return 1;
    }
    else if(s >= 'A' && s <= 'Z'){
        return 2;
    }
    else{
        return 3;
    }
}

bool f(string x){
    int l=x.length();
    for(int i=0,j=l-1;i<=j;i++,j--){
        if(x[i] != x[j]){
            return 0;
        }
    }
    return 1;
}

int main(){
    getline(cin,t);
    int c=0;
    int l=t.length();
    for(int i=0;i<l;i++){
        if(check(t[i]) == 1){
            s+=t[i];
        }
        else if(check(t[i]) == 2){
            s+=t[i]-'A'+'a';
        }
        else{
            continue;
        }
    }
    //cout << s;
    if(f(s)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}