#include <stdio.h>

int main(){

char name[10], city[30], phonenum[15];


printf("�̸� �Է��ϼ���: ");
scanf("%s" , name);
getchar();

printf("��°�  �Է��ϼ���: ");
scanf("%s" , city);
getchar();

printf("�̸� �Է��ϼ���: ");
scanf("%s" , phonenum);
getchar(); 
printf("\n");


printf("�� �̸��� %s �̸�, %s�� ���������, ����ó�� %s �Դϴ�. ", name, city, phonenum );
}

/*int main(){

int a,b;

printf("������ ����: ");
scanf("%d", &a);

printf("������ ����: ");
scanf("%d", &b);
printf("\n");

printf("�簢���� �ѷ� : %d\n �簢���� ����: %d", 2*(a+b),a*b); 
}*/

/*int main(){

char cal; 
int a,b;
float result; 

printf("�� ������  �Է��ϼ���.: ");
scanf("%d %d",&a,&b);
fflush(stdin);
printf("��Ģ����(+,-,*,/)��ȣ�� �Է��ϼ���.:");
scanf("%c",&cal);

if (cal=='+'||cal=='-'||cal=='*'||cal=='/'){

switch(cal) 
{
	case'+': 
		result = a+b;
		break;
	case'-': 
		result = a-b;
		break;
	case'*':  
		result = a*b;
		break;
	case'/': 
		if (b==0)
			{printf("0���δ� ������ �����ϴ�.");
			break;} 
		else
			result = a/b;
			break;			
} 
}
else
	printf("��������(+,-,*,/) ��ȣ�� �Է��ϼ���.\n");
	 
printf("%d %c %d = %f\n",a,cal,b,result);

printf("���� a�� �ּ� = %d, data=%d\n", &a,a);
printf("���� b�� �ּ� = %d , data=%d\n", &b,b);
printf("���� c�� �ּ� = %d , data=%.f\n", &result,result);

return 0;
}*/
