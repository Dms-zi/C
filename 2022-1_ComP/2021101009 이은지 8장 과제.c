/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARR_SIZE 10

void f(int *arr, int num);
int main(void){
    srand(time(NULL));
    int array[ARR_SIZE] = { 0 };
    f(array, 99);

    return 0;}

void f(int *arr, int num){

printf("������ arr�� �ּ� = %d\n", &arr);
 for (int i = 0; i< ARR_SIZE; i++){
    arr[i] = (rand() % num) + 1;
    printf("%3d ", arr[i]);
    printf("������ arr+%d = %d, *(arr+%d) = %d, arr[%d]�� �ּ� = %d, data = %d\n", i, arr+i, i, *(arr+i), i, &arr[i], arr[i]);
}
}*/ //8�� 
/*#include <stdio.h>
#define ARR_SIZE 10

void f(int * arr, int size, int cd);
 int main(void){
    int num1 = 0;
    int cd = 0;
    
    printf("ù ��° ��?");
    scanf("%d", &num1);
   printf("����? ");
   scanf("%d", &cd);
   
   int arr[ARR_SIZE] = { num1 };
   
   f(arr, ARR_SIZE, cd); 
 }
 
 void f(int * arr, int size, int cd){
 	printf("������ arr�� �ּ� = %d\n", &arr);
 	printf("�������� ���\n");
    printf(" %d ", arr[0]);
    printf("������ arr+%d = %d, *(arr+%d) = %d, arr[%d]�� �ּ� = %d, data = %d\n", 0, arr+0, 0, *(arr+0), 0, &arr[0], arr[0]);
    for ( int i = 1; i < size; i++){
       arr[i] = arr[i - 1] + cd;
       printf("%d " , arr[i] );
       printf("������ arr+%d = %d, *(arr+%d) = %d, arr[%d]�� �ּ� = %d, data = %d\n", i, arr+i, i, *(arr+i), i, &arr[i], arr[i]);
    }
 }*///10�� 
 
#include <stdio.h>
#define ARR_SIZE 10
void print_arr(int *arr, int size);
int find(int *arr , int num);

int index[ARR_SIZE];
int main(void){
    int arr[ARR_SIZE] = {12, 45, 62, 12, 99, 83, 23, 12, 72, 37};
    int num = 0;
    print_arr(arr, ARR_SIZE);

    printf("ã�� ��?");
    scanf("%d", &num);
    int count = find(arr, num);
    printf("ã�� �׸��� ��� %d�� �Դϴ�. \n", count);
    printf("ã�� �׸��� �ε��� ������, �迭 �޸� �ּ�, �ε��� ��:\n ");
    print_arr(index , count);
 
 }
 
 void print_arr(int * arr, int size){
 printf("������ arr�� �ּ� = %d\n", &arr);
     for (int i = 0; i< size; i++){
          printf("������ arr+%d = %d, *(arr+%d) = %d, arr[%d]�� �ּ� = %d, data = %d\n", i, arr+i, i, *(arr+i), i, &arr[i], arr[i]);
    }
     
    }
    
 
 int find(int*arr, int num){
     int count = 0;
     int index_order = 0;
     for ( int i = 0; i < ARR_SIZE; i++){
         if(arr[i] == num){
             index[index_order] = i;
             index_order++;
             count++;
         }
     }
     return count;
 }//12��
  
