#include<stdio.h>
#include<math.h>

int mobius(int n)
{
	int i;
	int res=-1;//��ʼΪ����
    if(n==1)//1����1
    {
        return 1;
    }
    else
    {
        for(i=2; i<=sqrt(n); i++)//����������㣬�ж��������ã�ȡһ��������
        {
            //�ܽ�ȥif����Ŀ϶���������������������һ������ֱ�����-1������
            if(n%i==0 && n/i%i==0)//�����������һ���ƽ�����ӣ���Ȼ/i%iΪ0��Ҳ����i*i�����Ǹ���ȫƽ����
            {
                return 0;
            }
            else if(n%i==0)//������
            {
                res*=-1;//res�����ж�����Ϊ��������ż������һ�α�һ�Σ�ż��Ϊ1������Ϊ-1
                n/=i;
            }
        }
        return res;
    }
}
int main(void)
{
	int t, n;

	scanf("%d", &t);
	while(t>0)
	{
		scanf("%d", &n);
		printf("%d\n", mobius(n));
		t--;
	}
	
	return 0;
}