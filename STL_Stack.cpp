#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	queue<int> myqueue;
	for(;n--;)
	{
		int a, b;
		cin >> a;
		if(a == 1)
		{
			cin >> b;
			myqueue.push(b);
		}
		else
		{
			if(myqueue.empty())
				cout <<"empty"<<endl;
			else
			{
				cout << myqueue.front() << endl;
				myqueue.pop();
			}
		}
	}
	return 0;
}