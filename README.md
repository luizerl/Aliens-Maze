# Labirinto dos Alíenigenas (Alien's Maze)
#### Ajude nosso herói a escapar das garras dos terríveis marcianos.

Jogo criado utilizando a linguagem C, foi um dos projetos desenvolvido na disciplina de Algoritmos e Programação de Computadores da Universidade de Brasília.

## Como compilar o jogo?
Tendo o compilador GCC instalado, basta executar a seguinte linha de comando:

### `gcc main.c -o jogo`

Após isso, ainda no terminal, basta executar o programa:

### `jogo.exe`


![Imagem da tela inicial do jogo](https://scontent.fbsb13-1.fna.fbcdn.net/v/t1.15752-9/247356777_1032569754258678_650003573311459477_n.png?_nc_cat=100&ccb=1-5&_nc_sid=ae9488&_nc_eui2=AeFHihL91tPulcCWKLZxtI-8PnGBm_4GB4s-cYGb_gYHizTew8yoVIYtYA0e_XoVaaXRTnuF_GUR9Qalbqt07aiT&_nc_ohc=TYnYfjgjpxMAX-yb0Z9&_nc_ht=scontent.fbsb13-1.fna&oh=e639af1558becddf9f9b8bf6e1067027&oe=619FA870)

## Como jogar?
No github já está disponível o arquivo executável, para computadores Windows, basta abrir `executar_jogo.exe` e o terminal irá aparecer.

Para inciar basta digitar o número 1, para ler as instruções digite 2 e para fechar o terminal e sair do jogo, 3.

![Labirinto](https://scontent.fbsb13-1.fna.fbcdn.net/v/t1.15752-9/248984646_317706556351936_4131262670983995853_n.png?_nc_cat=104&ccb=1-5&_nc_sid=ae9488&_nc_eui2=AeGpj45U9nucZVqudHIO0nxMCbZPMZtaBZgJtk8xm1oFmPVtVqErEjRAaDdzHc_IwsiXa9majlbnz5yUqEjYYs_-&_nc_ohc=1JCIxBCTYZIAX9G4ai0&_nc_ht=scontent.fbsb13-1.fna&oh=4eaf008116150b072fe79ac5767b5bc1&oe=619FDCDF)

Você será nosso herói nessa aventura, representado pelo '@'. Para se movimentar:

1. `Digite 'd' para andar para a direita`
2. `Digite 'a' para andar para a ESQUERDA`
3. `Digite 'w' para SUBIR no labirinto`
4. `Digite 's' para DESCER no labirinto`

Os **'*'** representam as paredes do labirinto, impossibilitando a passagem. Você só poderá andar pelos espaços em branco.

Você possui um número limitado de movimentos, cada vez que você anda para os lados, sobe ou desce, sua ENERGIA diminui, se chegar em 0 você perde o Jogo. Para **aumentar a energia** 
você deverá ganhar os desafios, representados pelos 0s, espalhados no labirinto.

Bom jogo!
