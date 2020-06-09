//
//  main.c
//  ÁrbolGeanológico
//
//  Created by Vairon Walder on 08/06/20.
//  Copyright © 2020 Vairon Walder. All rights reserved.
//

#include <stdio.h>

int opc,n=0;

int main() {
    printf("--------- Arbol Genealogico --------\n");
    printf("\n1.-Primera Gneracion\n2.-Segunda generacion\n3.-Tercera Generacion\n4.-Cuarta generacion\n5.-Quinta generacion\n6.-Sexta generacion\nOpcion: ");
    scanf("%d",&opc);
    printf("\n");
    switch(opc){
        case 1:
            printf("Pedro y Rocio(Bisabuelos Abraham,padres de Isidro) , Daniel y Martha (Bisabuelos de Abraham, padres de Maria) , Miguel y Juana (Bisabuelos de Abraham, padres de Francisco) , Pedro y Cruz(Bisabuelos de Abraham, padres de Hilda");
            printf("\n1.-Hermanos de Pedro y Rocio\n2.-Hermanos de Daniel y Martha\n3.-Hermanos de Miguel y Juana\n4.-Hermanos de Pedro y Cruz\nOpcion: ");
            scanf("%d",&n);
                    if(n==1){
                    printf("\nHermanos de Pedro: Santiago y Christopher , Hermanos de Rocio: Luna y Jesus");
                    }
                    else if(n==2){
                    printf("\nHermanos de Daniel: Damina y Edwing , Hermanos de Martha: Kenia y Miriam");
                    }
                    else if(n==3){
                    printf("\nHermanos de Pedro: Veronica y Samantha , Hermanos de Rocio: Jessica y Angel");
                    }
                    else{
                    printf("\nHermanos de Pedro: Fernanda y Paco, Hermanos de Rocio: Pedro y Efrain");
                    }
        break;
            
        case 2:
            printf("Isidro y Maria(Abuelos paternos de Abraham) , Francisco e Hilda (Abuelos maternos de Abraham");
            printf("\n1.-Hermanos de Isidro\n2.-Hermanos de Maria\n3.-Hermanos de Fracisco\n4.-Hermanos de Hilda\nOpcion: ");
            scanf("%d",&n);
                    if(n==1){
                    printf("\nJesus y Miriam");
                    }
                    else if(n==2){
                    printf("\nGerman y Angelica");
                    }
                    else if(n==3){
                    printf("\nTomasa y Guadalupe");
                    }
                    else{
                    printf("\nRosa y Mario");
                    }
            
        break;
            
        case 3:
            printf("\nEduardo y Elizabeth(Papas de Abraham y Diana");
            printf("\n1.-Hermanos de Eduardo\n2.-Hermanos de Elizabeth\nOpcion: ");
            scanf("%d",&n);
            if(n==1){
                           printf("\nRaul y Angel(Tios de Abraham)");
                       }
                       else{
                           printf("\nFernando(Tio de Abraham)");
                       }
        break;
            
        case 4:
            printf("Abraham y Pamela , Diana e Irvin");
        break;
            
        case 5:
            printf("1.-Hijos de Abraham y Pamela\n2.-Hijos de Diana e Irvin\nOpcion: ");
            scanf("%d",&n);
            if(n==1){
                printf("\nVairon y Viviana");
            }
            else{
                printf("\nRuby y Jorge");
            }
            
        break;
            
        case 6:
            printf("1.-Hijos de Vairon(nietos de Abraham)\n2.-Hijos de Viviana(nietos de Abraham\nOpcion: ");
            scanf("%d",&n);
            if(n==1){
                printf("\nKenia y Aristos");
            }
            else{
                printf("\nGrecia y Zamael");
            }
        break;
            
    }
    
    printf("\n\n");
    return 0;
}
