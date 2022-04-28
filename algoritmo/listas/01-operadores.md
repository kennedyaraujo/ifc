# Algoritmo - Superior de Tecnologia em Redes de Computadores - 2022.2

### LISTA OPERADORES E COMANDO DE DECISÃO

## Operadores
1. Elabora um algoritmo, onde o usuário em que o usuário informe a altura, largura e o peso de um determinado pacote e o programa informa o preço para envio. O curto do envio é de 0,25 por centímetro quadrado mais uma taxa de 5 reais por quilo (até um quilo para 5 reais, depois 10 e assim sucessivamente).
1. Elabore um algoritmo, onde o usuário informará o comprimento e a largura de um ambiente em metros e o comprimento e a largura em centímetros de um tipo de cerâmica a ser usado para revesti-lo. Você informar quantas unidades de carâmica serão necessárias para revestir todo o cômodo. (Considere que apenas o chão do comodo será revestido com as cerâmicas.)
1. Elabore um algoritmo, onde o usuário informará a quantidade de moedas de 1 real que deseja transporta e você informará quantos bolsas serão necessárias. Cada bolsa carrega 16kg de moedas o que equivalem a 80 moedas. O programa deve apresentar quantas bolsas serão necessárias para armazenar o total de moedas informadas e o peso total da encomenda, cada moeda pesa 200  gramas.
1. Construa um algoritmo onde o usuário irá informar uma determinada hora (valores entre 0 e 24) e o programa informará se é período da manhã (0-12), tarde (13-18) e noite (19-24). Caso o usuário informe um valor que não está nesse intervalo deve ser exibida a mensagem “valor inválido”.
1. Elabore um algoritmo em C, onde o usuário informe o tempo em minutos que gasta para realizar um prova e você irá informá-lo quantas horas equivale o tempo digitado e também quanto ele passou do tempo mínimo de prova que é de 20min (Considere que para a questão que todo o usuário fará um tempo de prova maior que o mínimo).


## Estrutura de Decisão
1. Ler o peso da bagagem de um usuário e informar o preço que o cliente pagará por sua bagagem. O usuário pode levar uma mala sem custo desde que esta pese menos que 23kg, caso ultrapasse este peso ele pagará R$2,00 (dois reais) por quilo excedente.
1. Criar um algoritmo para ler um percurso em quilômetros, o tipo de carro, e o tipo de combustível (gasolina ou álcool) e depois informar o consumo estimado de combustível deste percursso. Sabendo-se que o carro tipo 1 faz 12 km/l com gasolina e 7km/l com alcool, já o carro do tipo 2 faz 17km/l com gasolina e 9 km/l com álccol. 
1. Faça um algoritmo para calcular a conta de energia, nele o usuário irá informar o preço do kWh , quantidade que kWh consumidos e a bandeira tarifária (verde, amarela e vermelha). Ressalta-se que, se a bandeira for verde não há acrescimo,  se a bandeira for amarela o preço do kWh receberá um acrescimo de 10% no seu valor, se a bandeira for vermelha o preço do kWh  receberá um acrescimo de 20% em seu valor. Entrará também na conta a taxa de iluminação pública, que é um valor fixo de R$13,20 (treze reais e vinte centavos).
1. Elabore um algoritmo que receba quanto uma pessoa ganha e o valor de um empréstimo que ela pretende solicitar. Caso o empréstimo seja menor ou igual a 10  vezes o salário da pessoa, você deve informar "Empréstimo Concedido"; caso contrário, ele deverá escrever "Empréstimo Negado".  Caso o empréstimo seja negado o programa deve informar qual o valor máximo que aquele usuário poderia pegar emprestado. 
1. Construa um algoritmo que receba como entrada a altura e o sexo de uma pessoa, e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas: Para homens: (80.8 * h) - 32,  onde h representa a altura informada. Para mulheres: (55.7 * h) - 58.6,  onde h representa a altura. Depois de calcular o peso ideial você deve informar também se a pessoa está abaixo, acima ou no peso ideial.
1. Elabore um algoritmo que receba como entrada o preço da hora trabalhada, a quantidade de horas e calcule o quanto o funcionário tem a receber. Você deve atentar para o fato que passando de 40h o funcionário passa a receber o valor de hora extra, que é a hora normal acrescido de 50%.
1. O dimensionamento da lotação em face de área disponível para circulação do público é calculado pela equação a seguir, onde a densidade de público por metro quadrado (m²/pessoa) calculado deve ser menor que 2,5 pessoas/ m². D = P / A,  onde: D = Densidade de público calculada, em m²/pessoa A = Área útil para circulação de pessoas, em m²; P = população ou lotação desejada. Entretanto, com a pandemia de covid-19 o máximo recomendado para a densidade é de 1,5 pessoa/m2. Construa um algoritmo em que o usuário informe as dimensões de área útil construída, com largura e comprimento da edificação, e o programa informará quantas pessoas aquela edificação acomodará por vez (suponha que o estabelecimento terá sempre o formato de um retângulo).
1. O cálculo do engajamento de uma postagem no instagram é feito levando em consideração as visualizações, os likes, os comentários. Elabore um algoritmo que calcule o índice de engajamento, considerando que o engajamento de cada postagem é obtido fazendo a média ponderada entre visualizações, likes (que terão peso 2) e comentários (peso 3). A quantidade de visualizações, likes e comentários deve ser solicitada ao usuário.







## Backup
1. Faça um algoritmo para calcular a área superficial de um cilindro (2*pi*r*h).
2. Faça um algoritmo para calcular a área de um cubo retangular ((h*l)+(h*b)+(l*b))*2.
3. Faça um algoritmo para calcular a área superficial de uma esfera (4*pi*r^2).
4. Faça um algoritmo para calcular a área de um cone(pi*r*h).
5. Faça um algoritmo para calcular o volume de um cilindro(pi*r^2*h).
6. Faça um algoritmo para calcular o volume de uma esfera(4/3*pi*r^3).
7. Faça um algoritmo para calcular o volume de um cone (pi*r^2*h) / 3).
8. Faça um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius.
9. Faça um algoritmo para calcular e exibir um salário reajustado em 23,75%. O salário atual deve ser fornecido pelo usuário.
10. Faça um algoritmo para calcular e exibir do salário líquido de um professor, onde o número de horas, o valor da hora e o percentual do INSS devem ser fornecidos pelo usuário:
 * salario_bruto = num_hora_aula * valor_hora_aula
 * salario_liquido = salario_bruto – (salario_bruto * percentual_INSS).
11. Faça um algoritmo para calcular e exibir o valor de uma prestação em atraso:
 * prestacao_atrasada = prestacao + (prestacao * (taxa/100) * num_dias_atraso);
    * onde a taxa é o percentual de juros por dia, num_dias_atraso é o número de dias em atraso e prestação é o valor da prestação normal. O valor da prestação, a taxa e o número de dias em atraso devem ser fornecidos pelo usuário. 
12. Faça um algoritmo que calcule a média de quatro números inteiros. Os números devem ser dados pelo usuário.
13. Faça um algoritmo que receba do usuário uma quantidade de chuva dada em polegadas e exiba o equivalente em milímetros (25,4 mm = 1 polegada).