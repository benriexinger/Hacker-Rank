#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int c;
    cin >> c;
    for(int i = 0; i < c; i++){
        int lower, upper;
        cin >> lower;
        cin >> upper;
        double up, low;  
        cout << (floor(sqrt(upper)) -ceil(sqrt(lower)))+1 << endl;
    }
    return 0;
}
