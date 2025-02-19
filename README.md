# RandomSumOfNumbers
These codes study the behavior of numbers in graph when we adding random numbers

To better graphs you shall do in your extern code C, because Python is a limited language when we talking about
calculations and that be the graphs generade by it bad.

I will explain the study here in Portuguese and English.

Explicação em português:
Quero perguntar uma coisa a vocês: somar dois números aleatórios aumenta ou diminui a aleatoriedade? Pense um pouco antes de continuar lendo... Já pensou? Ok.

Esses dias me veio essa questão que me intrigou, e após uma pesquisa decidi utilizar a programação para auxiliar e ver o que isso poderia me mostrar, quais os segredos que essa questão tão incomum guardava.

Para começar, devemos definir o que é "Aleatoriedade". Podemos definir aleatoriedade como a quebra de ordem ou imprevisibilidade em um processo. Como segundo passo, é de bom tom que possamos definir o que é um número exato. Um número exato é todo número que é uma consequência de uma causa anterior, como por exemplo:
1 + 2 = 3.
Esse "3" é um número exato, pois sabemos exatamente qual é a sequência de passos que nos leva a ele. Ora, é só somar 1 + 2 = 3 que o resultado sempre vai ser o mesmo, ou seja, ele é um número previsível e reprodutível.

Assim, se definirmos que um número aleatório é o oposto de um número exato, podemos concluir que um número aleatório é um número que não tem uma causa e não é consequência de nenhuma operação, sem nenhuma lógica por trás dele. Isso traz uma característica única a eles, tornando-os impossíveis de manipular ou de reproduzi-los.

Aqui devo fazer uma observação para a continuação da resposta para a nossa pergunta: computadores são máquinas extremamente exatas, e com isso podemos nos questionar: Como eles podem gerar números aleatórios? Exatamente, eles não podem gerar números verdadeiramente aleatórios. Como seguem uma sequência de passos muito bem estabelecida, os seus números gerados são reprodutíveis e, portanto, não são de fato aleatórios.

Então, o que são os números "aleatórios" que os computadores geram? Eles são, na verdade, números pseudoaleatórios, números que foram obtidos a partir de um algoritmo que utiliza fatores externos para chegar neles, como a data, o horário, rotação da Terra, clima, entre outros.

Agora, para continuarmos a resposta da nossa pergunta: somar números aleatórios faz a aleatoriedade aumentar, diminuir ou se manter a mesma? Para isso, primeiramente montei um algoritmo onde tenho N valores e sorteei-os X vezes, com todos tendo a mesma probabilidade de serem sorteados.

O gráfico gerado por esse algoritmo é uma distribuição uniforme, onde todos os valores apareceram, em média, a mesma quantidade de vezes, notando-se claramente uma linha reta na média do gráfico. Isso independe da quantidade de vezes que eu sorteie os números, pois todas as barrinhas vão crescer proporcionalmente na mesma quantidade, mas não exatamente na mesma quantidade – por isso as flutuações.

No próximo algoritmo, eu gerei dois números aleatórios e os somei. O resultado da soma acrescenta +1 à barrinha correspondente. Perceba que, nesse segundo caso, ocorre um determinado problema: se nós apenas somarmos os valores correspondentes no gráfico, é possível que o resultado seja maior do que o nosso maior número N.

Se temos valores de 0 a N, somar dois valores dentro deste escopo pode resultar em N + N = 2N, e não haveria uma barrinha correspondente a esse valor. Então, se faz necessário criar um escopo de resultados possíveis de 0 a 2N, mesmo que os valores sorteados estejam apenas entre 0 e N.

Agora, percebam o curioso formato que o gráfico gerou: um triângulo!

Mas por que um triângulo? Isso acontece pela quantidade de formas possíveis de formar um determinado número.

Por exemplo:

De quantas formas é possível obter uma soma igual a 0? Apenas uma: 0 + 0 = 0.
E o número 1? 0 + 1 ou 1 + 0 → 2 formas.
E o número 2? 2 + 0, 1 + 1 e 0 + 2 → 3 formas.
E assim sucessivamente. Quanto maior o número, maior a quantidade de formas possíveis de formá-lo, tornando-o muito mais provável de ser gerado.

