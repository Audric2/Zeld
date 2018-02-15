#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE_X 10
#define TAILLE_Y 10


struct monstre{
		int xm;
		int ym;};

typedef struct monstre monstre;

monstre CreerMonstre(int x, int y){
	monstre M1;
	M1.xm = x;
	M1.ym = y;
return M1;
}

monstre DeplaMonstre(int tab[TAILLE_X][TAILLE_Y], int x, int y, struct monstre M)
	{
	int rnd;

	M.xm=5;
	M.ym=5;
	rnd=rand()%4;
	if(rnd==0){
		x++;
		M.xm++;
	}
	else if (rnd==1){
		y++;
		M.ym++;
	}
	else if (rnd==2){
		x--;
		M.xm--;
	}
	else{
		y--;
		M.ym--;
	}
	//printf("%d ||| %d",x,y);
	return M;
}
int main ()
	{
	struct monstre M1;
	int tab[TAILLE_X][TAILLE_Y]={0};
	srand(time(NULL));
	M1 = CreerMonstre(5,5);
	int M1x= M1.xm;
	int M1y= M1.ym;
	printf("%d,%d\n",M1x,M1y);
	M1 = DeplaMonstre(tab,5,5,M1);
	M1x= M1.xm;
	M1y= M1.ym;
	printf("%d,%d\n",M1x,M1y);
	
return 0;
}
