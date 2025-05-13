#include <stdio.h>
#include <stdlib.h>


int triangularTriblet(int a[],int n){
int i=0,j=0,k=0;
for (int i=0;i<n;i++){
    if (a[i]<0)
        return 0;
}
for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
                for(k=j+1;k<n;k++){
            if (a[i]+a[j]>a[k] && a[i]+a[k]>a[j] && a[j]+a[k]>a[i])
                return 1;
                }
        }
    }
return 0;
}


int main()
{

    int i=0,n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter your numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("output :%d",triangularTriblet(a,n));


    return 0;


}




