# Ciências da Computação


Repositório contendo os códigos desenvolvidos durante a matéria de introdução a ciência da computação 2. Aqui estão presentes códigos de algoritmos de busca, altorigmos de ordenação e trabalhos desenvolvidos.

Na materia, foi apresentado algoritmos de ordenação como Insertion, Bubble, Selection, Merge, Heap, Shell, Quick, Counting e Radix. Em sequência temos uma pequena descrição de cada método de ordenação.

# Métodos de Ordenação

## Insetion - O(n²)

**Descrição:** Ordena uma lista construindo uma sequência ordenada, um elemento por vez, selecionando o próximo elemento e inserindo-o na posição correta dentro da sequência ordenada.

**Adequado para:** Pequenos conjuntos de dados ou listas que já estão parcialmente ordenadas, pois o desempenho pode ser muito eficiente nesses casos.

## **Bubble (bolha) - O(n²)**

**Descrição:** Compara pares adjacentes de elementos e os troca se estiverem na ordem errada. Esse processo é repetido até que a lista esteja ordenada.

**Adequado para:** Situações educativas, onde o objetivo é ensinar conceitos básicos de ordenação, mas raramente usado em produção devido à sua ineficiência.

## **Selection (seleção) - O(n²)**

**Descrição:** Repetidamente encontra o menor (ou maior) elemento da lista e o coloca na posição correta, movendo o elemento correspondente para a frente da lista ordenada.

**Adequado para:** Listas pequenas ou casos em que o custo da troca é alto e o número de trocas deve ser minimizado.

## **Merge - O(nlog(n))**

**Descrição:** Divide a lista em duas sublistas, ordena cada sublista recursivamente, e depois intercala (merge) as sublistas ordenadas para formar a lista final ordenada.

**Adequado para:** Listas grandes e situações onde a estabilidade da ordenação (manter a ordem relativa dos elementos iguais) é importante. O Merge Sort também é eficiente em listas que não cabem completamente na memória, pois pode ser implementado para funcionar em discos (externamente).

## **Heap Sort - O(nlog(n))**

**Descrição:** Constrói uma estrutura de heap a partir dos elementos da lista, e então remove o maior (ou menor) elemento repetidamente para construir a lista ordenada. O heap é ajustado após cada remoção para manter a propriedade de heap. Utiliza a estrutura de Heap (normalmente, uma heap binária), que é uma árvore completa onde cada pai é maior (ou menor) do que seus filhos.

**Adequado para:** Situações onde o uso de memória precisa ser minimizado e quando o desempenho consistente é mais importante do que a estabilidade da ordenação. Não é estável, ou seja, pode alterar a ordem relativa de elementos iguais.

## **Shell Sort - O(nlog(n))**

**Descrição:** O Shell Sort é uma generalização do Insertion Sort que melhora sua eficiência ao comparar e mover elementos que estão distantes entre si. Ele divide a lista em sublistas, definidas por um "gap" (intervalo), e ordena essas sublistas usando o Insertion Sort. O gap é reduzido gradualmente até que a lista seja completamente ordenada com um gap de 1, o que corresponde a um Insertion Sort final.

**Adequado para:** Listas de tamanho médio e casos em que se deseja uma versão mais eficiente do Insertion Sort. É uma boa escolha quando há necessidade de um algoritmo de ordenação simples, mas mais eficiente que Insertion ou Bubble Sort.

## **Quick Sort - O(nlog(n))**

**Descrição:** O Quick Sort é um dos algoritmos de ordenação mais eficientes e amplamente utilizados devido à sua alta performance na prática. Ele segue o paradigma "dividir para conquistar", escolhendo um "pivô" da lista, reorganizando os elementos de forma que os menores que o pivô fiquem à esquerda e os maiores à direita. Depois, aplica o mesmo procedimento recursivamente às duas sublistas (esquerda e direita do pivô), até que toda a lista esteja ordenada.
**Adequado para:** Grandes volumes de dados onde é necessário um algoritmo rápido e eficiente. É amplamente utilizado em sistemas de grande escala, como bancos de dados, processamento de arquivos, e em diversas bibliotecas padrão de linguagens de programação.

## **Counting Sort - O(n + k)**

**Descrição:** O Counting Sort é um algoritmo de ordenação não comparativo que é eficiente quando os valores a serem ordenados estão em um intervalo limitado. Ele conta a ocorrência de cada elemento em um array auxiliar e, em seguida, utiliza essas contagens para posicionar os elementos na ordem correta. O Counting Sort é particularmente útil quando os números são inteiros e distribuídos em um intervalo conhecido.

**Adequado para:** Situações em que se precisa ordenar uma lista de inteiros dentro de um intervalo limitado. É especialmente vantajoso para listas grandes com valores em um intervalo conhecido e pequeno, como notas de estudantes ou números de identificação.

## **Radix Sort - O(nk)**

**Descrição:** O Radix Sort é um algoritmo de ordenação não comparativo que classifica os números por dígitos individuais, começando do dígito menos significativo até o mais significativo (ou vice-versa). Ele utiliza uma ordenação estável, como o **Counting Sort** ou **Bucket Sort**, como sub-rotina para ordenar os números com base nos dígitos em cada posição.

**Adequado para:** O Radix Sort é especialmente eficaz quando se está ordenando números inteiros com um número limitado de dígitos, como números de identificação ou grandes listas de números com valores pequenos.

# Métodos de Busca

## Busca Linear

A busca linear percorre a lista elemento por elemento até encontrar o valor desejado ou determinar que ele não está presente. Esse método pode ser utilizado em listas ordenadas e não ordenadas, tornando-o mais versátil. No entanto, em listas grandes, seu desempenho pode ser lento, pois pode ser necessário verificar todos os elementos antes de encontrar o resultado.

## Busca Binária 

A busca binária é mais eficiente, quando comparada a busca linear, pois reduz o número de elementos a serem verificados a cada iteração. O algoritmo funciona dividindo a lista ordenada ao meio e comparando o valor procurado com o elemento central. Se o valor for menor, a busca continua na metade inferior da lista; se for maior, a busca ocorre na metade superior. Esse processo se repete até encontrar o elemento ou concluir que ele não está presente. A principal limitação desse método é que ele só pode ser aplicado a listas previamente ordenadas.
