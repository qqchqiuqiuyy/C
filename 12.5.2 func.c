static unsigned seed = 1;	//�������ʼ����

unsigned rand(void)
{
	/* ����α���������֮��ʽ */
	seed = seed * 1103515245 + 12345;	//��������Ҫ�������޹أ�����ʹ��seed��ֵ�������
	return (unsigned) (seed / 65536) % 32768;	//��������0 - 32767���� 
}

void srand(unsigned _seed)
{
	seed = _seed;	//�ı���������ӵ�ֵ 
} 

//�������������Ҫ�����ǣ���ʼ����ֵ����seed��˵�ֵ����ӵ�ֵҪ�����ܲ���� 
