#include <iostream>
#include <string>

using namespace std;

#define MAX 100

struct Stack {
	char data[MAX];
	int top;
};

void init(Stack &s){
	s.top = -1;
}

bool isEmpty(Stack s){
	return s.top == -1;
}

bool isFull (Stack s){
	return s.top == MAX - 1;
}

void push(Stack &s , char c){
	if (isEmpty(s))
		cout << "Stack day!" << endl;
	else 
		s.data[++s.top] = c;
}

char pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack rong!" << endl;
        return '\0';
    } else {
        return s.data[s.top--];
    }
}


void push_string(Stack &s , string str){
	for (int i = 0; i < str.length(); i++)
		push(s,str[i]);
}

string pop_and_rebuild(Stack &s) {
	string reversed = "";
	while (!isEmpty(s)){
		reversed += pop(s);
	}
	return reversed;
}

int main() {
	Stack s;
	init(s);
	
	string input;
	cout << "Nhap chuoi : ";
	getline(cin,input);
	
	push_string(s, input);
	string reversed = pop_and_rebuild(s);
	
	cout << "Chuoi dao nguoc : " << reversed << endl;
	
	return 0;
}

