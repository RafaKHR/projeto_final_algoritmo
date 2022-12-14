/*Integrantes do grupo:
Gabriel de Paula Alvanrenga Adeodato - UC22103132 - Ci?ncia da Computa??o
Rafael Alves de Araujo - UC22200074 - Ci?ncia da Computa??o
Thales Sousa Lima - UC22200145 - Ciencia da Computa??o
*/



#include<locale.h> //permite escrever acento
#include<stdio.h> // permite Printf e scanf
#include<math.h> // permite mais op??es de contas como sqrt e pow

#define VALORMEIA 25.00
#define VALORINTEIRA 50.00

int main () {
	//VARI?VEIS UTILIZADAS NO C?DIGO
    setlocale(LC_ALL,"Portuguese");
    int repeteCodigo = 0;
    int i, quantSessoes, quantEspectadores, idadeEspectador, quantMeia = 0, quantInteira = 0, somaValores, somaValoresMeia = 0, somaValoresInteira = 0;
    int quantHomem = 0, quantMulher = 0, verificaSessoes, verificaEspectador, homensCriancas = 0, homensAdolescentes = 0, homensAdultos = 0, homensIdosos = 0;
    int idadeHomem = 0, idadeMulher = 0, mulheresCriancas = 0, mulheresAdolescentes = 0, mulheresAdultas = 0, mulheresIdosas = 0;
    int mulherMaiorIdade, homemMaiorIdade;
    float comprouPipocaSim = 0, comprouPipocaNao = 0, porcentagemComprouPipoca;
    char nomeFilme[100];
    char sexoEspectador, formaEntrada, comprouPipoca;
//******************************************************************************************************************************************************************//


//Pergunta n?mero de sess?es
do{
 printf("Quantas sess?es ser?o realizadas: ");
 scanf("%d", &quantSessoes);
 //Permite apenas 2 sess?es
 if(quantSessoes!=2){
     printf("Quantidade invalida\n\n");
     verificaSessoes=0;
     }else{
         verificaSessoes=1;
    }
 }while(verificaSessoes!=1);
 
 
 //inicia repeti??o do c?digo
while(repeteCodigo < 2){
repeteCodigo = repeteCodigo + 1;

	
//Pergunta quantas pessoas assistiram
	printf("\n****************************************************************");	 
	 do{
	 printf("\nQuantas pessoas assistiram ? sess?o: ");
	 scanf("%d", &quantEspectadores);
	 if(quantEspectadores<10){
	     printf("Quantidade invalida\n\n");
	     verificaEspectador=0;
	     }else{
	         verificaEspectador=1;
	    }
	 }while(verificaEspectador!=1);
	 
	 
//Pergunta qual o tipo do ingresso 
	printf("\n****************************************************************");
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
		 	printf("Forma Inv?lida!");
			 i--;
		 }
	 }
	 
	 
//Pergunta se quer Pipoca ou n?o 
	printf("\n****************************************************************");	 
	for(i=1; i<=quantEspectadores; i++){
		printf("\nO espectador %d comprou pipoca: (S)im ou (N)?o ", i);
		scanf("%s", &comprouPipoca);
		if(comprouPipoca == 's'||comprouPipoca == 'S'){
			comprouPipocaSim = comprouPipocaSim + 1;
		}else if (comprouPipoca == 'n'|| comprouPipoca == 'N'){
			comprouPipocaNao = comprouPipocaNao + 1;
		}else { 
			printf("Op??o Inv?lida!");
			i--;
		}
	} 

	
//Pergunta o sexo do espectador	
	printf("\n****************************************************************");
	 fflush(stdin);
	for(i=1; i<=quantEspectadores; i++){
	    printf("\nQual o sexo do espectador %d: (M)asculino ou (F)eminino: ", i);
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
	printf("\n****************************************************************");
	for(i = 1; i<=quantHomem; i++){
		printf("\nQual a idade do Homem %d: ", i);
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
			printf("Voc? ? velho demais para sair de casa!\n");
			i--;
		}
		else if (idadeHomem <= 2){
			printf("Voc? ? jovem demais para sair de casa\n");
			i--;
		}
	}


//pergunta a idade dos espectadores do sexo feminino	
	printf("\n****************************************************************");
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
			printf("Voc? ? velho demais para sair de casa!\n");
			i--;
		}
		else if (idadeMulher <= 2){
			printf("Voc? ? jovem demais para sair de casa\n");
			i--;
		}
	}


	//Pergunta filme
	fflush(stdin);
	printf("**************************************");
	printf("\nQual o nome do filme dessa sess?o: ");
	fgets(nomeFilme, 100, stdin);
	
	
	
	
	//mostra o nome do filme
	printf("\n****************************************************************");
	printf("\nO nome do filme ?: %s", nomeFilme);
	
	//responde sobre os valores dos ingressos
	printf("\n************************************************************");
	printf("\n A soma dos valores das entradas meias ?: %d", somaValoresMeia);
	printf("\n A soma dos Valores das entradas Inteiras ?: %d", somaValoresInteira);
	somaValores = somaValoresMeia + somaValoresInteira;
	printf("\n A soma dos valores das inteiras com as meias ?: %d", somaValores); 
	
	
	//responde sobre a quantidade de ingressos
	printf("\n****************************************************************");
	if(quantMeia>quantInteira){
		printf("\n\nTiveram mais meias que inteiras");
	}else if(quantInteira>quantMeia){
		printf("\nTiveram mais inteiras que meias");
	}else{
		printf("\nA quantidade de meias e inteiras s?o as mesmas");
	}
	
	
	//responde a porcentagem dos espectadores que comprar PIPOCA
	printf("\n****************************************************************");
	porcentagemComprouPipoca = (comprouPipocaSim / quantEspectadores) * 100;
	printf("\n\n%.1f por cento dos espectadores compraram pipoca!", porcentagemComprouPipoca);
	
	
	//responde quantidade de telespectadores de cada sexo
	printf("\n****************************************************************");	
	printf("\n\n%d = quantidade homens", quantHomem);
  	printf("\n\n%d = quantidade mulheres", quantMulher);
  	
  	
  	//responde quantas crian?as,adolescentes, adultos e idosos de cada sexo
	printf("\n****************************************************************");  	
  	printf("\nMulheres Crian?as: %d\n", mulheresCriancas);
	printf("Mulheres Adolescentes: %d\n", mulheresAdolescentes);
	printf("Mulheres Adultas: %d\n", mulheresAdultas);
	printf("Mulheres Idosas: %d\n\n", mulheresIdosas);
	printf("Homens Crian?as: %d\n", homensCriancas);
	printf("Homens Adolescentes: %d\n", homensAdolescentes);
	printf("Homens Adultos: %d\n", homensAdultos);
	printf("Homens Idosos: %d\n", homensIdosos);
	
	
  	//responde qual sexo esteve mais presente na sess?o
	printf("\n****************************************************************");  	
  	homemMaiorIdade = homensAdultos + homensIdosos;
	printf("\nA quantidade de homens maior de idade s?o: %d\n", homemMaiorIdade);
	mulherMaiorIdade = mulheresAdultas + mulheresIdosas;
	printf("A quantidade de mulheres maior de idade s?o: %d\n", mulherMaiorIdade);

		
} //finaliza repeti??o do c?digo	

 return(0);
}
