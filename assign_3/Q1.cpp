#include <iostream>
using namespace std;
#define MAXLEN 100

typedef struct
{
    int element[MAXLEN];
    int top;
} stack;

stack init ()
{
    stack S;
    S.top = -1;
    return S; }


int isEmpty ( stack S )
{
    if (S.top == -1)
        return true;
    else
        return false;
}

int isFull ( stack S )
{	return (S.top == MAXLEN - 1);
}

int top ( stack S )  //or peek()
{	if (isEmpty(S))
    cout<<"Empty stack\n";
    else
    return S.element[S.top]; }

stack push ( stack S , int x )
{	if (isFull(S))
        cout<<"OVERFLOW\n";
    else
	{	++S.top;
	    S.element[S.top] = x;
	}
	return S;
}

stack pop (stack S)
{
    if (isEmpty(S))
        cout<<"UNDERFLOW\n";
    else{
        cout<<"\nElement popped is: "<<S.element[S.top];
        S.top--;}
    return S;
}
void print ( stack S )
{	int i;
    for (i = S.top; i >= 0; --i)
        cout<<S.element[i]<<" ";
}

int main()
{	stack S;
    S = init();
    S = push(S,85);
    S = push(S,45);
    S = push(S,15);
    S = push(S,50);
    cout<<"\nCurrent stack : ";
    print(S);
    cout<<"\nTop is pointing to = "<<top(S);
    S = pop(S);
  
    cout<<"\nCurrent stack : ";
    print(S);
    cout<<"\nTop is pointing to = "<< top(S);
    return 0;
}

