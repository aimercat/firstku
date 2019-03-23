/*---------------------------------------------------
定义一个struct Date 以保存日期的轨迹。提供一些函数，从输入读Date，
向输出写Date，以及用一个日期去初始化Date。
----------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;
const int N = 20;
struct Date
{
	int num[3];
	string name[3];
};
 
struct Date* input()
{
	char ch;
	int j = 1;
	struct Date *idat = new struct Date[N];
	Date temp = {1992, 10, 10, "year", "month", "day"};
	*idat = temp;
	cout << "Please input your farvorate date\n"
		 << "(the next line to input and 'q' to quit):";
	while ((ch = cin.get()) != 'q')
	{
		if (j < N)
		{
			for (int i = 0; i < 3; i++)
				cin >> idat[j].num[i];
			idat[j].name[0] = "year";
			idat[j].name[1] = "month";
			idat[j].name[2] = "day";
		}
		j++;
	}
	for (; j < N; j++)
		for (int i = 0; i < 3; i++)
		{
			idat[j].num[i] = 0;
			idat[j].name[i] = '/0';
		}
	return idat;
}
 
void show(struct Date* sdat)
{
	cout << "\nNow, let's show the date:\n";
	cout << sdat->name[0] << "	"
		 << sdat->name[1] << "	"
		 << sdat->name[2] << endl;
	int i = 0;
	while (sdat[i].num[0] != 0)
	{
		cout << sdat[i].num[0] << "	"
			 << sdat[i].num[1] << "	"
			 << sdat[i].num[2] << endl;
		i++;
	}
	delete [] sdat;
}
 
int main()
{
	struct Date *dat;
	dat = input();
	show(dat);
 
	return 0;
}


