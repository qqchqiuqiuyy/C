#include <stdio.h>

double range(double [], size_t);	//�󼫲� 
void input(double [], size_t);	//�����ڸ�Դ�ļ��Ҳ�������ʱ��������Ŀ�ڱ��Դ�ļ�Ѱ�Һ������� 

int main(int argc, char *argv[]) {
	double nums[10];
	printf("����10����: ");
	input(nums, 10);
	printf("������: %f\n", range(nums, 10));
	return 0;
}

/*
	����һ��ӵ�ж��Դ�ļ�����Ŀ��
	Dev-C++: �ļ�-�½�-��Ŀ-Console Application(����̨Ӧ�ó���)-ѡ��C����-�޸���Ŀ�����ύ
	�㿪�����Ŀ���������ӻ�ɾȥԴ�ļ�(����ͼ-������Ŀ������) 
	
	����д�ã�ȷ�������ļ�������󣬲ſɽ������ϱ��� 
*/ 
