#include <stdio.h>
#include <stdlib.h>

float salary[5];  
int age[5];
char gender[5];
void salary_input();
void ranking();
void age_gender_input()
{
  
    int n=0;
    
    int males=0;
    int females=0;
    int male_total=0;
    int female_total=0;
    int total_age=0;
     printf(" enter the age and gender(M for male and F for female) for five employees :\n");
    while (n<5)
    {
         scanf(" %d %c",&age[n],&gender[n]);
         

        if (gender[n]=='M')
         {
           males=males+1;
           male_total=male_total+age[n];
           
         }

         if (gender[n]=='F')
         {
             females=females+1;
             female_total=female_total+age[n];
             
         }
        total_age= total_age+ age[n];
         n=n+1; 
  
    }

    
    printf("\n averange age  of male employes : %d \n",male_total/males);
    printf("averange age  of female employes : %d \n",female_total/females);
    printf(" Total age  of all employes : %d \n",total_age);
 
}



int main()
{
   
    age_gender_input();
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");  
    salary_input(); 

    float total_salary=0;
    for (int i = 0; i < 5; i++)
    {
        if (salary[i]>=800 && salary[i]<1100){
            salary[i]=salary[i]*0.93;
        }
        if (salary[i]>=1100 && salary[i]<=1800){
            salary[i]=salary[i]*0.95;
        }
        if (salary[i]>1800 && salary[i]<=2600){
            salary[i]=salary[i]*0.91;
        }
        total_salary=total_salary+salary[i];
    
     }

      printf("\n Total salary is : %f \n",total_salary);


    ranking();


   printf("\n \t  student name:name***** section=05***  id: 7777**** semester:SP21 \n ");

    
    return 0;

}


void salary_input()
{
  printf("enter  salaries of 5 employees:"); 
 int x=0;
   
    while (x<5)
    {
    
        if( 1 != scanf(" %f",&salary[x]) )
    {
        perror( "scanf for second number failed" );
        exit( EXIT_FAILURE );
    }
           
        x=x+1;
    }

   
    
}

void ranking()
{
    int rank;
    int company_id=0;
    int RPE=0;
    int bonus=0;
    printf("\n Enter the rank of the company :");
    
    if( 1 != scanf("%d",&rank) )
    {
        perror( "scanf for second number failed" );
        exit( EXIT_FAILURE );
    }
    printf("\n Enter the revenue per employee (RPE) of the company :");
    
    if( 1 != scanf("%d",&RPE) )
    {
        perror( "scanf for second number failed" );
        exit( EXIT_FAILURE );
    }
    printf("\n Enter the company Id:");
    
    if( 1 != scanf("%d",&company_id) )
    {
        perror( "scanf for second number failed" );
        exit( EXIT_FAILURE );
    }
    if (RPE<1000){
        bonus=14;
    }
    else if (RPE>=1200 && RPE < 3500)
    {
       bonus=10;
    }
    else
    {
        bonus=4;
    }
    
    printf("\t Your company id : %d \n \t Your rank is: %d \n\t your bonus is : %d \n",company_id,rank,bonus);
}