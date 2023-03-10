#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    std::ios::sync_with_stdio(false);
    cin >> n;
    long long x=0;
    for(int a = 1; a <= 3; ++a){
        for(int b = 1; b <= 3; ++b){
            for(int c = 1; c <= 3; ++c){
                for(int d = 1; d <= 3; ++d){
                    for(int e = 1; e <= 3; ++e){
                        for(int f = 1; f <= 3; ++f){
                            for(int j = 1; j <= 3; ++j){
                                for(int h = 1; h <= 3; ++h){
                                    for(int i = 1; i <= 3; ++i){
                                        for(int g = 1; g <= 3; ++g){
                                            if(a+b+c+d+e+f+j+h+i+g == n){
                                                x++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << x << endl;
    for(int a = 1; a <= 3; ++a){
        for(int b = 1; b <= 3; ++b){
            for(int c = 1; c <= 3; ++c){
                for(int d = 1; d <= 3; ++d){
                    for(int e = 1; e <= 3; ++e){
                        for(int f = 1; f <= 3; ++f){
                            for(int j = 1; j <= 3; ++j){
                                for(int h = 1; h <= 3; ++h){
                                    for(int i = 1; i <= 3; ++i){
                                        for(int g = 1; g <= 3; ++g){
                                            if(a+b+c+d+e+f+j+h+i+g == n){
                                                printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,j,h,i,g);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }    
    return 0;
}