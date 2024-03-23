#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int rayon;
float pi = 3.14, p, s;
printf("Saisir le rayon du cercle:\n");
scanf("%d", &rayon);
p = 2*pi*rayon;
s = pi * pow(rayon,2);
printf("p = %.3f\n", p);
printf("s = %.3f\n", s);
}


/*
int main(){
int A, B, C;
float P,S;
printf("Saisir A, B et C:\n");
scanf("%d%d%d", &A, &B, &C);
P = (float)(A+B+C)/2;
S = P*(P-A)*(P-B)*(P-C);
S = sqrt(S);
printf("P = %.3f\n", P);

printf("S = %.3f", S);
}
*/
/*
int main()
{
// Declaration des variables
int R1, R2, R3, Rs;
float Rp;
R1=100;
R2 = 1e4;
R3 = 1e5;
Rs = R1+R2+R3;
Rp = 1./R1+1./R2+1./R3;
Rp=1/Rp;
//Affichage des résultats
printf("Rs = %d", Rs);
printf("\n");
printf("Rp = %.3f", Rp);
}
*/
