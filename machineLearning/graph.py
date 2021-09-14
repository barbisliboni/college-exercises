from collections import defaultdict

# Criar class chamada Grafo 
class Grafo:
    """
     Método Construtor da classe Grafo
     Quando realiza a instância da classe, esse método será o primeiro a ser executado
    """
    def _init_(self):
        # Cria um dicionário para armazenar o grafo
        self.graph = defaultdict(list)

    # Função para adicionar os nós
    def addEdge(self,u,v):
        # u é a origem e v é o destino
        self.graph[u].append(v)

    # Função responsável por exibir o grafo do tipo busca em largura
    def BFS(self, s):
 
        # Marca todos os vértices como não visitados 
        visited = [False] * (max(self.graph) + 1)
 
        # Cria uma fila para o BFS
        queue = []
 
        # Marque o nó de origem como visitado e coloque-o na fila
        queue.append(s)
        visited[s] = True

        while queue:
 
            # Retira um vértice da file e imprime
            s = queue.pop(0)
            print (s, end = " ")

            """
            Obtem todos os vértices adjacentes do
            vértice não enfileirado. Se um adjacente
            não foi visitado, então ele é marcado como
            visitado e é enfilerado para ser imprimido
            """
            for i in self.graph[s]:
                if visited[i] == False:
                    queue.append(i)
                    visited[i] = True
        g = Grafo()
        g.addEdge(0, 1)
        g.addEdge(0, 2)
        g.addEdge(1, 2)
        g.addEdge(2, 0)
        g.addEdge(2, 3)
        g.addEdge(3, 3)

        print("Testing graph")
        g.DFS(2)
       
