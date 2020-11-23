# Biblioteca de funções para gerenciamento de cadeias de caracteres em C++

### Como utilizar

São disponibilizadas 12 funções, para criação, remoção, cópia, comparação de cadeias dentre elas estão.

* <code>getStringBufferSize</code> **Obtém o tamanho do buffer.**

* <code>getStringSize</code> **Retorna o tamanho da cadeia especificado.**

* <code>copyTo</code> **Copia o conteúdo de uma cadeia para outra.**

* <code>input</code> **Da entrada para o buffer.**

* <code>copyFromBuffer</code> **Copia o conteúdo do buffer para uma cadeia.**

* <code>createString</code> **Cria uma cadeia.**

* <code> createAndInputOnString </code> **Cria uma cadeia e da entrada para a mesma.**

* <code>compStrs</code> **Compara o conteúdo de duas cadeias.**

* <code>delLastString</code> **Remove a última cadeia criada.**

* <code>delThisString</code> **Remove uma cadeia especifica.**

* <code>delStrings</code> **Remove todas as cadeias criadas até o momento.**

* <code>show</code> **Mostra o conteúdo requisitado.**

### Parâmetros

* <code>getStringBufferSize();</code>

* <code>getStringSize(1,2,3);</code>
  1. Cadeia
  2. Caractere de Pulo
  3. (**Apenas se o parâmetro 1 for uma constante**) Valor bool para retornar o tamanho real sem o caractere nulo('\0').

* <code>copyTo(1,2);</code>
  1. Cadeia raiz
  2. Cadeia de destino

* <code>input();</code>

* <code>copyFromBuffer(1);</code>
  1. Cadeia que se deseja atribuir o valor do buffer

* <code>createString(1,2);</code>
  1. Ponteiro caractere vazio
  2. (**Opcional**) Conteúdo que irá ser atribuído

* <code>createAndInputOnString(1);</code>
  1. Ponteiro caractere vazio

* <code>compStrs(1,2);</code>
  1. Cadeia 1
  2. Cadeia 2

* <code>delLastString();</code>

* <code>delThisString(1);</code>
  1. Cadeia que se deseja remover

* <code>delStrings();</code>

* <code>show(1);</code>
  1. Cadeia de caracteres ou uma constante

**Ajude-me a melhorar o meu código, estou apenas começando e adoraria aprender mais.**