Por exemplo, escolhendo dois números aleatórios entre 0 e 20 e somando-os, o resultado de maior probabilidade é o maior número dentro do alcance, ou seja, 20.

Por mais que os resultados possíveis vão até 40 (o valor máximo neste caso, 20 + 20), ele é tão raro quanto o 0, pois só há uma única forma de resultar em 40 (20 + 20). Para 39, há apenas duas formas: 39 + 0 e 0 + 39. Essa quantidade de somas possíveis é o que dá o formato de triângulo no gráfico.

Agora, se somarmos 3 valores aleatórios, podemos ver uma distribuição Gaussiana. O motivo dela aparecer é por causa do Teorema do Limite Central, que afirma que, independentemente da distribuição de probabilidade de uma variável aleatória, a distribuição da média das amostras de tamanho suficientemente grande tende a se aproximar de uma distribuição normal.

Da mesma forma, o sorteio de números aleatórios sem nenhuma soma obedece à Lei dos Grandes Números, gerando um gráfico plano.

Este teorema explica por que a distribuição se torna menos aleatória quando somamos números aleatórios. E os resultados só se intensificam ainda mais quando somamos 4, 5, 100, 1.000, 1.000.000 números aleatórios.

A curva fica cada vez mais centralizada e a distribuição dos valores, cada vez menos aleatória. Isso faz todo o sentido se pensarmos: qual a probabilidade de somarmos 100 números aleatórios e o resultado ser 0?

Quase nula! Pois, para isso, todos os 100 números sorteados teriam que ser 0 (0 + 0 + 0 + 0 ... + 0 = 0). O nível de aleatoriedade diminui tanto que tende ao determinismo.

É quase certeza que o valor que mais sairá será aproximadamente:
Onde: ( N * Qs ) / 2

N = maior valor dentro do alcance escolhido para sortear os números aleatórios.
Qs = quantidade de somas que se deseja fazer.
Essa equação apenas encontra a metade do maior resultado possível das somas.

Finalizando, deixo também os códigos que utilizei para gerar os gráficos e como os utilizei. Além disso, disponibilizo um código generalizado para quem quiser testar com diferentes quantidades de valores e somas (só se certifique de que seu computador aguenta fazer essas somas kkkkk).

Utilizei Python para fazer a maior parte dos gráficos, mas a primeira lógica para construir o algoritmo eu fiz em C. Deixarei os códigos no meu GitHub para quem quiser acessar.

Quero deixar claro que ainda não sou um Cientista da Computação formado e não me preocupei com um método matemático estritamente correto para provar tudo isso a nível de uma pesquisa científica. Isso tudo é apenas uma grande curiosidade que pude relacionar e aplicar dentro dos meus principais âmbitos de estudo.

Verifique a publicação no Linkedin com algumas imagens: 
https://www.linkedin.com/pulse/um-pequeno-estudo-sobre-soma-de-n%25C3%25BAmeros-aleat%25C3%25B3rios-felix-hrescak-1lnvf

*********************************************************************************************************************************

English explication:

I want to ask you something: does adding two random numbers increase or decrease randomness? Think about it for a moment before continuing to read… Have you thought about it? Okay.

The other day, this question intrigued me, and after some research, I decided to use programming to help me see what insights it could reveal—what secrets this unusual question might hold.

To begin, we need to define our terms. What is "randomness"? We can define randomness as the breaking of order or unpredictability in a process. As a second step, it is useful to define what an exact number is. An exact number is any number that results from a previous cause. For example: 1 + 2 = 3. This "3" is an exact number because we know exactly what steps lead to it. If we simply add 1 + 2, the result will always be 3, meaning it is predictable and reproducible.

Thus, if we define a random number as the opposite of an exact number, we can conclude that a random number is one without a cause and not a consequence of any operation, with no underlying logic. This gives them a unique characteristic: they are impossible to manipulate or reproduce.

