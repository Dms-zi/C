#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 5

 

double get_sum(const double arr[], int size)

{

    printf("������ arr�� �ּ� = %d, data = %d, size�� �ּ� = %d, data = %d\n", &arr, arr, &size, size);

int i;

    double sum = 0;

    for (i = 0; i < size; i++){

    sum += arr[i];

    printf("������ arr+%d = %d, *(arr+%d) = %f, arr[%d]�� �ּ� = %d, data = %f\n", i, arr+i, i, *(arr+i), i, &arr[i], arr[i]);

} return sum;

}

int main(void)

{

    double x[SIZE] = { 0 };

    int i;

    printf("�迭x�� �ּ� = %d, x[0]�� �ּ� = %d, data = %d\n", x, &x[0], x[0]);
    printf("�Ǽ� %d���� �Է��ϼ���: ", SIZE);

    for (i = 0; i < SIZE; i++) {
       scanf("%lf", &x[i]);
    }

    printf("�հ�: %f\n", get_sum(x, SIZE));

}
