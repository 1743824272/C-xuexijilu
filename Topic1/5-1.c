//const���α���
#include <stdio.h>
#include <malloc.h>

int main()
{
    //const���εĵİɱ���a
    const int a = 1;

    //p��ָ��a��ַ��ָ��
    int *p = (int *)&a;

    //�˴������ֱ���޸ĵĻ��Ǳ�����
    //a = 3;

    printf("%d\n",a);

    //��Ϊconst���εı��ʻ��Ǳ�������ͨ��ָ��ֱ�ӷ����ڴ�ȥ�޸�ֵ
    *p = 5;

    //�˴���Ȼ���Ըı�a��ֵ���������������ԭ����ֵ����Ϊ����ʹ�õ���g++����������ʽ�ı���������gcc���ǿ��Ըı�ģ�
    printf("%d\n",a);

    return 0;
} 