At this point, I must make an observation before continuing with our answer: computers are extremely precise machines. This raises a question: How can they generate random numbers? The truth is, they can’t generate truly random numbers. Since they follow a well-defined sequence of steps, the numbers they produce are reproducible and therefore not truly random. So what are the "random" numbers that computers generate? They are actually pseudo-random numbers—numbers obtained through an algorithm that uses external factors such as date, time, Earth's rotation, weather, and other variables.

Now, to continue answering our question: does adding random numbers make randomness increase, decrease, or remain the same? To explore this, I first created an algorithm with N values, randomly drawing them X times, with each value having the same probability of being chosen. The graph generated by this algorithm is a uniform distribution, where all values appeared roughly the same number of times on average, resulting in a straight line in the graph’s mean. This holds true regardless of how many times I draw the numbers since all bars grow proportionally at the same rate—though not exactly the same, which explains the fluctuations.

In the next algorithm, I generated two random numbers and summed them, adding +1 to the corresponding bar in the histogram. Notice that in this case, a specific issue arises: if we simply add the corresponding values in the graph, it is possible for the result to exceed our maximum number N. Since our values range from 0 to N, adding two numbers within this range could result in N + N = 2N, which would have no corresponding bar in the histogram. Thus, we need to create a result scope ranging from 0 to 2N, even though the drawn numbers are only between 0 and N.

Observe the curious shape the graph forms: a triangle! But why a triangle? This happens because of the number of ways a given sum can be formed. For example, how many ways can the sum of two numbers equal 0? Only one: 0 + 0 = 0. And for the number 1? 0 + 1 or 1 + 0—two ways. For the number 2? 2 + 0, 1 + 1, and 0 + 2—three ways, and so on. The larger the number, the greater the number of possible ways to form it, making it much more likely to appear.

For example, if we randomly choose two numbers between 0 and 20 and sum them, the most probable result will be the highest number within that range, in this case, 20. Even though the possible results go up to 40 (the maximum value in this case: 20 + 20), it is as rare as 0, since there is only one way to obtain 40: 20 + 20. For 39, there are only two ways: 39 + 0 and 0 + 39. The number of possible sums is what gives the graph its triangular shape.

Now, if we sum three random values, we obtain a Gaussian distribution. This occurs due to the Central Limit Theorem, which states that regardless of the probability distribution of a random variable, the distribution of sample means of sufficiently large size tends to approximate a Gaussian (normal) distribution—just as drawing random numbers without summing them follows the Law of Large Numbers, producing a flat graph.

This theorem explains why randomness decreases when we sum random numbers, and the effect becomes even more pronounced as we sum 4, 5, 100, 1,000, or 1,000,000 random numbers. The curve becomes increasingly centralized, and the distribution of values becomes less and less random. This makes perfect sense when we consider: what is the probability of summing 100 random numbers and getting 0? Almost zero—because for this to happen, all 100 drawn numbers would have to be 0 (0 + 0 + 0 + … + 0 = 0). At such a large scale, the process tends toward determinism. It is almost certain that the most frequent value will be (N * Qs) / 2, where N is the highest value within the chosen range for random selection, and Qs is the number of sums performed. (This equation simply finds the midpoint of the maximum possible sum result.)

To conclude, I am also sharing the codes I created to generate the graphs and how I used them. I am also providing a generalized code for those who want to test different numbers of values and sums (just make sure your computer can handle these sums lol). I used Python to create most of the graphs, but I first developed the algorithm’s logic in C. I will upload the codes to my GitHub for anyone interested.

I want to clarify that I am not yet a formally trained Computer Scientist, and I did not strictly follow a mathematical method to scientifically prove these findings. This is simply a fascinating curiosity where I was able to combine and apply my two main areas of study.
See in the linkedin:
https://www.linkedin.com/pulse/um-pequeno-estudo-sobre-soma-de-n%25C3%25BAmeros-aleat%25C3%25B3rios-felix-hrescak-1lnvf
