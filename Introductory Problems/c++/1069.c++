// Link para acesso do problema resolvido -> https://cses.fi/problemset/task/1069
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string sequencia; cin >> sequencia;
    int cont = 0;
    int tam = sequencia.size();
    vector<int> repeticoes;
    for (int i = 0; i < tam; i++){
        if (sequencia[i] == sequencia[i+1]) cont++;
        else{
            repeticoes.push_back(cont);
            cont = 0;
        }
    }
    int tam2 = repeticoes.size();
    int maior = repeticoes[0];
    for (int i = 0; i < tam2 ; i++){
        if (repeticoes[i] > maior){
            maior  = repeticoes[i];
        }
    }
    cout << maior + 1  << "\n";
    return 0;
