#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int h1,m1,s1,h2,m2,s2,finhour,finmim,finsec,time;
    printf("�п�J�_�l�ɶ��G");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("�п�J�����ɶ��G");
    scanf("%d:%d:%d", &h2, &m2, &s2); 
    finhour = h1-h2;
    finmim  = m1-m2;
    finsec  = s1-s2;
	finhour = abs(finhour);
    finmim = abs(finmim);
    finsec = abs(finsec);
    time = finhour * 3600 + finmim * 60 + finsec;
    printf("\n��Ӯɶ����j��Ƭ�: %d\n", time);
    system("pause");
    return 0;
}
