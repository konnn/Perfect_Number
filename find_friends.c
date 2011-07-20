/* Αυτό προγραμματάκι βρίσκει εάν ένας αριθμός έχει φίλο */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int div_sum(int a){
int k=0;
int z=0;
int b=0;
for(k=1;k<=a/2;k++){
	if((a%k)==0){
         
		b=b+k;}
        
		}
       //  printf("Το άθροισμά των διαιρέτων του %d  είναι %d \n" ,a,b );
		

	return b;
}

main(){


/*int i=0;
int j=0;
printf ("Δώσε ένα αριθμό,για να βρούμε αν έχει φίλο, και πατήστε enter :\n");
scanf ("%d",&i);
j=div_sum(i);
if(div_sum(j)==i) printf ("Άρα αριθμοί %d και %d είναι φίλοι.\n ", i,j );
else 
printf("Ο αριθμός %d δεν έχει φίλο.\n" , i);*/
FILE * pFile;
int i;
int j;
int k;
int l;
int x;
int y;
int z;
int m;
i=j=k=l=x=y=z=m=0;
//int j=0;
printf ("Δώσε το κάτω άκρο του πεδίου αναζήτησης πλην του αριθμού 0 και πατήστε enter :\n");
scanf ("%d",&i);
printf ("Δώσε το άνω άκρο του πεδίου αναζήτησης  και πατήστε enter :\n");
scanf ("%d",&j);
if (j<i) {printf ("Δώσε το άνω άκρο του πεδίου αναζήτησης μεγαλύτερο του κάτω και πατήστε enter :\n"); scanf ("%d",&j); }
pFile = fopen ("myfile.txt","w");
for(k=i;k<j;k++){
	//for(l=k+1;l<j;l++){
y=div_sum(k);
if(div_sum(y)==k){  printf ("Οι αριθμοί %d και %d είναι φίλοι.\n ", k,y );
fprintf (pFile, "Οι αριθμοί %d και %d είναι φίλοι.\n",k,y);
}
//l++;



/*int a[2][l];
a[x]=y;
a[x+1]=k;
printf("%d %d",y,k);
x++;

}
//a=(int **)malloc(2 * l);


//for(z=0;z<x;z++){

 */

else 
printf("Ο αριθμός %d δεν έχει φίλο.\n" , k);
}

fclose (pFile);

/* GNU v2 */
}

