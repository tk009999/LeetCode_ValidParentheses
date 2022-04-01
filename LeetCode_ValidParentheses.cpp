// LeetCode_ValidParentheses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
	
	stack<int> st;
	for (auto c : s)
	{
		if (c == '(') {
			st.push(')');
			cout << "1" << "\n";
		}
		else if (c == '[') {
			st.push(']');
			cout << "2" << "\n";
		}
		else if (c == '{') {
			st.push('}');
			cout << "3" << "\n";
		}
		else if (!st.empty() && st.top() == c) {
			st.pop();
			cout << "4" << "\n";
		}
		else {
			cout << "5" << "\n";
			return false;
		}
	}

	cout << "6" << "\n";
	return st.empty();
}

int main()
{
	cout << "Hello World! Result is " << isValid("([){}") << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
