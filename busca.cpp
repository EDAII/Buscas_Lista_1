#include <bits/stdc++.h>

using namespace std;

/*
Brian Lui
Lucas Machado
*/

int main(){

  while(true){
    cout << "Digite o numero de posiçoes do vetor em que ocorrera a busca." << endl;
    int size;
    cin >> size;

    vector <int> array;

    // Gera vetor randomico
    for (int i = 0; i < size ; i++){
      int valor = rand() % 10 + 1;
      array.push_back(valor);
    }
    cout << "Digite o numero que deseja buscar"<< endl;
    int sentinela;
    cin >> sentinela;
    //insere o sentinela no final do vector
    // que é igual ao numero buscado
    array.push_back(sentinela);

    int count = 0;
    for(int i=0; i < size; i++){
      count++;
      if(array[i]==sentinela)
        break;
    }

    if(count == size)
      cout << "Não foi encontrado" << endl << endl;
    else
      cout << "Encontrado" << endl << endl;

    string saida;
    cout << "Caso queira buscar outro numero digito S"<< endl;
    cout << "Ou digite N para sair"<< endl;
    cin >> saida;
    cout << endl;
    if (saida == "N" || saida == "n") break;
  }


  return 0;
}
