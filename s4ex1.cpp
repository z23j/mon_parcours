/* ==========================================================================
 Fichier tableaux1.c
 Manipulation des tableaux 1D-
 ===========================================================================*/
#include <stdio.h>
#include <stdlib.h>
#define MAX1 50                 // Constante Taille maximum tableau 1D 
int main(){
  int t[MAX1];                  // Déclaration t tableau 1D d'entiers 
  int n;                        // Dimension (taille) tableau 1D 
  int i;                        // indice parcours tableau 
 // Affichage titre
 printf("\n ***************** Manipulation Tableaux 1D ************* \n\n");
 // ------------- Tableaux 1D : Saisie -------------------
 printf("\n\n --> Saisie du tableau 1D \n");
 // Saisie de la taille du tableau 
 printf("\n Saisir la taille du tableau : ");
 scanf("%d",&n);
 printf("\n"); 
 // Saisie des valeurs du tableau 1D
 for (i=0;i<n;i++){
   printf("Entrer t[%d]:",i);
   scanf("%d",&t[i]);
 }
 // -------------- Tableaux 1D : Affichage Vertical -------
 printf("\n\n --> Affichage vertical du tableau 1D de base \n\n ");
 for (i=0; i<n;i++){
    printf("t[%d] = %d \n ",i,t[i]);
 }
 	printf("\n\n\n");
//-----------affichage a l'envers--------
 printf("affichage a l'envers \n");
 for(i=n-1;i>=0;i--){
 	printf("%d \n",t[i]);
 }
 //---------affichage des entiers pairs------
 printf("Affichage des entiers pairs \n");
 for(i=0;i<n;i++){
 	if (t[i]%2==0){
	 printf("%2d \n",t[i]);
 	}
 }
 //--------permutation du tableau-----
 int u;
 int v;
 int tmp;
 printf("Permutation du tableau \n");
 printf("Entrer les indices \n");
 scanf("%d %d",&u, &v);
 if (u>n||v>=n)
 {
 	printf("Saisir des indices inferieurs a n \n\n");}
 	else{
 	  tmp=t[u];
 	  t[u]=t[v];
 	  t[v]=tmp;
 	  for (i=0;i<n;i++){
 		printf("t[%d]=%d \n",i,t[i]);
		}
}
 //--------Affichage des valeurs mini et maxi-------
 int valMax;
 int valMin;
 int posMax;
 int posMin;
 printf("Affichage des valeurs mini et maxi \n");
 valMax=t[0];
 posMax=0;
 valMin=t[0];
 posMin=0;
 for(i=1;i<n;i++){
 	if (t[i]>valMax){
 		valMax=t[i];
 		posMax=i;}
 	if (t[i]<valMin){
 		valMin=t[i];
 		posMin=i;}
 }
 printf("La valeur minimale est %2d avec indice %2d \n",valMin,posMin);
 printf("La valeur maximale est %2d avec indice %2d \n",valMax,posMax);
 //-----------Extraction d'un sous tableau--------
 int p;
 int j;
 int pos;
 int t2[MAX1];
 printf("Entrer le nb d'elements et la position de debut \n");
 scanf("%d %d",&p,&pos);
 printf("Extraction des valeurs \n");
 
 j=0;
 for (i=pos;i<=pos+p-1;i++){
 	t2[j]=t[i];
 	printf("%d \n",t2[j]);
 	j=j+1;
 }
 //--------Decalage des valeurs-------
 printf("Decalage des valeurs du tableau\n");
 for(i=0;i<n-1;i++){
 	printf("t[%d] =%d \n",i,t[i+1]);
 }
 //---------Rotation des valeurs-------
 int pla;
 printf("Rotation des valeurs \n");
 printf("Entrer le nombre de places \n");
 scanf("%d",&pla);
 i=0;
 while (i<pla){
 	tmp=t[0];
 
 	for(j=0;j<(n-1);j++){
	 t[j]=t[j+1];
 	}
 	t[n-1]=tmp;
 	i=i++;
 }
 for(i=0;i<n;i++){
 	printf("t[%d] =%d \n",i,t[i]);
 }
 printf("\n\n");
 system("pause");
 return 0;}
