#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define int64 long long
int64 countOne(int64 x){
    if(x<=0) return 0;
    else if(x==1) return x;
    else{
        int count = 0;
        int64 i;
        for(i=31;i>=0;i--){
            if(x>=(1LL << i)) break;
        }
        return countOne(x-(1LL<<i)) + ((1LL<<i)*i/2LL)+ (x-(1LL << i) + 1LL);
    }
}
void solve(){
    int64 a,b;
    cin>>a>>b;
    if(0<=a && 0<=b){
        cout<<countOne(b)-countOne(a-1)<<endl;
    }
    else if(a<0 && b<0){
        b++;
        cout<<((32LL*(-a)-countOne(-a-1))-((32LL*(-b))-countOne(-b-1)))<<endl;
    }
    else{cout<<countOne(b)+((32LL*(-a))-countOne(-a-1))<<endl;}
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
} 