#include <stdio.h>

/*#define rate 0.3025

int main(){
	double mm,p;
	
	printf("����Ʈ�� ����(��������)? ");
	scanf("%lf",&mm);
	
	p=mm*rate;
	printf("%.2lf �������� = %.2lf ��" , mm,p);
}*/ //98p 9 �� 

int main(){
	int yd;
	double m;
 	
	printf("����(yd)? ");
	scanf("%d",&yd);
	
	m=0.9144*yd;
	printf("%d yd = %.6lf m",yd,m);
}//98p 7�� 

/*int main(){
	int USD,Ex;
	double KRW;
	
	printf("USD? ");
	scanf("%d",&USD);
	 
	printf("��/�޷� ȯ��? ");
	scanf("%d",&Ex);
	KRW=USD*Ex;
	printf("USD %d = KRW %0.2lf",USD,KRW);
	 
}*/ //97p 5�� 

/*int main(){
	int kg, m;
	double Ep;
	
	printf("����(kg)?");
	scanf("%d", &kg);
	
	printf("����(m)?");
	scanf("%d", &m);
	
	Ep=9.8*kg*m;
	printf("��ġ������: %.2lf J",Ep);
}*/ //97p 3�� 

