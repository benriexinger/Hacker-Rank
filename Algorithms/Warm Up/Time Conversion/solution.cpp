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
 int h,m,s;
    char c[2];
    scanf("%d:%d:%d%s",&h,&m,&s,c);
    if(!strcmp(c,"PM") && h != 12)h+=12;
    if(!strcmp(c,"AM") && h == 12)h = 0;
    printf("%02d:%02d:%02d\n",h,m,s);
    return 0;
}
