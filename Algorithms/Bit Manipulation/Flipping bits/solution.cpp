#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int loop;
    cin >> loop;
    for(int run = 0; run < loop; run++){
        long test;
        cin >> test;
        cout << 4294967296 - test -1 << endl;
    }
    return 0;
}
