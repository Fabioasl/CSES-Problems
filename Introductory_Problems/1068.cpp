// Link para acesso do problema resolvido -> https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while (n != 1){
        cout << n << " ";
        if (n % 2 == 0){ 
            n = n / 2;
        }
        else if (n % 2 != 0){ 
            n = n * 3 + 1;
        }
    }
    cout << 1 << "\n";
    return 0;
}