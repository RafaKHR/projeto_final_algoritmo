/*Integrantes do grupo:
Gabriel de Paula Alvanrenga Adeodato - UC22103132 - Ciência da Computação
Rafael Alves de Araujo - UC22200074 - Ciência da Computação
Thales Sousa Lima - UC22200145 - Ciencia da Computação
*/



#include<locale.h> //permite escrever acento
#include<stdio.h> // permite Printf e scanf
#include<math.h> // permite mais opções de contas como sqrt e pow

#define VALORMEIA 25.00
#define VALORINTEIRA 50.00

int main () {
	//VARIÁVEIS UTILIZADAS NO CÓDIGO
    setlocale(LC_ALL,"Portuguese");
    int i, quantSessoes, quantEspectadores, idadeEspectador, quantMeia = 0, quantInteira = 0, somaValores, somaValoresMeia = 0, somaValoresInteira;
    int quantHomem = 0, quantMulher = 0, verificaSessoes, verificaEspectador, homensCriancas = 0, homensAdolescentes = 0, homensAdultos = 0, homensIdosos = 0;
    int idadeHomem = 0, idadeMulher = 0, mulheresCriancas = 0, mulheresAdolescentes = 0, mulheresAdultas = 0, mulheresIdosas = 0;
    int mulherMaiorIdade, homemMaiorIdade;
    float comprouPipocaSim = 0, comprouPipocaNao = 0, porcentagemComprouPipoca;
    char nomeFilme[100];
    char sexoEspectador, formaEntrada, comprouPipoca;
//******************************************************************************************************************************************************************//


//Pergunta número de sessões
do{
 printf("Quantas sessões serão realizadas: ");
 scanf("%d", &quantSessoes);
 //Permite apenas 2 sessões
 if(quantSessoes!=2){
     printf("Quantidade invalida\n\n");
     verificaSessoes=0;
     }else{
         verificaSessoes=1;
    }
 }while(verificaSessoes!=1);
 
 
 //repete o código 2 vezes
 for(i = 1; i <= quantSessoes; i++){
 
 
//Pergunta filme
	fflush(stdin);
	printf("\nQual o nome do filme dessa sessão: ");
	fgets(nomeFilme, 100, stdin);
	printf("O nome do filme é: %s", nomeFilme);

	
//Pergunta quantas pessoas assistiram	 
	 do{
	 printf("\nQuantas pessoas assistiram à sessão: ");
	 scanf("%d", &quantEspectadores);
	 if(quantEspectadores<10){
	     printf("Quantidade invalida\n\n");
	     verificaEspectador=0;
	     }else{
	         verificaEspectador=1;
	    }
	 }while(verificaEspectador!=1);
	 
	 
//Pergunta qual o tipo do ingresso 
	 for(i=1; i<=quantEspectadores; i++){
	 	printf("\nQual a forma de entrada da pessoa %d: (M)eia ou (I)nteira? ", i);
	 	scanf("%s", &formaEntrada);
	 	
	 	if(formaEntrada == 'm'||formaEntrada == 'M'){
	 		quantMeia = quantMeia + 1;
	 		somaValoresMeia = somaValoresMeia + VALORMEIA;
		 }else if (formaEntrada == 'i'|| formaEntrada == 'I'){
		 	quantInteira = quantInteira + 1;
		 	somaValoresInteira = somaValoresInteira + VALORINTEIRA;
		 }else{
		 	printf("Forma Inválida!");
			 i--;
		 }
	 }
	 
	 
//Pergunta se quer Pipoca ou não 	 
	for(i=1; i<=quantEspectadores; i++){
		printf("\n\nO espectador %d comprou pipoca: (S)im ou (N)ão ", i);
		scanf("%s", &comprouPipoca);
		if(comprouPipoca == 's'||comprouPipoca == 'S'){
			comprouPipocaSim = comprouPipocaSim + 1;
		}else if (comprouPipoca == 'n'|| comprouPipoca == 'N'){
			comprouPipocaNao = comprouPipocaNao + 1;
		}else { 
			printf("Opção Inválida!");
			i--;
		}
	} 

	
//Pergunta o sexo do espectador	
	 fflush(stdin);
	for(i=1; i<=quantEspectadores; i++){
	    printf("\n\nQual o sexo do espectador %d: (M)asculino ou (F)eminino: ", i);
	    scanf("%s", &sexoEspectador);
	    
	    switch (sexoEspectador){
				case 'M':
				case 'm':{
										
					quantHomem = quantHomem + 1;
				break;		
				}
				case 'f':
				case 'F':{
					
					quantMulher = quantMulher + 1;
				break;
					}
					
					default:{
						
					printf("Sexo invalido\n");
					i--;
						break;		
					}	
		}
	}


//pergunta a idade dos espectadores do sexo masculino
	for(i = 1; i<=quantHomem; i++){
		printf("\n\nQual a idade do Homem %d: ", i);
		scanf("%d", &idadeHomem);
		
		if (idadeHomem <= 13 && idadeHomem > 2){
			homensCriancas = homensCriancas + 1;
		}
		else if (idadeHomem <= 17 && idadeHomem > 13){
			homensAdolescentes = homensAdolescentes + 1;
		}
		else if (idadeHomem <= 64 && idadeHomem > 17){
			homensAdultos = homensAdultos + 1;
		}
		else if (idadeHomem <= 100 && idadeHomem > 64){
			homensIdosos = homensIdosos + 1;
		}
		else if (idadeHomem > 100){
			printf("Você é velho demais para sair de casa!\n");
			i--;
		}
		else if (idadeHomem <= 2){
			printf("Você é jovem demais para sair de casa\n");
			i--;
		}
	}


//pergunta a idade dos espectadores do sexo feminino	
	for(i = 1; i<=quantMulher; i++){
		printf("\nQual a idade da Mulher %d: ", i);
		scanf("%d", &idadeMulher);
		
		if (idadeMulher <= 13 && idadeMulher > 2){
			mulheresCriancas = mulheresCriancas + 1;
		}
		else if (idadeMulher <= 17 && idadeMulher > 13){
			mulheresAdolescentes = mulheresAdolescentes + 1;
		}
		else if (idadeMulher <= 64 && idadeMulher > 17){
			mulheresAdultas = mulheresAdultas + 1;
		}
		else if (idadeMulher <= 100 && idadeMulher > 64){
			mulheresIdosas = mulheresIdosas + 1;
		}
		else if (idadeMulher > 100){
			printf("Você é velho demais para sair de casa!\n");
			i--;
		}
		else if (idadeMulher <= 2){
			printf("Você é jovem demais para sair de casa\n");
			i--;
		}
	}
	
	
	//responde sobre os valores dos ingressos
	printf("\n A soma dos valores das entradas meias é: %d", somaValoresMeia);
	printf("\n A soma dos Valores das entradas Inteiras é: %d", somaValoresInteira);
	somaValores = somaValoresMeia + somaValoresInteira;
	printf("\n A soma dos valores das inteiras com as meias é: %d", somaValores); 
	
	
	//responde sobre a quantidade de ingressos
	if(quantMeia>quantInteira){
		printf("\n\nTiveram mais meias que inteiras");
	}else if(quantInteira>quantMeia){
		printf("\nTiveram mais inteiras que meias");
	}else{
		printf("\nA quantidade de meias e inteiras são as mesmas");
	}
	
	
	//responde a porcentagem dos espectadores que comprar PIPOCA
	porcentagemComprouPipoca = (comprouPipocaSim / quantEspectadores) * 100;
	printf("\n\n%.1f por cento dos espectadores compraram pipoca!", porcentagemComprouPipoca);
	
	
	//responde quantidade de telespectadores de cada sexo
	printf("\n\n%d = quantidade homens", quantHomem);
  	printf("\n\n%d = quantidade mulheres", quantMulher);
  	
  	
  	//responde quantas crianças,adolescentes, adultos e idosos de cada sexo
  	printf("\nMulheres Crianças: %d\n", mulheresCriancas);
	printf("Mulheres Adolescentes: %d\n", mulheresAdolescentes);
	printf("Mulheres Adultas: %d\n", mulheresAdultas);
	printf("Mulheres Idosas: %d\n\n", mulheresIdosas);
	printf("Homens Crianças: %d\n", homensCriancas);
	printf("Homens Adolescentes: %d\n", homensAdolescentes);
	printf("Homens Adultos: %d\n", homensAdultos);
	printf("Homens Idosos: %d\n", homensIdosos);
	
	
  	//responde qual sexo esteve mais presente na sessão
  	homemMaiorIdade = homensAdultos + homensIdosos;
	printf("\nA quantidade de homens maior de idade são: %d\n", homemMaiorIdade);
	mulherMaiorIdade = mulheresAdultas + mulheresIdosas;
	printf("A quantidade de mulheres maior de idade são: %d\n", mulherMaiorIdade);
			
}

 return(0);
}
