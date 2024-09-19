 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h> 
  
//Autor: Kelly Silva
 //Year: 2024
 // Course :Btech CSE

     int main(){
       //float a, b,c;
        float delta, x1, x2, xv, yv , a, b, c;

    printf("\t-------EQUACAO QUADRATICA-------\n\n\t");

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

            // calcula o delta
             //  delta  = b * b - 4 * a *c  ; 
             if (delta < 0){
               printf(" Nao possui raizes \n\t"); 
               
             } 
              else if( delta >= 0 ){
               x1 = -b/(2*a); 
               //suporte de duas casa decimais
               printf(" possui uma raiz onde  x =  %.2f\n" , x1);
      
             }else{
               x1 = (-b + sqrt(delta))/(2*a);
               //apresentacao da funcao 
               
               //quadratica e x negativo da  funcao
         
               x2 = (-b - sqrt(delta))/(2*a);

               printf(" Os zeros da funcao: x1 = %.2f , x2 = %.2f\n\t" , x1 , x2);
            
            
            }
             
             xv =  -b/( 2* a); 
             yv = -delta /(4 *a);
                return  0 ;


               // === final feliz +++
    
 }  

 