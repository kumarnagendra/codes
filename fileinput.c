#include<stdio.h>

int main()
{
    int i,k,n;
    printf("First Input Text File => No. of Rows : ");
    scanf("%d",&n);
    
        float input[n][12];
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
        for(k=0; k<12; k++)
        {
            fscanf(file,"%f",&input[i][k]);
            printf("%f ",input[i][k]);
        }printf("\n");
    }
    fclose(file);

return 0;
}
