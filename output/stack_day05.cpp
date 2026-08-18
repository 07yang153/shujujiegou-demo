//栈的顺序存储实现
#include <iostream>
using namespace std;
const int N  = 1e6 + 10;
int sta[N],n;
//进栈
void add(int x){
   sta[++n] = x;
}
//出栈
void pop(){
    n--;
}
//查询栈顶元素
int top(){
    return sta[n];
}
//判断是否为空
bool empty(){
    return n == 0;
}
//有效元素个数
int size(){
    return n;
} 
int main(){
    return 0;
}