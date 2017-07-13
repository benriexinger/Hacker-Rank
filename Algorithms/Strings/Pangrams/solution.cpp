#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num[26];
    for(int i = 0; i < 26; i++){
        num[i] = 0;
    }
    string s;
    getline(cin,s);
    if(s.length() < 26){
        cout << "not pangram" << endl;
        return 0;
    }
    for (int i = 0; i < s.length(); i++){
        if(s[i] == ' '){continue;}
        s[i] = tolower(s[i]);
        int temp = ((int)(s[i])) - 97;
        num[temp] = 1;
    }
    for(int i = 0; i < 26; i++){
        if(num[i] == 0){
           cout <<"not pangram" << endl;
           return 0;
        } 
    }
    cout << "pangram" << endl;
    
return 0;
}
