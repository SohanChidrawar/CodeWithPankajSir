#include<stdio.h>

int swap(int A[], int j, int i)
{   
    int p = A[j];
    A[j] = A[i];
    A[i] = p;
}

int Partition(int A[], int p, int r)
{
    int pivot = A[r];
    int i = p-1;

    for(int j=p;j<r;j++)
    {
        if(A[j]<=pivot)
        {
            i = i+1;
            swap(A,j,i);
        }
    }
    swap(A,r,i+1);
    return i+1;
}

int QuickSort(int A[],int p,int r)
{
    if(p<r)
    {
        int q = Partition(A,p,r);           //divide 
        QuickSort(A,p,q-1);                 // recresively solve subproblem
        QuickSort(A,q+1,r);
    }
}


int main()
{
    int A[] = {5,7,1,6,9,3,2,4};
    int m = sizeof(A)/sizeof(A[0]);
    int p=0;
    int r=m;

    QuickSort(A,p,r);

    for(int i=0;i<=m;i++)
        printf("%d ",A[i]);

}
