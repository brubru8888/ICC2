# Métodos de Ordenação

## Insertion (inserção) - O(n²)

**Descrição:** Ordena uma lista construindo uma sequência ordenada, um elemento por vez, selecionando o próximo elemento e inserindo-o na posição correta dentro da sequência ordenada.

**Complexidade:** O pior caso é O(n²), mas pode ser O(n) se a lista já estiver quase ordenada.

**Adequado para:** Pequenos conjuntos de dados ou listas que já estão parcialmente ordenadas, pois o desempenho pode ser muito eficiente nesses casos.

*O Insertion é um método super adaptável! Ele faz poucas trocas e comparações. Ele se desempenha melhor se o problema for mais fácil (nas três situações possíveis).*

## Bubble (bolha) - O(n²)

**Descrição:** Compara pares adjacentes de elementos e os troca se estiverem na ordem errada. Esse processo é repetido até que a lista esteja ordenada.

**Complexidade:** O pior caso é O(n²), e é menos eficiente que o Insertion Sort em listas quase ordenadas.

**Adequado para:** Situações educativas, onde o objetivo é ensinar conceitos básicos de ordenação, mas raramente usado em produção devido à sua ineficiência.

*Adaptável em casos de 'nearly sorted' e não adaptável em casos de 'partially sorted'.*

## Selection (seleção) - O(n²)

**Descrição:** Repetidamente encontra o menor (ou maior) elemento da lista e o coloca na posição correta, movendo o elemento correspondente para a frente da lista ordenada.

**Complexidade:** O pior caso é O(n²), assim como o Bubble Sort, mas realiza menos trocas, tornando-o um pouco mais eficiente.

**Adequado para:** Listas pequenas ou casos em que o custo da troca é alto e o número de trocas deve ser minimizado.

*Colocando o Selection com um vetor quase ordenado (nearly sorted), ordenado (sorted) e aleatório (random), vemos que termina quase ao mesmo tempo.*

## Merge

**Descrição:** Divide a lista em duas sublistas, ordena cada sublista recursivamente, e depois intercala (merge) as sublistas ordenadas para formar a lista final ordenada.

**Complexidade:** Tem uma complexidade O(n log n) em todos os casos, tornando-o muito eficiente para grandes volumes de dados.

**Adequado para:** Listas grandes e situações onde a estabilidade da ordenação (manter a ordem relativa dos elementos iguais) é importante. O Merge Sort também é eficiente em listas que não cabem completamente na memória, pois pode ser implementado para funcionar em discos (externamente).

*Merge Sort: Ideal para listas grandes, onde a eficiência e a estabilidade são cruciais. Também é adequado para ordenar listas que não podem ser totalmente carregadas na memória, devido à sua capacidade de ser implementado como um algoritmo de ordenação externa.*

## Notação de Complexidade

- O(1) = constante
- O(log n) = logarítmico (não aplicável para ordenação)
- O(n) = linear
- O(n log n) = linearítmico ou log-linear
- O(n²) = quadrática
- O(n³) = cúbica
- O(n^p) = polinomial
- O(2^n) = exponencial
- O(n!) = fatorial (problemas intratáveis)

## Tipos de Ordenação

- **Quase ordenado:** A posição final dos elementos está muito próxima do correto; mais "fáceis".
- **Parcialmente ordenado:** Uma parte já está organizada, outra não.
