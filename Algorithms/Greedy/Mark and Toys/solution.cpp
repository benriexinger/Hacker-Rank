#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    
    int answer = 0;
    int temp = 0;
    sort(prices.begin(), prices.end());
    
    for(int i = 0; (i < n) && temp < k; i++){
        if(temp + prices[i] > k){
            break;
        }
        temp+=prices[i];
        answer++;
    }
    
    cout << answer << endl;
    return 0;
}
