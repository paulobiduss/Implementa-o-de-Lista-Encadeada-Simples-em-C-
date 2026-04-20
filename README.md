# Implementação de Lista Encadeada Simples em C++

Este repositório contém um **script educacional** desenvolvido em C++ que demonstra a construção e manipulação de uma **Lista Encadeada Simples** (Singly Linked List) utilizando alocação dinâmica de memória (`new` e `delete`).

## A Estrutura Base (`struct dados`)
A arquitetura central do código gira em torno de um nó independente, composto por:
* **`valor`**: A informação principal, um número inteiro.
* **`proximo`**: Um ponteiro que guarda o endereço de memória do próximo elemento, conectando a lista.

## Funcionalidades do Sistema
O programa opera em um laço de repetição oferecendo um **menu interativo** no terminal. As operações suportadas são:

* **1. Inserir**: Instancia um novo nó e o adiciona no **final da lista** atualizando os ponteiros adequadamente.
* **2. Exibir**: Percorre a lista de ponta a ponta informando a **posição** e o **valor** atual.
* **3. Remover do Início**: Exclui o **primeiro elemento** existente e promove o segundo elemento ao início da fila.
* **4. Remover por Posição**: Permite a exclusão cirúrgica de um nó em uma **posição específica** informada pelo usuário, refazendo a ligação dos nós vizinhos para manter a integridade da lista.

## Como Compilar e Executar
Para rodar este algoritmo, é necessário um compilador C++ (como o GCC/G++).

No seu terminal, compile o arquivo com:
`g++ Exercicios_Nó.cpp -o lista_encadeada`

Em seguida, execute:
`./lista_encadeada`
