#include <bits/stdc++.h>
using namespace std;
struct Table
{
	int min;
	int max;
	int cur;

};
int main()
{
	
	int d,sumTime;
	cin >> d >> sumTime;
	int totalTime=0;
	vector<Table>time(d+1);
	for(int i=1;i<=d;i++)
	{
		cin >> time[i].min >> time[i].max;
		time[i].cur = time[i].min;
		totalTime += time[i].cur;
	}
	if(totalTime > sumTime)
	{
		cout << "NO";
		return 0;
	}
	for(int i=1;i<=d;i++)
	{
		if(totalTime == sumTime)break;
		int dif = sumTime - totalTime;
		int timeDif = time[i].max - time[i].min;
		if(dif <= timeDif)
		{
			time[i].cur+=dif;
			totalTime += dif;
			break;
		}
		time[i].cur = time[i].max;
		totalTime += timeDif;
	}
	if(sumTime-totalTime>0){cout << "NO";return 0;} 
	cout << "YES\n";
	for(int i=1;i<=d;i++)
	{
		cout << time[i].cur << ' ';
	}
	return 0;
}
