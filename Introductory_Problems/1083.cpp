// Link para acesso do problema resolvido -> https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int tam; cin >> tam;
    vector<int> lista(tam - 1);
    vector<int> lista_copy;
    for (int &x : lista) cin >> x; 
    sort(lista.begin(), lista.end());
    for (int i = 1; i <= tam; i++){
        lista_copy.push_back(i);
    }
    for (int i = 0; i < tam; i++){
        if (lista_copy[i] != lista[i]){
            cout << lista_copy[i];
        break;
        }
            
    }
    return 0;
