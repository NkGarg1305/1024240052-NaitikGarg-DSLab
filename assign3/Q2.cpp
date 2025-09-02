
void insertAtBottom(stack<int> &s, int element) {
    // Base case
    if (s.empty()) {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    // Recursive call
    insertAtBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int> &s) {
    // Base case
    if (s.empty()) {
        return;
    }

    int num = s.top();
    s.pop();

    // Recursive call
    reverseStack(s);

    insertAtBottom(s, num);
}