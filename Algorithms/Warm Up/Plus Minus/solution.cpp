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
    int n;
    cin >> n;
    vector<int> arr(n);
    double pos = 0.0;
    double neg = 0.0;
    double zero = 0.0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i] < 0){
           neg++;
       }
       if(arr[arr_i] > 0){
          pos++;
       }
       if(arr[arr_i] == 0){
          zero++;
       }
    }
    cout << pos/n << endl;
    cout << neg/n << endl;
    cout << zero/n << endl;
    return 0;
}
