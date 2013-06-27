#include<stdio.h>

void fileread()
{

int i,k,n;
printf("First Input Text File => No. of Rows : ");
scanf("%d",&n);

    double input[n][3];
    char filename[256];
    printf("First Input Text File Name : ");
    scanf("%s",filename);
    printf("\n");

FILE *file;
file = fopen(filename,"r");

if(file==NULL)
    printf("file not found!");

for(i=0; i<n; i++)
{
    for(k=0; k<3; k++)
    {
        fscanf(file,"%lf",&input[i][k]);
        printf("%11.10f ",input[i][k]);
    }printf("\n");
}
fclose(file);

}

void main()
{

 fileread();

}
