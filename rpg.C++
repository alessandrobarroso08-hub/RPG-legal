#include <iostream>
#include <string>
using namespace std;

int main() 
{
   
string nome;
int escolha1, escolha2, escolha3, arma1;
string escolha11abc, escolha12abc, escolha13abc;
  


    cout << "O sol ja nascia impiedoso sobre a pequena Morretes, tingindo de dourado as ruas de terra batida e destacando cada detalhe de uma cidade que, a primeira vista, parecia apenas mais uma vila esquecida no mapa. Mas bastava um olhar mais atento para perceber que havia algo errado. O ar estava pesado, quase sufocante, como se a propria cidade prendesse a respiracao a espera de algo inevitavel. Os cochichos eram inevitaveis. Dentro do bar mais movimentado da regiao, homens de todas as idades se reuniam nao apenas para beber, mas para trocar olhares desconfiados e historias mal contadas. No centro de tudo isso, o nome que ecoava baixo, quase como uma maldicao: o bandido que vinha aterrorizando a populacao, deixando um rastro de roubos e medo por onde passava. E foi exatamente esse nome, junto de algo ainda mais chamativo, que chegou ate voce. Uma promessa. Uma quantia em dinheiro alta o suficiente para fazer qualquer um atravessar desertos, enfrentar balas e encarar a propria morte sem pensar duas vezes. O tipo de recompensa que nao se recusa... especialmente quando se tem coragem suficiente. Diziam que quem capturasse, ou melhor, matasse o responsavel pelos crimes, receberia tudo. E agora, ali estava voce. Com a poeira da viagem ainda grudada nas botas, o calor castigando a pele e os olhos atentos a cada movimento suspeito, voce pisa em Morretes sabendo que aquela nao seria apenas mais uma parada. Algo naquela cidade te puxou para dentro de uma historia maior do que simples moedas tilintando no bolso. Na porta do escritorio do xerife, o prefeito aguardava, visivelmente cansado e inquieto. La dentro, o xerife Magalhaes revirava papeis, desesperado por qualquer pista que pudesse mudar o rumo daquela situacao. E no meio disso tudo... voce. A pergunta nao era mais se voce se envolveria. Era ate onde voce estava disposto a ir por essa recompensa." "\n";
    cout << "Ola, jogador... seja bem-vindo ao Velho Oeste do Sul. Antes de qualquer coisa, diga-me... qual e o seu nome?" "\n";
    cin >> nome;
    cout << "Prazer em te conhecer, " << nome << "!" "\n";
    cout << "Agora escute com atencao, " << nome << "... voce acaba de chegar em uma cidade pequena demais para tantos segredos. Morretes. Um lugar onde o silencio diz mais do que qualquer palavra... e onde nem todos olhares sao de confianca. O xerife da cidade atende pelo nome de Rodrigo Magalhaes, mas ninguem ousa chama-lo assim. Aqui, ele e apenas Magalhaes. E, pelo que dizem, ele anda mais preocupado do que deixa transparecer. Depois de uma longa viagem, com o cansaco pesando nos ombros e a poeira grudada nas botas, uma coisa e certa: conhecer as pessoas certas pode significar a diferenca entre sair daqui com os bolsos cheios... ou nao sair daqui. A cidade observa voce." "\n";
    cout<< "E agora, a decisao e sua:" "\n";

    cout<< "1  Ir ate a delegacia e conhecer o misterioso xerife Magalhaes." "\n";
    cout<< "2  Se aproximar de tres individuos que encaram um pequeno cartaz... um cartaz que, por algum motivo, voce ainda nao consegue ler." "\n";
    cout<< "3  Entrar no bar de Gustavo" "\n";

    cout<< "Escolha com cuidado, "<< nome << "... em Morretes, ate os menores passos podem mudar tudo." "\n";
   
        cin >> escolha1;    

    if(escolha1 == 1)
    {
       cout<< "Voce empurra a porta da delegacia. A porta range. O som ecoa mais do que deveria." "\n";
        cout<< "La dentro, o ar e pesado. Papeis espalhados. Um ventilador velho gira sem muita vontade. Atras da mesa, Magalhaes, inquieto. Ele nao levanta de imediato. Continua olhando um papel… como se tentasse encontrar respostas que nao existem. Atras da mesa, Magalhaes, inquieto. Ele nao levanta de imediato. Continua olhando um papel… como se tentasse encontrar respostas que nao existem. Sem olhar pra voce, ele fala:" "\n";
        cout<< "Magalhaes: Se veio pela recompensa… entra logo. Nao gosto de gente parada na porta. Voce se aproxima." "\n";
        cout<< "Voce se aproxima. Ele finalmente ergue os olhos. Olhos cansados. Mas atentos." "\n";
        cout<< "Magalhaes: Entao1 qual e o seu jogo aqui, "<< nome << "?" "\n";

        cout<< "Escolhas para seguir..." "\n";
        cout<< "1a Quero saber tudo sobre o bandido." "\n";
        cout<< "1b Quero entender quem manda de verdade nessa cidade." "\n";
        cout<< "1c E voce, xerife ta de que lado?" "\n";
        cin>> escolha11abc;
    
        
        if(escolha11abc == "1a")
        {
            cout<< "Magalhaes solta um leve riso sem humor." "\n";
            cout<< "Se eu soubesse tudo... ele ja estava morto." "\n";
            cout<< "Ele se levanta, começa a andar devagar." "\n";
            cout<< "Magalhaes: Ele nao rouba qualquer um so gente rica. E curiosamente ninguem nunca viu ele matar. Ele para... e te encara." "\n";
            cout<< "Magalhães: Isso te parece coisa de bandido?" "\n";

        }
        else if(escolha11abc == "1b")
        {
            cout<< "Silencio. O ventilador gira. Magalhaes abaixa a voz." "\n";
            cout<< "Magalhaes: Herlon Andrade. Ele cospe o nome como se fosse amargo." "\n";
            cout<< "Magalhaes: Prefeito. Dono de tudo. Até de quem devia impedir isso." "\n";

        }
        else if(escolha11abc == "1c")
        {
           cout<< "O clima muda. Magalhaes se aproxima lentamente." "\n";
           cout<< "Magalhaes: Cuidado com esse tipo de pergunta… Ele chega perto o suficiente pra voce sentir o cheiro de cafe." "\n";
           cout<< "Magalhaes: As vezes a verdade nao salva ninguem." "\n";

        }
        else
        {
            cout<< "Escolha invalida. Tente novamente." "\n";
        }
    
        cout<< "O silencio pesado toma conta do ambiente apertado e mal ventilado. Aquilo que ja era um misterio agora parece ainda mais confuso, sem saida clara. Em meio a essa tensao sufocante, uma voz masculina surge, firme e cortante, destacando-se no caos com palavras duras e precisas." "\n";   
    }

    else if(escolha1 == 2)
    {
       cout<< "Voce caminha ate os tres homens. Eles param de falar quando você chega. Silencio. Um deles dobra o cartaz... devagar demais.";
        cout<< "Homem 1: Ta perdido, forasteiro?" "\n";
        cout<< "Voce tenta olhar o papel. Outro homem da um passo na sua frente." "\n";
        cout<< "Homem 2: Isso aqui nao e pra qualquer um." "\n";
        cout<< "Escolha para continuar..." "\n";
        
        cout<< "1a So quero ver o cartaz." "\n";
        cout<< "2b Sai da frente. (intimidar)" "\n";   
        cout<< "3c Relaxa... so to tentando entender a cidade" "\n";
        cin >> escolha12abc;

        if(escolha12abc == "1a")
        {
            cout<<"Eles trocam olhares. Relutantes... mostram.." "\n";
            cout<<"(Se vc escolher ver o cartaz, é revelado que:) Recompensa alta, Assinatura: Prefeito Herlon Andrade, Nome do bandido... raspado" "\n";   


        }
        else if(escolha12abc == "2b")
        {
            cout<<"O clima esquenta. Mao nas armas. Um segundo... Dois... Mas eles recuam" "\n";
            cout<<"Homem: Voce nao faz ideia de onde ta se metendo." "\n";
            cout<<"(Voce ve o cartaz a forca, mesmas informacoes:)" "\n";
        }
        else if(escolha12abc == "3c")
        {
            cout<<"Eles relaxam. Um deles ri." "\n"; 
            cout<<"Homem: Se tu quer um conselho... nao caca esse cara." "\n";
            cout<<"Por?" "\n";
            cout<<"Homem: E nao e o problema" "\n";
            cout<< "(Voce ve o cartaz rapidamente, mesmas informacoes:)" "\n";
        }

        else
        {
            cout<< "Escolha invalida. Tente novamente." "\n";
        }
        
        cout<<"O silencio se instala de forma repentina, pesado e desconfortavel. O papel em suas maos parece mais quente que o proprio sol acima de Morretes, como se carregasse algo alem de tinta e promessa. A rua, antes silenciosa, parecia se voltar a um so ser. Um homem, pequeno, ate mesmo similar a uma crianca. E entao, um som corta o vazio. Suave, distante, uma melodia simples, mas insistente. O homem começa a cantar, ecoando entre as construçoes de madeira, como se estivesse te chamando, ou te guiando. Sem perceber, seu olhar se afasta do cartaz. E encontra a origem da musica. Um pequeno homem, parado no meio da rua cantando como se soubesse de algo que ninguem mais ousa dizer." "\n";

    }

    else if(escolha1 == 3)
    {
        cout<< "O bar explode em barulho. Risos. Copos batendo. Conversas cortadas quando voce entra. Atras do balcao, Gustavo. A mesma calca. Surrada. Sempre. Ele limpa um copo, sem pressa alguma." "\n";
        cout<< "Gustavo: Cara nova... problema novo." "\n";
        cout<<"Escolhas para continuar:" "\n";

        cout<<" 1a O que ta acontecendo nessa cidade?" "\n";
        cout<<"2b Quem e Herlon Andrade?" "\n";
        cout<<"3c Me fala do bandido." "\n";
        cin >> escolha13abc;

        if(escolha13abc == "1a")
        {
        cout<<"Gustavo para de limpar o copo. Olha direto pra voce." "\n";
        cout<<"Depende... (Silencio.)" "\n";
        cout<<"Voce quer a versao que paga bem... ou a que pode te matar?" "\n";
        cout<<"Morretes sempre foi pequena... esquecida. Ate Herlon Andrade começar a 'organizar' tudo." "\n";
        cout<<"(Ele apoia os braços no balcão.)" "\n";
        cout<<"Gustavo: Organizar... e um jeito bonito de dizer que ele comprou metade da cidade... e assustou a outra metade." "\n";
        cout<<"(Ele se inclina um pouco mais.) " "\n";
        cout<<"Gustavo (Em meio a sussurros): E quem não vende... some." "\n";
        }
    }   

        else if(escolha13abc == "2b")
    {
           cout<<"(Gustavo ri, mas sem humor.)" "\n";
           cout<<"Gustavo: Prefeito. Dono do dinheiro. Dono da lei... quando convem. Ele aponta com o queixo pra rua. A recompensa que te trouxe aqui? Foi ele que colocou." "\n";
           cout<<"(Silncio.)" "\n";
           cout<<"Mas ninguem pergunta por que." "\n";

        }

        else if(escolha13abc == "3c")
        {
            cout<<"Mas ninguem pergunta por que." "\n";
            cout<<"Gustavo para o que esta fazendo. O pano fica imovel em sua mao. Por um instante, o bar inteiro parece abaixar o volume. Ele levanta os olhos lentamente e te encara, como se estivesse tentando decidir ate onde pode ir com voce." "\n";
            cout<<"Gustavo: Bandido..." "\n";
            cout<<"(Ele solta um leve riso pelo nariz. Sem humor.)" "\n";
            cout<<"Gustavo: Egracado como essa palavra muda dependendo de quem paga mais." "\n";
            cout<<"(Ele apoia o copo no balcao e se inclina na sua direcao.)" "\n";
            cout<<"Esse homem ai, que tao cacando... (Ele apoia o copo no balcao e se inclina na sua direcao.)" "\n";
            cout<<"(Voce percebe alguns olhares ao redor. Discretos. Atentos.)" "\n";
            cout<<"Gustavo continua: So rouba quem ja roubou metade dessa cidade.(Ele da de ombros, como se aquilo fosse obvio.) Mas ai, depende de voce." "\n";
            cout<<"(Silencio.) Gustavo: Quer cacar um criminoso... (Gustavo encarando voce): Ou quer entender a historia inteira?" "\n";
            cout<<"(O bar volta ao normal aos poucos. Mas agora, voce sabe. Talvez o alvo nao seja quem parece.)" "\n";
        
        }
        else
        {
            cout<< "Escolha invalida. Tente novamente." "\n";
        }

        cout<<"O bar vai retomando o barulho aos poucos, como se nada tivesse acontecido. Copos voltam a bater. Risadas surgem timidas. Conversas recomecam, mas algo mudou. Voce ainda esta ali, apoiado no balcao. As palavras de Gustavo ficam ecoando na sua cabeça. Depende... voce quer a versao que paga bem... ou a que pode te matar? Ele ja voltou a limpar outro copo. Ou talvez o mesmo. Dificil dizer. Aquela calma dele nao parece normal. Nao numa cidade assim. Nao com esse assunto. Voce se afasta devagar, sentindo os olhares voltarem, discretos, rapidos ou quase escondidos. Como se sua presença ali ja tivesse sido notada mais do que deveria. A porta do bar range quando voce empurra. O calor te atinge de novo. Mas agora, ele nao incomoda tanto quanto antes. Porque o peso nao esta mais no ar. Esta na sua cabeca. O 'bandido' nao parece mais so um alvo. E o nome de Herlon Andrade começa a soar perigoso demais pra ser ignorado. Voce da alguns passos pela rua. E entao, Uma melodia suave corta o ambiente. Diferente. Fora do lugar. Uma voz masculina, firme, cantando como se nao tivesse medo de nada. Ou como se ja soubesse de tudo. Voce ergue o olhar, e la esta ele. Um homem pequeno, no meio da rua, segurando um instrumento simples, chamando atencao de quem passa, mas principalmente da sua. Como se estivesse esperando por voce." "\n";
        cout<<"Voce vai em direcao a voz. Um homem, pequeno mas com voz forte. Joaozinho. Ele canta como se ninguem estivesse ouvindo. Mas todo mundo esta." "\n";
        cout<<"'Dinheiro sujo compra lei Mas nao compra o que eu sei...' (Ele te olha enquanto canta.)" "\n";
        
        cout<<"Escolhas para continuar: " "\n";
        cout<<"1 Jogar uma moeda." "\n";
        cout<<"2 Perguntar sobre a musica" "\n";
        cout<<"3 Mandar ele parar" "\n";
        cin>> escolha2;

        if(escolha2 == 1)
        {
           cout<<"(Ele chega perto. Baixinho. A moeda gira no ar... Joaozinho pega no ar, rapido. Ele sorri.)" "\n";
           cout<<"Joaozinho: Dinheiro compra musica... mas tambem compra silencio." "\n";
           cout<<"Joaozinho (sussurrando): Se quer viver... nao confia no prefeito. Se quer respostas, vai pra fora da cidade. (Ele aponta.) Procura Paulo." "\n";

        }
        else if(escolha2 == 2)
        {
           cout<<"(Voce se aproxima do garoto. A musica continua por mais alguns segundos... ate que ele para sozinho, como se ja soubesse que voce ia falar. O silencio ao redor parece respeitar aquilo. Voce da mais um passo.)" "\n";
           cout<<"Voce: Essa musica... o que ela quer dizer? (Joaozinho levanta o olhar. Os olhos dele nao combinam com a idade. Sao atentos demais. Calmos demais. Ele gira a moeda entre os dedos.)" "\n";
           cout<<"Joaozinho: Depende... Voce quer ouvir como todo mundo ou quer entender de verdade? (O vento passa entre voces. A rua continua, mas mais distante agora. Ele se aproxima um pouco.)" "\n";
           cout<<"Joaozinho (sussurrando): Nem todo mundo que manda... aparece (Uma pausa. Ele aponta discretamente com o queixo... nao pra prefeitura. Pra fora da cidade.)" "\n";
           cout<<"Joaozinho: E nem todo mundo que e cacado... e culpado. (Ele da um passo pra tras, como se a conversa ja tivesse acabado. Mas antes de voltar a tocar, ele olha direto pra voce.) Se voce quer resposta de verdade, va alem de Morretes. Procure Paulo (A musica recomeca. Como se nada tivesse acontecido. Mas agora, voce sabe pra onde olhar.)" "\n";
        }

        else if(escolha2 == 3)
        {
            cout<<"(Voce interrompe. O som some. A rua fica estranhamente silenciosa. Joaozinho te encara, sem medo.) Joaozinho: Quem manda calar... geralmente tem medo de ouvir. (Ele vira as costas. O som para de forma brusca. A musica que antes preenchia a rua desaparece e, com ela, parte da vida daquele lugar. Algumas pessoas olham de lado, outras fingem nao perceber. Mas o silencio que fica nao e comum.) (Joaozinho te encara. Por um instante, ninguem fala nada,  entao ele da um passo para tras, segurando o instrumento contra o corpo.) Joaozinho: Tem coisa que a gente so entende... quando para de tentar calar. (Ele vira de lado, pronto pra ir embora. Mas antes, solta por cima do ombro)" "\n";
            cout<<"Joaozinho: Se ta procurando resposta... nao vai achar aqui dentro. (Voce franze a testa. Ele nao se vira. So levanta levemente a mao, apontando para alem da cidade. Para onde as construcoes acabam, para onde o silencio comeca de verdade.) Joaozinho: La fora, ainda tem gente que nao vendeu a propria voz, procure Paulo." "\n";
        }
        else
        {
            cout<< "Escolha invalida. Tente novamente." "\n";
        }

        cout<<"(Sem esperar resposta, ele sai andando, desaparecendo entre as ruas. O som da cidade volta aos poucos. Mas agora,  parece distante. Voce segue o olhar dele, para fora de Morretes, onde o vento sopra mais livre, onde a poeira nao esconde tudo. Um homem chamado Paulo guarda verdades que a cidade tentou enterrar.)" "\n";
        cout<<"Tribo de Paulo: Voce cavalga ate o limite da cidade. O silencio aqui e diferente, mais vivo. Paulo te espera, como se ja soubesse." "\n";
        cout<<"Paulo: Voce demorou. (Paulo caminha ao seu redor). Paulo: O homem que voce caca... rouba quem roubou essa cidade. (Ele para.) Paulo: E o homem que paga por ele... e o verdadeiro criminoso. O homem que voce procura... esta mais perto do que imagina.(Voce franze a testa.) (Paulo responde... sem hesitar): Na cidade. (O silencio se estende por alguns segundos depois das palavras de Paulo. Pesado, denso. O vento passa entre voces, mas nao leva embora o que foi dito, agora voce sabe. Ou pelo menos, sabe o suficiente pra nao voltar sendo a mesma pessoa. Voce monta no cavalo sem dizer nada, Paulo nao te impede mas tambem nao te acompanha. Antes de voce partir, ele apenas diz):" "\n";
        cout<<"O que voce faz agora... define quem voce realmente e. (Voce nao responde. O caminho de volta parece mais curto ou talvez mais pesado. Cada passo do cavalo ecoa diferente, como se estivesse te levando direto para algo inevitavel.)" "\n";
        cout<<"(Quebra de tempo)" "\n";

        cout<<"no caminho de volta voce acha um bau com uma arma Colt (ama curta) e uma Wisnshester (arma longa) e decide pegar uma delas." "\n";
        cout<<"Escolha a arma que voce quer pegar:" "\n";
        cout<<"1 Colt" "\n";
        cout<<"2 Winchester" "\n";
        cin >> arma1;
        if(arma1 == 1)
        { 
            cout<<"Voce pega a Colt." << "\n";
        }
        else if(arma1 == 2)
        {
            cout<<"Voce pega a Winchester." << "\n";
        }
        else
        {
            cout<<"Escolha invalida. Tente novamente." << "\n";
        }

        cout<<"(Morretes surge no horizonte, mas nao como antes, a cidade parece mais quieta ou mais tensa. Mais consciente da sua presenca. Quando voce atravessa a entrada,  algumas pessoas param, outras desviam o olhar e algumas observam demais, como se ja soubessem. O vento sopra, uma porta bate.E entao, voce percebe. Tem gente esperando.)" "\n";
        cout<<"(No meio da rua principal, Magalhaes, parado. Mao próxima da arma. Mais a frente,  Gustavo, fora do bar, algo raro, muito raro. E acima de todos, na varanda da prefeitura, Herlon Andrade, observando como se tudo aquilo ja estivesse planejado. O silencio volta, mas agora, nao e vazio. E confronto.)" "\n";
        cout<<"Herlon: Entao... voce voltou. (Ele desce lentamente, passo por passo, sem pressa e sem medo.) Magalhaes: Agora nao tem mais volta... Gustavo: So decide rápido... porque eles ja decidiram. (Herlon para alguns metros de voce, te encara, sorriso leve. Frio.) Herlon: Voce descobriu mais do que devia... (O silencio toma conta da rua, ninguem se move e nem respira direito. O vento passa, levantando poeira entre voce e Herlon. Magalhaes mantem a mao proxima da arma. Gustavo observa, tenso. A cidade inteira parece assistir. Herlon da mais um passo, devagar e seguro.)" "\n";
        cout<<"Herlon: Agora escolhe... dinheiro ou problema. (O tempo parece parar, sua decisao define tudo.)" "\n";

        cout<<"1 Sacar a arma e atirar em Herlon." "\n";
        cout<<"2 Acabou, Herlon. (tentar prender)" "\n";
        cout<<"3 Quanto voce paga? (aceitar o acordo)" "\n";
        cin>> escolha3;
        if(escolha3 == 1 && arma1 == 1)
        {
            cout<<"(Voce nao hesita, a mao vai direto na arma. O som do disparo corta o silencio da cidade. Herlon nem tem tempo de reagir, o corpo cai no chao. Pesado, sem vida. Silencio completo. Magalhaes abaixa a arma devagar, Gustavo olha sem expressao. A cidade observa, mas nao ha comemoracao, nao ha alivio porque, aos poucos voce percebe. Nada mudou, as pessoas continuam com medo, os olhares continuam baixos. O silencio ainda continua pesado. Magalhaes se aproxima.)" "\n";
            cout<<"Magalhaes: Voce matou um homem...(Pausa) Magalhaes: Mas nao matou o que ele construiu. (O vento sopra. A poeira cobre o corpo de Herlon. E voce entende, voce cumpriu o trabalho, mas nao fez justica.)" "\n";
        }
        else if(escolha3 == 1 && arma1 == 2)
        {
            cout<<"(Voce atira, mas a distancia e grande  e sua destreza e limitada com rifles. O som do disparo ecoa, mas Herlon nao cai. Ele olha pra voce, surpreso, mas ainda com aquele sorriso frio. Ele da um passo pra tras, como se o tiro tivesse sido um aviso. Magalhaes e Gustavo reagem rapido, puxando as armas. O confronto se torna inevitavel. Balas voam, gritos surgem, a cidade se torna um caos momentaneo. No fim, voce consegue atingir Herlon, mas ele nao cai imediatamente. Ele se apoia na parede da prefeitura, olhando pra voce com uma mistura de raiva e respeito.)" "\n";
            cout<<"Herlon: Voce tem coragem... (Ele sorri pela primeira vez de verdade.) Herlon: Mas isso nao e suficiente." "\n";
            cout<<"(Ele saca uma arma escondida e atira em voce. O som do disparo e diferente agora, mais proximo, mais mortal. A cidade fica em silencio novamente, mas dessa vez, o silencio e diferente. E pesado demais para ser ignorado. Magalhaes e Gustavo ficam parados por um momento... entao recuam lentamente, percebendo que a situacao saiu completamente do controle.)" "\n";
            cout<<"(Herlon observa voce cair no chao, o sangue manchando a poeira. Ele da um ultimo olhar pra voce antes de subir de volta na varanda da prefeitura. A cidade observa em silencio, sabendo que algo mudou para sempre.)" "\n";
        }
        else if(escolha3 == 2)
        {
            cout<<"(Voce respira fundo. A mao firme, mas nao atira.) Voce: Acabou, Herlon. (Silencio, tensao, peso. Herlon ri baixo.) Herlon: Voce realmente acredita nisso? (Antes que ele reaja, Magalhães puxa a arma. Gustavo tambem.) Magalhaes: Dessa vez... acabou mesmo." "\n";
            cout<<"(Guardas hesitam. Olham uns para os outros. E entao, abaixam as armas. Herlon perde o sorriso pela primeira vez. Ele e cercado sem saida, acidade observa. Mas agora, algo muda. As pessoas levantam o olhar, sussurros comecam, passos se aproximam. A verdade nao foi enterrada, Herlon e levado, sem gloria e em poder. Magalhaes passa por voce.)" "\n";
            cout<<"Magalhaes: Hoje... voce fez o que ninguem teve coragem. (O vento sopra, mas dessa vez, ele parece mais leve. Morretes ainda nao esta salva, Mas, pela primeira vez, tem uma chance.)" "\n";

        }
        else if(escolha3 == 3)
        {
            cout<<"(Voce nao puxa a arma, voce sorri, leve e frio.) Voce: Quanto voce paga?(Silencio, Surpresa. Herlon abre um sorriso, satisfeito.) Herlon: Agora sim... alguem inteligente. (Magalhaes te encara sem acreditar. Gustavo abaixa o olhar, uma mala e trazida pesada e cheia. Voce pega sem hesitar. Herlon se aproxima.) Herlon: Bem-vindo ao lado certo." "\n";
            cout<<"(Dias depois, acidade continua igual. Ou pior. O medo cresce, o silencio domina. E entao, um novo cartaz aparece na cidade preso no mesmo poste balancando com o vento.) (PROCURADO) (Um nome. O seu. O vento sopra e agora, nao ha mais duvida, voce nao e mais o cacador. Voce e o proximo alvo.)" "\n";

        }
        else
        {
            cout<<"Escolha invalida. Tente novamente." "\n";
        }

        cout<<"Obrigado por jogar! Suas escolhas moldaram essa historia, mas tambem disseram muito sobre voce. No Velho Oeste do Sul, nem sempre existe certo ou errado, apenas caminhos e consequencias. E no fim, cada decisao deixa uma marca. Ate a proxima " <<nome<<"." << "\n";
        cout<<"CREDITOS: ALESSANDRO FEZ TUDO POIS O GRUPO DELE O DEIXOU NO MEIO DO PROJETO SEM AJUDA-LO EM MOMENTO ALGUM!!" "\n";

        return 0;

    }
    // itens colt e winchester = 2 finais + os outros
