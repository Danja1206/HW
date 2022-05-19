#include <iostream>

using namespace std;

class Stack 
{
public:
	void reset() 
	{
		stackCount = 0; 
		for (int i = 0; i < 10; i++)
		{
			stack[i] = 0;
		}
	}
	bool push(int _val) 
	{ 
		if (stackCount < 10)
		{
			stack[stackCount] = _val;
			stackCount++;
			return true;
		}
		else return false;
	}
	void pop() 
	{ 
		stack[stackCount - 1] = 0;
		stackCount--;
	}
	void print()
	{ 
		for (int i = 0; i < 10; i++)
		{
			if (stack[i] != NULL)
			{
				cout << stack[i];
			}
		}
		cout << endl;
	}
private:
	int stack[10], stackCount;
};

int main()
{
	Stack stack;
	stack.reset();
	stack.print();
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();
	stack.print();
	return 0;
}

