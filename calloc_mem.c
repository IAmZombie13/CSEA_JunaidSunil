#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Size of the array: ");
    scanf("%d",&n);
    int *arr=calloc(n,sizeof(int));
    if(arr==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);//Notice that, (arr+i) points to ith element
    printf("Given array: ");
    for(int i=0;i<n;i++)
        printf("%d",*(arr+1)); //Dereferencing the pointer
    printf("Removing first element ie, arr[0] = %d. \n",arr[0]);
    for(int i=1;i<n;i++)
        arr[i-1]=arr[i];   
    arr=realloc(arr,(n-1)*sizeof(int));
    printf("Modified Array: ");
    for(int i=0;i<n;i++)
        printf("%d",arr[i]);
    printf("\n");
    free(arr);
    return 0;
}

//output:
Size of the array: 5
Enter elements:
1 2 4 3 5
Given array: 22222Removing first element ie, arr[0] = 1. 
Modified Array: 24355
