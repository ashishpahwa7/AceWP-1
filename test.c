#include<stdio.h>
#include<stdio.h>
int BubbleSort(int A[] ,int);
void swap(int *X , int *Y );

int BubbleSort( int *A , int array_size )
{
	int i , j ;

	for(j=0; j<array_size; j++)
	{
		for( i=0; i<array_size-j-1; i++)
			{

			if(A[i] >= A[i+1])
			swap(&A[i],&A[i+1]);

			}
	}

return 0 ;

}

void swap(int *A , int *B )
{
	int temp;

	temp= *A;
	*A = *B;
	*B = temp;

}

//**********************************************************************************************************************************************
#define size 101

//Driver Program to test the function
int main() 
{
  int i;
  int A[size];


   printf("Array before sorting is : \n ");

//Generating random array 

  for (i = 0; i < size; i++) 
   {
    A[i] = rand() % 1000 + 1;
    
    printf("%d ", A[i]) ;
    
   }

printf("\n Array after sorting is : \n");
	//Insert sort function here
	BubbleSort(A,size);

// Now Printing sorted array
 
for(i=0;i<size;i++)
{
	printf("%d ", A[i]);
}
 
  return 0;

}

