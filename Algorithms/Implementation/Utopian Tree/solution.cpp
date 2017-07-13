#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        if( n == 0){cout << "1" << endl;}
        else{
            int temp = 1;
            for(int i = 1; i <= n; i++){
                if(i%2 == 0){
                    temp += 1;
                }
                else{
                    temp *= 2;
                }
            }
            cout << temp << endl;
        } 
    }
    return 0;
}
