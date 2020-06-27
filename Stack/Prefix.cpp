#include <iostream>
#include <stack>
#include<cstring>
using namespace std;

int prefix(char exp[])
{
	stack<int> stack;

	for (int i = strlen(exp)-1; i >=0; i--)
	{
		if (exp[i] >= '0' && exp[i] <= '9') {
			stack.push(exp[i] -'0');
		}
		else
		{
			int x = stack.top();
			stack.pop();

			int y = stack.top();
			stack.pop();

			if (exp[i] == '+')
				stack.push(x+y);

			else if (exp[i] == '-')
				stack.push(x-y);

			else if (exp[i] == '*')
				stack.push(x*y);

			else if (exp[i] == '/')
				stack.push(x/y);
		}
	}
	return stack.top();
}

int main()
{
	char exp[50];
    cout<<"Enter a Prefix Exxpression : ";
    cin>>exp;
	cout << "The Result of Prefix Expression is : " << prefix(exp);

	return 0;
}