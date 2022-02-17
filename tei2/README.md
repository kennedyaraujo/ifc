# Tópicos Especiais em Informática - 2021.1

### RECURSOS

### Bibliografia
* [Introdução a Realidade Virtual e Aumentada - Pré-Simpósio do SVR - 2020](https://github.com/kennedyaraujo/ifc/blob/main/tei2/bibliografia-realidade-aumentada/Introdu%C3%A7%C3%A3o%20a%20Realidade%20Virtual%20e%20Aumentada%20-%20Pr%C3%A9-Simp%C3%B3sio%20do%20SVR%20-%202020.pdf)
* [Handbook of Augmented Reality](https://books.google.com.br/books?hl=pt-BR&lr=&id=fG8JUdrScsYC&oi=fnd&pg=PR3&dq=%22augmented+reality%22&ots=ifz6QyTaYy&sig=eeWcHKNNXli2ZI4yu_S74s__gT0#v=onepage&q&f=false)

---

### AULAS
* **Aula 01 - Introdução à Realidade Aumentada**
    * [Slides Aula 01](https://github.com/kennedyaraujo/ifc/blob/main/tei2/slides/aula-01-introducao-ra.pdf)
    * [Link para o formulário de email](https://forms.gle/aYcPWFtXARxzftyz6)
    * [Link para formulário de questões](https://forms.gle/D6zWXdYWBpPkYUPT9)    
    * [Vídeo 01 - Sensorama - Morton Heilig's](https://www.youtube.com/watch?v=vSINEBZNCks)
        * 0:10 - Imagens mostradas no sensorama
        * 1:23 - Imagens da máquina sendo utilizada 
    * [Vídeo 02 - Óculos Criado por Ivan Sutherland](https://www.youtube.com/watch?v=AFqXGxKsM3w)
        * 2:58 - Imagens sendo colocadas sobrepostas ao ambiente
        * 3:10 - Display sendo usado
    * [Artigo - The Ultimate Display -  Ivan E. Sutherland](https://github.com/kennedyaraujo/ifc/blob/main/tei2/bibliografia-realidade-aumentada/The%20ultimate%20display%20-%20Ivan%20E%20Sutherland.pdf)
    * [Artigo - Augmented Reality: An Application of Heads-Up Display Technology to Manual Manufacturing Processes](https://github.com/kennedyaraujo/ifc/blob/main/tei2/bibliografia-realidade-aumentada/Augmented%20Reality%20-%20An%20Application%20of%20Heads-Up%20Display%20Technology%20to%20Manual%20-%20Thomas%20C%20David%20M.pdf)
    <!-- * [Vídeo - Aula 01](https://www.youtube.com/watch?v=qjKx1nFbmZ8) <br/>
    <a href="https://youtu.be/qjKx1nFbmZ8"> <img src="https://img.youtube.com/vi/qjKx1nFbmZ8/maxresdefault.jpg" width="200"></a> -->
    * [Link Slides - Aplicações que utilizam RA](https://docs.google.com/presentation/d/1fG9N3bgZgoDFOhSkXbd8hPK4YS2DgpjF/edit?usp=sharing&ouid=100855511090148956984&rtpof=true&sd=true)
* **Aula 02 - Conhecendo a Biblioteca Media Pipe**
    * [MediaPipe com JavaScript](https://google.github.io/mediapipe/getting_started/javascript.html)
    * [MediaPipe no Github](https://github.com/google/mediapipe)
    * [MediaPipeHands](https://google.github.io/mediapipe/solutions/hands.html)
    * [Base MediaPipe Hands](https://github.com/kennedyaraujo/ifc/blob/main/tei2/code/base-mediapipe-hands.html)
* **Aula 03 - Contador de dedos**
    * Assista o vídeo da última aula e com o auxílio da biblioteca MediaPipe crie um contador de dedos, onde o usuário mostrará um determinado número em tela e aplicação informá quantos dedos estão levantados. O vídeo mostrado ao usuário deve compatibilizar a mão levantada, assim como ocorre em aplicações do gênero (fazer teste com o google meet).
* **Aula 04 - Posição da mão**
    * [Arquivo com localização da mão](https://replit.com/@KennedyArajo/position-hand?v=1#index.html)
    * Atividade - Lâmpada
        * Você deve posicionar três lâmpadas dentro da área do vídeo e quando o usuário tocá-las elas devem acender/apagar
* **Aula 05 - Acender lâmpadas**
    * Você deve posicionar três lâmpadas dentro da área do vídeo e quando o usuário tocá-las elas devem acender/apagar. Lembre que área da lampada em si é diferente da área da imagem e que dependendo da estratégia o posicionamento pode estar invertido, conforme abordado em aula. Como sugestão você pode utilizar as [images disponibilizadas](https://github.com/kennedyaraujo/ifc/tree/main/tei2/material-complementar/images-lamp), onde se tem tanto a lâmpada acesa quanto apaga, fique a vontade para fazer a composição que desejar para dispor 3 lâmpadas.
* **Aula 06 - Posicionamento de objetos na face**
<<<<<<< Updated upstream
    * FaceMesh
        * [Documentação FaceMesh](https://google.github.io/mediapipe/solutions/face_mesh)
        * [Pontos da face](https://raw.githubusercontent.com/google/mediapipe/a908d668c730da128dfa8d9f6bd25d519d006692/mediapipe/modules/face_geometry/data/canonical_face_model_uv_visualization.png)
    * [Documentação Holistic](https://google.github.io/mediapipe/solutions/holistic.html)
    * [Vetores óculos](https://www.flaticon.com/packs/sunglasses?word=glasses)
=======
    * [Documentação FaceMesh](https://google.github.io/mediapipe/solutions/face_mesh)
    * [Pontos da face](https://raw.githubusercontent.com/google/mediapipe/a908d668c730da128dfa8d9f6bd25d519d006692/mediapipe/modules/face_geometry/data/canonical_face_model_uv_visualization.png)
>>>>>>> Stashed changes
* **Aula 07 - Provador de óculos**
    * Com base no exercício do uso da distribuição holist você deve contruir uma aplicação que terá 3 modelos de óculos visiveis na lateral da aplicação (em coluna no lado esquerdo ou direito) e o usuário poderá selecioná-los, tocando neles, para visualizá-los em seu rosto. A aplicação deve contar com 3 óculos diferentes para teste, e o usário deve conseguir removê-los. Você pode criar um botão para quando tocado remova o óculos que esteja no rosto, ou memos implementar a opção de tocar no próprio óculos que estão dispostos na lateral para escolha e ele sumir do rosto do usuário. Lembro que o oculos deve respeitar o tamanho da face, para isso atribua larguras proporcionais ao tamano do rosto do usuário que usa a aplicação.
* **Aula 08 - Exame**
    * Você deverá desenvolver uma aplicação para o desenvolvimento do raciocínio lógico matemático, com os temas abordados na discplina. A aplicação terá 4 telas:
        * Tela inicial: Constará a apresentação da aplicação, e um botão iniciar. O usuário deverá tocá-lo para iniciar a aplicação.
        * Tela 2 - Nesta fase a aplicação apresentará uma expressão matemática (soma, subtração, divisão, multiplicação) e o usuário deverá respondê-la apresentando o resultado com os dedos da mão.
        * Tela 3 - Nesta fase a aplicação apresentará uma forma (quadrado, circulo, triângulo) em uma determinada cor, e 5 opções  de cores para que o usuário indique qual a cor da forma tocando nela. O texto de cada cor será escrito em um cor diferente, por exemplo o amarelo terá a cor da fonte laranja; o verde terá a cor de fonte azul e assim sucessivamente.
        * Tela final - Feeback para o usuário informando como foi o desempenho do usuário, deve ser levado em consideração o tempo que levou para finalizar as duas fases, ou acertos e erros que obteve. Também deve constar um botão para que ela possa ser direcionado a fase 1 (tela 2) também acionado pelo toque.
    O código deve ser postado no github, e você deve configurar o githubpages para acesso por link próprio. Informe os dois links (link do diretório e github) aqui no SIGAA.
    A pontuação será atribuída de forma gradativa com relação a implementação de cada tela. Recomenda-se que o conteúdo seja gerado de forma aleatória para favorecer a rejogabilidade.
<<<<<<< Updated upstream
=======
=======
    * [Arquivo para codificação](https://position-hand.kennedyarajo.repl.co/)
* **Aula 05 - Posicionamento de objetos na face**
    * FaceMesh
        * [Documentação FaceMesh](https://google.github.io/mediapipe/solutions/face_mesh)
        * [Pontos da face](https://raw.githubusercontent.com/google/mediapipe/a908d668c730da128dfa8d9f6bd25d519d006692/mediapipe/modules/face_geometry/data/canonical_face_model_uv_visualization.png)
    * [Documentação Holistic](https://google.github.io/mediapipe/solutions/holistic.html)
    * [Vetores óculos](https://www.flaticon.com/packs/sunglasses?word=glasses)
>>>>>>> 4c04cad3d2f81260914b7c837974621ffa84f780
>>>>>>> Stashed changes
    <!-- * [Vídeo - Aula 03](https://www.youtube.com/watch?v=mhQ5WInfM5w) <br/>
    <a href="https://www.youtube.com/watch?v=mhQ5WInfM5w"> <img src="https://img.youtube.com/vi/mhQ5WInfM5w/maxresdefault.jpg" width="200"></a> -->
<!-- * **Aula 04 - Atividade Criação de mapa de movimento**
    * O aluno deverá fazer a subtração entre duas imagens e mostrar o resultado, chamado de mapa de movimento, para o usuário em tempo real.
    * Recomendo partir do [código de captura do vídeo](https://github.com/kennedyaraujo/ifc/blob/main/tei2/code/aula02-captura-webcam.html) disponibilizado
    * [Descritivo técnica de mapeamento de movimento](https://1drv.ms/b/s!Ak5zz-HWFx2ulLMX2KIXAnHqfmEFQA?e=3Fcx03) 
**Aula 05 - Atividade SnapShot**
    * Você deve construir com base no código da aula passada, um botão que ao ser clicado captura um snapshot da webcam do usuário, e salva no canvas ao lado. Deve ser criado também um botão de download que possibilite ao usuário baixar aquela imagem.
* **Aula 06 - Atividade Criação de mapa de movimento**
* **Aula 07 - Criação de mapa de movimento de forma colaborativa** -->
