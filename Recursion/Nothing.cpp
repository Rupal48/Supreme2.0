#include <iostream>
#include <cstring>
#define SIZE 100
struct stack {
    int top;
    char list[SIZE];
};
void push(stack *p, char elem) {
    if (p->top < SIZE) {
        (p->top)++;
        p->list[p->top] = elem;
    }
}
char pop(stack *p) {
    if (p->top > -1) {
        return p->list[p->top--];
    }
    else return -1;
}
void print(stack *p) {
    std::cout << std::endl;
    for (int i = (p->top); i >= 0; i--)
        std::cout << p->list[i] << " ";
}
int main() {
    char a[8][7] = {"E->E+E", "E->E*E", "E->E-E", "E->E/E", "E->E^E", "E->(E)", "E->-E", "E->d"};
    char b[] = "d+d*d";
    char flag;
    int j;
    stack s;
    s.top = -1;
    std::cout << "\nThe grammar is" << std::endl;
    for (int i = 0; i < 8; i++) {
        std::cout << a[i] << std::endl;
    }
    std::cout << "\nthe string is" << std::endl;
    std::cout << b << std::endl;
    std::cout << "\nThe stack implementation is::";
    for (int k = 0; k < strlen(b); k++) {
        push(&s, b[k]);
        print(&s);
        j = s.top;
    }
    return 0;
}