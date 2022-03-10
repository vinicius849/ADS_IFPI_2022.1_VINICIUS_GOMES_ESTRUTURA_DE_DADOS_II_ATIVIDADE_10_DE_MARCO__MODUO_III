#include <iostream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    stack <string> letras;

	cout << "Pre ordem" << endl;
    letras.push("b");
    cout << letras.top();
    letras.pop();

    letras.push("d");
    letras.push("a");
    cout << letras.top();
    letras.pop();
    cout << letras.top();
    letras.pop();

	letras.push("f");
    letras.push("c");
    cout << letras.top();
    letras.pop();
    cout << letras.top() << endl;
    letras.pop();

    cout << "In-Ordem" << endl;

    letras.push("a");
    cout << letras.top();
    letras.pop();

    letras.push("d");
    letras.push("b");
    cout << letras.top();
    letras.pop();
    cout << letras.top();
    letras.pop();

    letras.push("c");
    cout << letras.top();
    letras.pop();
    letras.push("f");
    cout << letras.top() << endl;
    letras.pop();

	cout << "Pos-ordem" << endl;

    letras.push("a");
    cout << letras.top();
    letras.pop();

    letras.push("b");
    letras.push("d");
    cout << letras.top();
    letras.pop();
    cout << letras.top();

    letras.push("f");
    letras.push("c");
    cout << letras.top();
    letras.pop();
    cout << letras.top();
    
return 0;
}

typedef struct buscaProfI;

void buscaProfI(Grafo G, int origem, int *ordem_chegada, int *ordem_saida, int tempo) {  // Uso de Grafos em Estrutura de Dados
	int v, w;
	// Pilha implementada em vetor
	int *pilha;
	int topo = 0;
	pilha = malloc(G -> m * sizeof(int));
	// Colocando a origem na pilha
	pilha[topo++] = origem;
	// Enquanto a pilha dos ativos(encontrados mas n�o visitados) n�o estiver vazia
	while(topo > 0) {
		// Remova o mais recente da pilha
		v = pilha[--topo];
		if(ordem_chegada[v] == -1) {   // Se v n�o foi visitado
			ordem_chegada[v] = tempo++;
			pilha[topo++] = v;  //Quiz2: Por que empilhar v aqui?
			// Para cada vizinho de v que ainda n�o foi visitado
		for(w = 0; w < G -> n; w++)
			if(G -> A[v][w] == 1 && ordem_chegada[w] == -1)
				pilha[topo++] = w;  // Empilha o vizinho
		}
		else if(ordem_saida[v] == -1)
			ordem_saida[v] = tempo++;
	}
	free(pilha);
	
	
	// Pergunta da 2� quest�o: Qual � a efici�ncia deste Algoritmo?
	
	/* Ele busca(visita) mais r�pido aqui nesta vez demonstrada acima quando percorremos
	a �rvore em Pr�-Ordem, In-Ordem e P�s-Ordem; classificando o m�todo de forma mais eficiente
	do que tratando-se de Listas Encadeadas por exemplo ou buscando solu��es sem recurs�o usando 
	tamb�m Pilha. Otimizando o Algoritmo gastando menos tempo de processamento. */
	
	void preOrder() {  // C�digo Pr�-Ordem
		stack <No*> pilha;
		No *p = raiz;
		if(p != 0) {
			pilha.push(p);
			while(!pilha.empty()) {
				p = pilha.top());
				cout << pilha.top()) -> nome << endl;
				pilha.pop();
				if(p -> right(!= 0) {
				pilha.push(p -> right);
			if(p -> left(!= 0) {
				pilha.push(p -> left);
			}
				}
			}
		}
	}
	
	void inOrder() {    // C�digo Em-Ordem
		stack <No*> pilha;
		No *p = raiz;
		while(p != 0) {
			pilha.push(p);
			*p = NULL;
			if(p -> right(!= 0)) {
				pilha.pop();
				if(p -> left(!= 0)
			}
					if(p -> left(!= 0) {
						pilha.pop();
					cout << "Pilha visitada" << endl;
					}
		}
	}
	
	void posOrder() {    // C�digo P�s-Ordem
		stack <No*> pilha;
		No *p = raiz;
		 letras.push("a");
    cout << letras.top();
    letras.pop();

    letras.push("b");
    letras.push("d");
    cout << letras.top();
    letras.pop();
    cout << letras.top();
	}
		
	return 0;
}
