#include <stdio.h>
#include <stdlib.h>


int main()  //Our Main func.
{
    int i;

    printf("How much number you want to convert?\n");
    scanf("%d",&i);
    printf("\n");

    for(i;i>0;i--){
        converter();
    }

    return 0;
}


void converter() //Decimal to Roman number converter func.
{
    int number,i= 0;
    char converted[400]={};
    printf("Please enter the number which you want to convert to roman numerals:\n");
    scanf("%d",&number);
    printf("Converted form:");
        while(number>=1000){
            number=number-1000;
            converted[i]= 'M';
            i++;
        }
        if(number<1000 && number>899){
            converted[i]= 'C';
            i++;
            converted[i]= 'M';
            i++;
            number=number-900;
            if (number>10)
                goto fiftys;
        }
        while(number>=500){
            number=number-500;
            converted[i]= 'D';
            i++;
        }
        if(number<500 && number>399){
            converted[i]= 'C';
            i++;
            converted[i]= 'D';
            i++;
            number= number-400;
            goto TensDigit;
        }
        while(number>=100){
            number=number-100;
            converted[i]= 'C';
            i++;
        }
    fiftys:

        if(89<number && number<100){
            converted[i]= 'X';
            i++;
            converted[i]= 'C';
            i++;
            number= number-90;
            goto TensDigit;
        }
        while(number>=50){
            number=number-50;
            converted[i]= 'L';
            i++;
        }
        if(number<50 && number>39){
            converted[i]= 'X';
            i++;
            converted[i]= 'L';
            i++;
            number=number-40;
            goto TensDigit;
        }
    TensDigit:

        while(number>=10){
            number=number-10;
            converted[i]= 'X';
            i++;
        }
        if(number==9){
            converted[i]= 'I';
            i++;
            converted[i]='X';
            i++;
            goto End;
        }
        while(number>=5){
            number=number-5;
            converted[i]= 'V';
            i++;
        }
        if(number==4){
            converted[i]= 'I';
            i++;
            converted[i]='V';
            i++;
            goto End;
        }
        while(number>=1){
            number=number-1;
            converted[i]= 'I';
            i++;
        }
    End:

        for(i=0;i<100;i++){
            printf("%c",converted[i]);
        }

        printf("\n\n\n");
}


