#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	double a[200] = { 0 };//人员数据统计数组
	double b1 = 0;
	double b2 = 0;
	double tot = 0;//总分计算
	int xue[200] = { 0 };
	int qxue = 0;
	int bh = 0;//缺考编号
	int i = 0;
	int c= 0;//学生学号
	int r = 0;//班级人数
	int n = 0;//低于平均分的同学
	int que = 0;//缺考人数
	cout << "欢迎使用分数分析系统" << endl;
	cout << "请输入班级总人数（最多支持200人）：";
	cin >> r;
	cout << "请输入缺考人数（无人缺考填0）：";
	cin >> que;
	for (; ; )
	{
		if (que > 0)//统计缺考人员
		{
			for (int i1 = 0; i1 < que; i1++)
			{
				bh = bh + 1;
				qxue += 1;
				cout << "请输入缺考学生" << bh << "的学号";
				cin >> xue[qxue];
			}
			break;
		}
		else if(que==0)
		{
			break;
		}
	}
	for (int i2 = 0;i2 < r;i2++)//统计全班分数，自动排除缺考同学
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
			cout << "请输入学号" << c << "的分数：";
	        scanf_s("%lf",&a[i]);
		    tot = tot + a[i];
		}
	}
	b1 = tot *1.0/ r;//计算平均分
	b2 = tot * 1.0 / (r - que);
	cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n" << endl;
	cout << "低于全班平均分的名单（计入缺考学生）\n" << endl;
	for (int i4 = 0;i4 < r;i4++)//列出低于平均分同学的名单
	{
		i = i + 1;
		if (a[i] < b1)
		{
			n = n + 1;
			c = i+1;
			cout << "     学号" << c << "：" << a[i] << " 分" << endl;
		}
		else
		{
			continue;
		}
	}	
	cout << "\n共有" << n << "位同学低于平均分" << endl;
	if (que ==0)
	{
		cout << "无人缺考" << endl;
		cout << "\n（含缺考学生）平均分为：";
	    printf("%0.2lf\n", b1);//取小数点后两位
	}
	else
	{
		cout << "总共有"<<que<<"名学生缺考" << endl;
		cout << "\n（含缺考学生）平均分为：";
		printf("%0.2lf\n", b1);//取小数点后两位
        cout << "\n（不含缺考学生）平均分为：";
	    printf("%0.2lf\n\n", b2);//取小数点后两位
	}
	system("pause");
	return 0;
}
