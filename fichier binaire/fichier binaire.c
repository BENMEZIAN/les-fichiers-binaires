#include<stdio.h>
#include<stdlib.h>

  // les fonctions du fichier binaires
  /*
    fwrite()                : permet d'ecrire dans un fichier
    fread()                 : permet de lire depuis un fichier

    exemple:

    fwrite(&pos,sizeof(pos),1,f);
    fread(&pos,sizeof(pos),1,f);
  */

typedef struct position{
    int x;
    int y;
}position;

main(){

	FILE *f;
	position pos;
	pos.x=150;
	pos.y=100;

	f=fopen("essaye.bin","rb");

	if(f==NULL){
		printf("erreur d'ouverture de fichier.\n");
		exit(EXIT_FAILURE);
	}

	fread(&pos,sizeof(pos),1,f);

	printf("x=%d et y=%d",pos.x,pos.y);

	fclose(f);
}
