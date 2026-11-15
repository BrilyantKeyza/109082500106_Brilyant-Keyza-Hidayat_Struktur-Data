#include "stack.h"

void createStack(Stack &S) {
    S.top = 0;
}

void push(Stack &S, infotype x) {
    if (S.top < 20) {
        S.info[S.top] = x;
        S.top++;
    } else {
        cout << "Stack Penuh\n";
    }
}

infotype pop(Stack &S) {
    if (S.top > 0) {
        S.top--;
        return S.info[S.top];
    }
    return -1;
}

void printInfo(Stack S) {
    cout << "[TOP] ";
    for (int i = S.top - 1; i >= 0; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S) {
    int temp;
    for (int i = 0; i < S.top / 2; i++) {
        temp = S.info[i];
        S.info[i] = S.info[S.top - 1 - i];
        S.info[S.top - 1 - i] = temp;
    }
}

// Fungsi tambahan untuk Soal no 2
void pushAscending(Stack &S, infotype x) {
    Stack tempStack;
    createStack(tempStack);

    while (S.top > 0 && S.info[S.top - 1] > x) {
        push(tempStack, pop(S));
    }

    push(S, x);

    while (tempStack.top > 0) {
        push(S, pop(tempStack));
    }
}