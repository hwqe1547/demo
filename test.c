#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int cont[10]={0};
    while(a!=-1){
        if(a>=0&&a<=9){
            cont[a]++;
        }
        scanf("%d",&a);

    }
    for(int i=0;i<10;i++){
       printf("%d:%d\n",i,cont[i]);
    }


     return 0;
}





   