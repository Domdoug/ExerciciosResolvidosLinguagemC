
# Resolução de exercícios - linguagem C.

## **Seção 7 (parte2) **


**01. Seção07_exercicio01**

>Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

**02. Seção07_exercicio02**

>Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.

**03. Seção07_exercicio03**

>Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.


**04. Seção07_exercicio04**

>Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.

**05. Seção07_exercicio05**

>Leia uma matriz 5 x 5. Leia, também, um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de "não encontrado". 

**06. Seção07_exercicio06**

>Leia duas matrizes 4x4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.

**07. Seção07_exercicio07**

>Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:</p>
$A[i][j] = 2i + 7j - 2$ se $i<j$;</p>
$A[i][j] = 3i^2 - 1$ se $i=j$;</p>
$A[i][j] = 4i^3 - 5j^2 + 1$ se $i>j$.

**08. Seção07_exercicio08**

>Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.

**09. Seção07_exercicio09**

>Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal.

**10. Seção07_exercicio10**

>Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na
diagonal principal.

**11. Seção07_exercicio11**

>Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na
diagonal secundária.

**12. Seção07_exercicio12**

>Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.

**13. Seção07_exercicio13**

>Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz gerada numa matriz triangular inferior, ou seja, tribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz original e a matriz transformada.

**14. Seção07_exercicio14**

>Faça um programa paara gerar automaticamente números entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada.

**15. Seção07_exercicio15**

>Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha, referentes a 5 alunos. Leia, também, um vetor de 10 posições contendo o gabarito de respostas que podem ser $a, b, c$ ou $d$. Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a pontuação correspondente a cada aluno.

**16. Seção07_exercicio16**

>Faça um programa para corrigir uma prova com 10 questões de múltipla escolha: $a, b, c$ ou $d$, em uma turma com 3 alunos (Fiz com 8 alunos). Cada questão vale 1 ponto. Leia o gabarito e, para cada aluno, leia sua matrícula(número inteiro) e suas respostas. Calcule e escreva:
Para cada aluno, escreva a sua matrícula, suas respostas e sua nota. O percentual de aprovação, assumindo média 7.0.


**17. Seção07_exercicio17**

>Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida,escreva o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota foi na prova 3. Em caso de empate das piores notas de um aluno, o critério de desempate é arbitrário, mas o aluno deve ser contabilizado apenas uma vez.

**18. Seção07_exercicio18**

>Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3
números inteiros. Em seguida, gere um *array* unidimensional pela soma
dos números de cada coluna da matriz e mostrar na tela esse *array*.
Por exemplo, a matriz:
$$
\begin{array}{cc} 
5 & -8 & 10\\
1 & 2 & 15\\
25 & 10 & 7\\ 
\end{array}
$$ 
>Vai gerar um vetor, onde cada posição é a soma das colunas da matriz.
A primeira posição será 5 + 1 + 25, a assim por diante:

>$31$ $4$ $32$


**19. Seção07_exercicio19**



**20. Seção07_exercicio20**


**21. Seção07_exercicio21**


**22. Seção07_exercicio22**

>Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C= A * B.

**23. Seção07_exercicio23**

>Faça um programa que leia uma matriz A de tamanho 3x3 e calcule $B = A^2$.

**24. Seção07_exercicio24**

>Na matriz de 20x20 abaixo, quatro números ao longo de uma linha diagonal foram marcadas em negrito. O produto desses númreos é 26*63*78*14 = 1788696.

08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08
49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00
81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65
52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91
22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80
24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50
32 98 81 28 64 23 67 10 **26** 38 40 67 59 54 70 66 18 38 64 70
67 26 20 68 02 62 12 20 95 **63** 94 39 63 08 40 91 66 49 94 21
24 55 58 05 66 73 99 26 97 17 **78** 78 96 83 14 88 34 89 63 72
21 36 23 09 75 00 76 44 20 45 35 **14** 00 61 33 97 34 31 33 95
78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92
16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57
86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58
19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40
04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66
88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69
04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36
20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16
20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54
01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48

>Qual é o maior produto de quatro números adjacentes em qualquer direção (cima, baixo, esquerda, direita ou na diagonal) na matriz de 20x20?

**25. Seção07_exercicio25**

>Faça um programa para determinar a próxima jogada em um jogo da velha.Assumir que o tabuleiro é representado por uma matriz de 3 x 3, onde cada posição representa uma das casas do tabuleiro. A matriz pode conter os seguintes valores -1, 0, 1 representando, respectivamente, uma casa contendo uma peça mínha (-1), uma casa vazia do tabuleiro (0) e uma casa contendo uma peça do meu oponente (1).
Exemplo:

$$
\left|\begin{array}{cc} 
-1 & | & 1 & | & 1\\
-1 & | & -1 & | & 0\\
0 & | & 1 & | & 0\\ 
\end{array}\right|
$$ 



### Contato


José Douglas Nascimento <kbd>Return</kbd>  domdoug2012@gmail.com




