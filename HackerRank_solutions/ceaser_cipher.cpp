#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    k %= 26;
    for (int i = 0;i < n; i++) {
        int c = s[i];
        if (c >= 'a' && c <= 'z') { 
            c += k;
            if (c > 'z') { 
               c = 96 + (c % 122); 
            }
        } else if(c >= 'A' && c <= 'Z') { 
            c += k;
            if(c > 'Z') { 
                c = 64 + (c % 90); 
            }
        }
        cout << (char)c;
    }
    cout << endl;
    return 0;
}
