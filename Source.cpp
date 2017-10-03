#include <cmath>
#include <cstdio>
#include <vector>
#include<deque>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */


	int q, type, x;

	cin >> q;
	deque<int> d;
		for (size_t i = 0; i < q; i++)
		{
			
			cin >> type;
			if (type == 1)
			{
				cin >> x;
				
				d.push_back(x);


			}
			else if (type == 2)
			{
				d.pop_front();

			}
			else if (type == 3)
			{

				cout << d.front()<<endl;
			}


		}



	return 0;
	system("pause");
}
