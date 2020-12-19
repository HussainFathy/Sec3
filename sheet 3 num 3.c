#include <stdio.h>
#include <stdlib.h>

static const char *strings[] = {"one","two","three","four","five",
                                "six","seven","eight","nine"};

int main()



{
    int k ,m,n,s, all , num , GivenNumber , inswitch ;
    printf("please enter 1 ,2,3\n");

    scanf("%d", &s );

    if(s==1)
    {
        printf("please enter k,m,n\n");

        scanf("%d %d %d",&k,&m ,&n);

        for(all=m;all<=n;all=all+1)
        {
            if(all%k==0){

            printf("%d\n", all);}
        }


    }
    else if(s==2)
        {   printf("please enter a number to print it in letters :");
            scanf("%d",&GivenNumber );

            if(GivenNumber-9<=0 )
            {
                inswitch=1;
            }
            else if(GivenNumber-99<=0)
            {
                inswitch=2;
            }
            else { inswitch=3; }


     if(inswitch==1)
     { printf("%s",strings[GivenNumber-1]);
        }


     else if(inswitch==2)
     {
         printf("\ntwo units ");
        }

     else {printf("\nthree units ");}


        }












    return 0;

}
