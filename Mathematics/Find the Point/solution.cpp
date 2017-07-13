#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int slopex, slopey;
        slopex = x2 - x1;
        slopey = y2 - y1;
        cout << slopex + x2 << " " << slopey + y2 << endl;
    }
    return 0;
}
