/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 25 de agosto de 2018, 08:43 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*
 * 
 */
int main() {
    float a,b,c;
    printf("Determina los valores de a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    float raiz =pow(b,2)-4*a*c;
    if (raiz<=0){
        printf("error, el resultado es imaginario");
    } else{
        float x1=((-1*b)+sqrt(raiz))/(2*a);
        float x2=((-1*b)-sqrt(raiz))/(2*a);
        printf("Los valores son \n x1=%f\n%f",x1,x2);
    }
    return 0;
}

