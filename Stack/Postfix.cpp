#include <iostream>
#include <stack>
#include<cstring>
using namespace std;

int postfix(char exp[])
{
	stack<int> stack;

	for (int i = 0; i < strlen(exp); i++)
	{
		if (exp[i] >= '0' && exp[i] <= '9') {
			stack.push(exp[i] - '0');
		}
		else
		{
			int x = stack.top();
			stack.pop();

			int y = stack.top();
			stack.pop();

			if (exp[i] == '+')
				stack.push(y + x);

			else if (exp[i] == '-')
				stack.push(y - x);

			else if (exp[i] == '*')
				stack.push(y * x);

			else if (exp[i] == '/')
				stack.push(y / x);
		}
	}
	return stack.top();
}

int main()
{
	char exp[50];
    cout<<"Enter a Postfix Exxpression : ";
    cin>>exp;
	cout << "The Result of Postfix Expression is : " << postfix(exp);

	return 0;
}