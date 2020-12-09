#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("P:\ sample.txt","w");
    {
        printf("Cannot open file to write sample.txt\n");
        return(0);
    }
    fprintf(fp,"this is sample data\n");
    fclose(fp);


}
