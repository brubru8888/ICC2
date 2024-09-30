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

## **Heap Sort - O(nlog(n))**

**Descrição:** Constrói uma estrutura de heap a partir dos elementos da lista, e então remove o maior (ou menor) elemento repetidamente para construir a lista ordenada. O heap é ajustado após cada remoção para manter a propriedade de heap. Utiliza a estrutura de Heap (normalmente, uma heap binária), que é uma árvore completa onde cada pai é maior (ou menor) do que seus filhos.

**Complexidade:** O pior caso, melhor caso e caso médio são todos O(nlogn), tornando-o eficiente e previsível em termos de desempenho. Diferente do Merge Sort, que usa memória extra, o Heap Sort é um algoritmo de ordenação in-place.

**Adequado para:** Situações onde o uso de memória precisa ser minimizado e quando o desempenho consistente é mais importante do que a estabilidade da ordenação. Não é estável, ou seja, pode alterar a ordem relativa de elementos iguais.

**Complexidade de espaço:** O(1) (in-place)

## **Shell Sort - O(nlog(n))**

**Descrição:** O Shell Sort é uma generalização do Insertion Sort que melhora sua eficiência ao comparar e mover elementos que estão distantes entre si. Ele divide a lista em sublistas, definidas por um "gap" (intervalo), e ordena essas sublistas usando o Insertion Sort. O gap é reduzido gradualmente até que a lista seja completamente ordenada com um gap de 1, o que corresponde a um Insertion Sort final.

**Complexidade:** A complexidade do Shell Sort depende da sequência de gaps utilizada. No melhor caso, com uma boa sequência, a complexidade pode ser **O(nlogn)**. O pior caso, dependendo da implementação, pode variar entre **O(n^2)** e **O(n^(3/2))**.

**Adequado para:** Listas de tamanho médio e casos em que se deseja uma versão mais eficiente do Insertion Sort. É uma boa escolha quando há necessidade de um algoritmo de ordenação simples, mas mais eficiente que Insertion ou Bubble Sort.

**Complexidade de espaço:** **O(1)** (in-place), pois, como os outros algoritmos baseados em trocas diretas, o Shell Sort não requer memória extra significativa além de algumas variáveis temporárias.

**Vantagens:** O Shell Sort pode ser mais eficiente que o Insertion Sort em listas grandes ou desordenadas, especialmente se for utilizada uma boa sequência de gaps. Além disso, é relativamente simples de implementar e não exige memória adicional significativa.

**Desvantagens:** O desempenho do Shell Sort não é garantido para ser O(nlogn) em todas as implementações, e ele não é estável, ou seja, pode alterar a ordem relativa de elementos iguais.

**Complexidade de espaço:** O(1) (in-place)

## **Quick Sort - O(nlog(n))**

**Descrição:** O Quick Sort é um dos algoritmos de ordenação mais eficientes e amplamente utilizados devido à sua alta performance na prática. Ele segue o paradigma "dividir para conquistar", escolhendo um "pivô" da lista, reorganizando os elementos de forma que os menores que o pivô fiquem à esquerda e os maiores à direita. Depois, aplica o mesmo procedimento recursivamente às duas sublistas (esquerda e direita do pivô), até que toda a lista esteja ordenada.

**Funcionamento:**

1. Escolhe-se um elemento como pivô.
2. Particiona-se a lista em duas partes: uma contendo os elementos menores que o pivô e outra com os maiores.
3. Ordena-se as duas sublistas recursivamente.
4. O processo é repetido até que a lista esteja completamente ordenada.

**Complexidade:** No **melhor caso**, quando o pivô sempre divide o array em duas partes aproximadamente iguais, a complexidade é **O(nlogn)**. No **pior caso**, que ocorre quando o pivô escolhido é o maior ou o menor elemento da lista em cada etapa (como em listas já ordenadas ou quase ordenadas), a complexidade se degrada para **O(n^2)**. No entanto, a média de desempenho é **O(n logn)**, o que o torna muito eficiente na prática.

**Adequado para:** Grandes volumes de dados onde é necessário um algoritmo rápido e eficiente. É amplamente utilizado em sistemas de grande escala, como bancos de dados, processamento de arquivos, e em diversas bibliotecas padrão de linguagens de programação.

**Complexidade de espaço:** **O(logn)** em média, devido à pilha de chamadas recursivas. No entanto, pode ser **O(n)** no pior caso, se não forem tomadas medidas para minimizar a profundidade da recursão.

**Vantagens:**

- O Quick Sort geralmente é mais rápido que outros algoritmos de ordenação como Merge Sort e Heap Sort, principalmente para grandes conjuntos de dados.
- É um algoritmo in-place, ou seja, não requer memória adicional significativa além das variáveis temporárias.
- Tem uma boa eficiência em muitos casos práticos, com desempenho próximo de **O(nlogn)** na média.

**Desvantagens:**

- O pior caso é **O(n^2)**, embora isso possa ser evitado usando estratégias de escolha de pivô, como o pivô aleatório.
- Não é um algoritmo estável, o que significa que pode alterar a ordem relativa de elementos iguais na lista.
- Sua performance depende fortemente da escolha do pivô, o que pode ser um desafio em algumas implementações.

## **Counting Sort - O(n + k)**

**Descrição:** O Counting Sort é um algoritmo de ordenação não comparativo que é eficiente quando os valores a serem ordenados estão em um intervalo limitado. Ele conta a ocorrência de cada elemento em um array auxiliar e, em seguida, utiliza essas contagens para posicionar os elementos na ordem correta. O Counting Sort é particularmente útil quando os números são inteiros e distribuídos em um intervalo conhecido.

**Complexidade:** O Counting Sort tem uma complexidade de **O(n + k)**, onde **n** é o número de elementos a serem ordenados e **k** é o valor máximo presente na lista. Isso o torna eficiente em cenários onde **k** não é muito maior que **n**.

**Adequado para:** Situações em que se precisa ordenar uma lista de inteiros dentro de um intervalo limitado. É especialmente vantajoso para listas grandes com valores em um intervalo conhecido e pequeno, como notas de estudantes ou números de identificação.

**Complexidade de espaço:** **O(n + k)**, já que precisa de um array auxiliar para armazenar as contagens dos elementos e outro array para a lista ordenada.

**Vantagens:** O Counting Sort é estável, ou seja, preserva a ordem relativa dos elementos iguais. Além disso, sua eficiência em relação à complexidade de tempo pode ser melhor do que algoritmos de comparação como Merge Sort e Quick Sort, especialmente em situações onde o valor máximo **k** não é muito grande.

**Desvantagens:** O Counting Sort só é eficiente quando **k** não é significativamente maior que **n**. Além disso, ele não é um algoritmo in-place, exigindo espaço extra para armazenar contagens e o array final.

**Complexidade de espaço:** **O(n + k)**

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

|  | Quick Sort | Insertion | Heap |
| --- | --- | --- | --- |
| Pior caso | O(n²) | O(n²) | O(n log(n)) |
| Caso médio | O(n log(n)) | O(n²) | O(n log(n)) |
| Melhor caso | O(n log(n)) | O(n) | O(n log(n)) |