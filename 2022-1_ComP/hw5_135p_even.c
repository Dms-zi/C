#include <stdio.h>

int main(){
	unsigned int num;
	printf("16������ �����͸� �Է��ϼ���: ");
	scanf("%x",&num);
	int i, s;
	for(s=0; s<=sizeof(num); s++){
		for (i=0; i<=(sizeof(num)); i++){
			int a=(num>>s) & 0xff; //&��Ʈ����ũ, >>��Ʈ�̵� 
			printf("byte %d: %x\n",i, a);	
			s+=8;}	
			}	
	}
	
	

/*int main(){
	int time, hour, min, second;
	
	printf("��� �ð� (��)? ");
	scanf("%d",&time);
	
	hour= time/3600;
	min= time%3600/60;
	second=time%60;
	
	printf("����ð��� %d�� %d�� %d�� �Դϴ�.",hour,min,second);
	
}*/ // 136p 8�� 

/*int main(){
	double kg, ms, J;
	
	printf("����(kg)?");
	scanf("%lf",&kg);
	printf("�ӷ�(m/s)?");
	scanf("%lf",&ms);
	
	J= kg*ms*ms/2;
	printf("������� : %0.2lf J", J);
}*/ // 136p 6�� 


/*int main(){
	int month;
	
	printf("�� ��? ");
	scanf("%d",&month);
	
	if (month>=1 && month <=12){
		printf("�ùٸ� ���Դϴ�.");
	}
	else {
		printf("�߸��� ���Դϴ�.");
	}
	return 0;
}*///135p 3�� 

