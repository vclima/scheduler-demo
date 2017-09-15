# Scheduler em tempo real - uma simulacao

Nesta tarefa, criaremos uma pequena simulação de um scheduler de tempo real. Em
nossa simulação, controlaremos 5 temporizadores específicos, numerados de 0 a 4.
Cada um deles está
vinculado a uma tarefa que é executada periodicamente a cada `N[i]` iterações de
um laço `for`
(onde `i` é o número do temporizador). O
programa deve simular a execução de um determinado número de iterações do
scheduler, e imprimir na tela, a cada linha, os números das tarefas que serão
executadas naquela iteração.

Veja que este programa simula a execução de um scheduler de tempo real, exceto
pela ausência do temporizador com interrupção. Nesta simulação, cada iteração do
programa representa um evento periódico de interrupção.

O programa receberá como entrada uma série de 6 números. Os primeiros 5
representam a periodicidade de cada uma das 5 tarefas. O sexto número é a
quantidade de iterações que devem ser simuladas.

Para cada iteração, o programa deve imprimir na tela o número das tarefas que
serão executadas nessa mesma iteração, seguidos do caractere fim-de-linha `\n`.
Por exemplo, se as tarefas 3, 2 e 0 serão executadas, então o programa deve
imprimir `023\n'. Se nenhuma tarefa será executada, então o programa deve
imprimir um traço seguido de fim-de-liha `-\n'.

Assuma que todos os contadores de tarefas começam num estado inicial nulo.
Assim, uma tarefa com periodicidade 3 deve ser executada pela primeira vez na
terceira iteração.

É permitido ter tarefas com periodicidade 1 (que são executadas em todas as
iterações), mas não é possível ter tarefas com periodicidade 0 ou negativas. Não
há testes com essas entradas inválidas porque o tratamento de entradas inválidas
não é um objetivo deste exercício.

## Exemplos

Entrada | Saida
------- | -----
`1 1 1 1 1 2` | `01234\n01234\n`
`1 1 2 2 1 3` | `014\n01234\n`
`2 2 2 2 3 4` | `-\n0123\n4\n0123\n`

## Instruções adicionais

1. Vá diretamente ao conjunto de testes para verificar como tratar casos
   limítrofes ou mal-definidos.
1. Lembre-se de seguir as [instruções de submissão](docs/instrucoes.md).
1. Se desejar, proponha novos casos de teste.
