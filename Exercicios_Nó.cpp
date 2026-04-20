#include <iostream>

using namespace std;

typedef struct dados {
  int valor;
  dados *proximo;
} Dados;

Dados *inicio_da_lista = nullptr;
Dados *fim_lista = nullptr;

void inserir_dados(int n) {
  Dados *novo = new Dados;
  novo->valor = n;
  novo->proximo = nullptr;

  if (inicio_da_lista == nullptr) {
    inicio_da_lista = novo;
    fim_lista = novo;
  } else {
    Dados *atual = inicio_da_lista;
    while (atual->proximo != nullptr) {
      atual = atual->proximo;
    }
    atual->proximo = novo;
    fim_lista = novo;
  }
}

void exibir_dados() {
  Dados *atual = inicio_da_lista;
  int posicao = 1;
  while (atual != nullptr) {
    cout << posicao << ". " << atual->valor << endl;
    atual = atual->proximo;
    posicao++;
  }
}

void remover_dados() {
  Dados *atual = inicio_da_lista;
  Dados *proximos = nullptr;
  int posicao = 1;

  if (inicio_da_lista == nullptr) {
    cout << "lista vazia";
  } else {
    proximos = atual->proximo;
    delete atual;
    inicio_da_lista = proximos;
    atual = proximos;
  }
  exibir_dados();
}

void remover_posicao(int n) {
  Dados *atual = inicio_da_lista;
  int posicao = 1;
  Dados *proximo;

  while (atual != nullptr) {
    if (posicao == n - 1 && n != 1) {
      proximo = atual;
      atual = atual->proximo;
      posicao++;
    } else if (posicao == n && n != 1) {
      proximo->proximo = atual->proximo;
      delete atual;
    } else if (n == 1) {
      remover_dados();
    } else {
      atual = atual->proximo;
      posicao++;
    }
  }
}

int main() {
  int e;
  int parada = 1;
  while (parada != 0) {
    cout << "1 para inserir, 2 para exibir, 3 para remover, 4 para remover "
            "posicao, para sair precionar 0: ";
    cin >> parada;
    if (parada == 1) {
      cout << "numero ";
      cin >> e;
      inserir_dados(e);
    } else if (parada == 2) {
      exibir_dados();
    } else if (parada == 3) {
      remover_dados();
    } else if (parada == 4) {
      int n;
      cout << "Posição desejada:";
      cin >> n;
      remover_posicao(n);
      exibir_dados();
    }
  }
}
