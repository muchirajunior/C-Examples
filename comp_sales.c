#include <stdlib.h>
#include <stdio.h>

int main(){
    float monitor1,monitor2,monitor3,motherboard1,motherboard2,desktop1,desktop2;
    float m1_disc=0.07, m2_disc=0.1,m3_disc=0.15,m1_tax=0.17,m2_tax=0.14,d1_disc,d2_disc;
    printf("******************************************************************\n");
    printf("\n student myname \n");
    printf("******************************************************************\n");

    printf("please enter the cost of three monitors :");
    scanf(" %f",&monitor1);
    scanf(" %f",&monitor2);
    scanf(" %f",&monitor3);   

    printf(" item \t original price \t discount \n");
    printf(" ********** \t ************ \t ********* \n");
    printf(" monitor 1 \t %f \t %f \n",monitor1,m1_disc);
    printf(" monitor 2 \t %f \t %f \n",monitor2,m2_disc);
    printf(" monitor 3 \t %f \t %f \n",monitor3,m3_disc);

    float monitor_total=monitor1+monitor2+monitor3;;
    float monitor_disc_total=(monitor1*(1-m1_disc))+(monitor2*(1-m2_disc))+(monitor3*(1-m3_disc));
    printf("averange price of all monitors %f \n",monitor_total/3);
    printf("averange price of all with discount monitors %f \n",monitor_disc_total/3);
    printf("******************************************************************\n");

    printf("please enter the price of motherboard 1 :");
    scanf(" %f",&motherboard1);
    printf("\n please enter the price of motherboard 2 :");
    scanf(" %f",&motherboard2);
    printf("\n item \t original price \t price(with tax) \n");
    printf(" ********** \t ************ \t ********* \n");
    printf(" monitor 1 \t %f \t %f \n",motherboard1,motherboard1*(1+m1_tax));
    printf(" monitor 2 \t %f \t %f \n",motherboard2,motherboard2*(1+m2_tax));
    printf("\n Averange price of all motherboards : %f \n",((motherboard1*(1+m1_tax)+motherboard2*(1+m2_tax))/2));
   
    printf("******************************************************************\n");
     printf("please enter the price and discount of desktop 1 :");
    scanf(" %f %f",&desktop1,&d1_disc);
    printf("\n please enter the price and discount of desktop 2 :");
    scanf(" %f %f",&desktop2,&d2_disc);
    printf("\n item \t original price \t after discount \n");
    printf(" ********** \t ************ \t ********* \n");
    printf(" monitor 1 \t %f \t %f \n",desktop1,desktop1*(1-d1_disc));
    printf(" monitor 2 \t %f \t %f \n",desktop2,desktop2*(1-d2_disc));
    printf("\n total price of all motherboards : %f \n",desktop1*(1-d1_disc)+desktop2*(1-d2_disc));
   

    printf("******************************************************************\n");




    return 0;

}