/* Αυτό προγραμματάκι βρίσκει εάν ένας αριθμός έχει φίλο */

#include <stdio.h>

int div_sum(int a){
int k=0;
int z=0;
int b=0;
for(k=1;k<=a/2;k++){
	if((a%k)==0){
         
		b=b+k;}
        
		}
         printf("Το άθροισμά των διαιρέτων του %d  είναι %d \n" ,a,b );
		

	return b;
}

main(){
int i=0;
int j=0;
printf ("Δώσε ένα αριθμό,για να βρούμε αν έχει φίλο, και πατήστε enter :\n");
scanf ("%d",&i);
j=div_sum(i);
if(div_sum(j)==i) printf ("Άρα αριθμοί %d και %d είναι φίλοι.\n ", i,j );
else 
printf("Ο αριθμός %d δεν έχει φίλο.\n" , i);

/* GNU v2 */
}

