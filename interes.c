    /*
        Modele la siguiente fórmula de interés compuesto
        
        CF = Capital Final
        CI = Capital Inicial
        I = Tasa de Interés
        N = Período del ahorro

        CF = CI * (1 + I) POW(N)
    */
    /*
        CF = float
        CI = float
        I  = float
        N =  int   
    */
    
#include <stdio.h>
#include <math.h>
int main(){
    float CF, CI, I;
    int N;
    /*
    REALIZAMOS LA OPERACIÓN DE LA ACITIVIDAD VISTA EN EL PIZARRÓN
    */
    CF = CI * pow(1 + I, N);
}        