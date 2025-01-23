// Link para acesso do problema resolvido -> https://cses.fi/problemset/task/1068
#include <bits/stdc++>
using namespace std;

int main(){
    int n; cin >> n;
    while (n != 1){
        if (n % 2 == 0){ // Par
            n = n / 2;
            cout << n << " ";
        }
        else if (n % 2 != 0){ // Impar
            n = n * 3 + 1;
            cout << n << " ";
        }
    }
    cout << 1 << "\n";
    return 0;
}