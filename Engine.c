#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

#define TAILLE_Y 32
#define TAILLE_X 64

//ujgv g tg

void affichage(int tab[TAILLE_Y][TAILLE_X]){
	int i,j,o,p;
	for(i=0;i<TAILLE_Y;i++){
		for(j=0;j<TAILLE_X;j++){
			switch(tab[i][j]){
				case 0:
					printf(" ");			
				break;
				case 1:
					printf("#");				
				break;

				case 2:
					printf("%c",219);			
				break;
				case 3:
					printf("M");			
				break;
				default:
					printf(" ");	
				}			
			}
	printf("\n");
	}
}
int main(){
	srand(time(NULL));
	int k=0,tab[TAILLE_Y][TAILLE_X]={0};
	int l,m,nbMur,x,y,o,p;
	m=0.1*TAILLE_Y*TAILLE_X;
	nbMur=rand()%m;
	printf("__________\n");
	for(l=0;l<TAILLE_Y;l++){
		tab[l][0]=1;
		tab[l][TAILLE_X-1]=1;
		}	
	for(l=0;l<TAILLE_X;l++){
		tab[0][l]=1;
		tab[TAILLE_Y-1][l]=1;
		}
	for(l=0;l<nbMur;l++){
		y=rand()%TAILLE_Y-1;
		x=rand()%TAILLE_X-1;
		tab[y][x]=1;
		}
	y=rand()%TAILLE_Y-1;
	x=rand()%TAILLE_X-1;
	tab[y][x]=3;

	while(k<10){
		affichage(tab);
		k++;
		o=0;
		p=0;
		for(o=0;o<TAILLE_Y;o++){
			for(p=0;p<TAILLE_X;p++){
				if(tab[o][p]==3){x=o;y=p;printf("x=%d,y=%d\n",x,y);}
				}
			}	
	
		sleep(1);
	}
	printf("%d\n",nbMur);
	
}
