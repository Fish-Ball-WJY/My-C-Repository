#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	double a[200] = { 0 };//��Ա����ͳ������
	double b1 = 0;
	double b2 = 0;
	double tot = 0;//�ּܷ���
	int xue[200] = { 0 };
	int qxue = 0;
	int bh = 0;//ȱ�����
	int i = 0;
	int c= 0;//ѧ��ѧ��
	int r = 0;//�༶����
	int n = 0;//����ƽ���ֵ�ͬѧ
	int que = 0;//ȱ������
	cout << "��ӭʹ�÷�������ϵͳ" << endl;
	cout << "������༶�����������֧��200�ˣ���";
	cin >> r;
	cout << "������ȱ������������ȱ����0����";
	cin >> que;
	for (; ; )
	{
		if (que > 0)//ͳ��ȱ����Ա
		{
			for (int i1 = 0; i1 < que; i1++)
			{
				bh = bh + 1;
				qxue += 1;
				cout << "������ȱ��ѧ��" << bh << "��ѧ��";
				cin >> xue[qxue];
			}
			break;
		}
		else if(que==0)
		{
			break;
		}
	}
	for (int i2 = 0;i2 < r;i2++)//ͳ��ȫ��������Զ��ų�ȱ��ͬѧ
	{
		i = i;
		c =c+1;
		//cout << xue[qxue];
		if (c == xue[qxue])
		{
			cout<<1;
			qxue =qxue+1;
			continue;
		}
		else
		{
			cout << "������ѧ��" << c << "�ķ�����";
	        scanf_s("%lf",&a[i]);
		    tot = tot + a[i];
		}
	}
	b1 = tot *1.0/ r;//����ƽ����
	b2 = tot * 1.0 / (r - que);
	cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n" << endl;
	cout << "����ȫ��ƽ���ֵ�����������ȱ��ѧ����\n" << endl;
	for (int i4 = 0;i4 < r;i4++)//�г�����ƽ����ͬѧ������
	{
		i = i + 1;
		if (a[i] < b1)
		{
			n = n + 1;
			c = i+1;
			cout << "     ѧ��" << c << "��" << a[i] << " ��" << endl;
		}
		else
		{
			continue;
		}
	}	
	cout << "\n����" << n << "λͬѧ����ƽ����" << endl;
	if (que ==0)
	{
		cout << "����ȱ��" << endl;
		cout << "\n����ȱ��ѧ����ƽ����Ϊ��";
	    printf("%0.2lf\n", b1);//ȡС�������λ
	}
	else
	{
		cout << "�ܹ���"<<que<<"��ѧ��ȱ��" << endl;
		cout << "\n����ȱ��ѧ����ƽ����Ϊ��";
		printf("%0.2lf\n", b1);//ȡС�������λ
        cout << "\n������ȱ��ѧ����ƽ����Ϊ��";
	    printf("%0.2lf\n\n", b2);//ȡС�������λ
	}
	system("pause");
	return 0;
}