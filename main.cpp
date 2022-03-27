#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool is_balanced(const string& s);

int main() {
	string line;
	cout << "Enter line: ";
	getline(cin, line);
	while (line.size()) {
		if (is_balanced(line))
			cout << "String is properly balanced.\n";
		else
			cout << "String is not balanced.\n";
		cout << "Enter line: ";
		getline(cin, line);
	}
	return 0;
}

bool is_balanced(const string& s) {
	stack<char> stk;
	for (int i = 0; i < s.size(); i++) {
		switch (s[i]) {
		// If an opening paren, bracket or brace, push onto stack
		case '(':
		case '[':
		case '{':
			stk.push(s[i]);
			break;
		// If closing paren, check top of stack for a match, then pop
		case ')':
			if (stk.empty() || stk.top() != '(')
				return false;
			stk.pop();
			break;
		// If closing bracket, check top of stack for a match, then pop
		case ']':
			if (stk.empty() || stk.top() != '[')
				return false;
			stk.pop();
			break;
		// If closing brace, check top of stack for a match, then pop
		case '}':
			if (stk.empty() || stk.top() != '{')
				return false;
			stk.pop();
			break;
		}
	}
	return stk.empty();
}