/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: 2025.1.08.027
 *
 * Created on 13 de março de 2025, 08:43
 */

#include <cstdlib>
#include <stdio.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float raio, altura, area, volume, areab;
    const float PI = 3.14;
    
   // raio = 0.8;
   // altura = 5.5;   
        
    printf("\n\n\tCálculo da area total e volume do cilindro:");
    
    printf("\t\ndigite o valor da altura:");
    scanf("%f", &altura);
    printf("\t\ndigite o valor do raio:");
    scanf("%f", &raio);
        
    
     areab=(PI*raio*raio);
            
    volume=(areab*altura);
    area=(2*PI*altura*raio+2*areab);  
    
    printf("\n\n\tvolume: %.2f\n\n", volume);
    printf("\n\tarea total: %.2f\n\n", area);  
    return 0;
}

