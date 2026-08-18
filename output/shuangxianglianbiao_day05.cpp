#include <iostream>
using namespace std;
const int N = 1e6 + 10;
int e[N],ne[N],pre[N],h,id;
int temp[N];

//头插
void push_front(int x){
    id++;
    e[id] = x;
    pre[id] = h;
    ne[id] = ne[h];
    pre[ne[h]] = id;
    ne[h] = id;
    temp[x] = id;
} 
void print(){
    for(int i = ne[h] ; i ; i = ne[i]){
      cout << e[i] <<" ";
    }
    cout << endl;
}
//按值查找
int find (int x){
  return temp[x];
}
//任意位置插入
void insert(int p ,int x){
      id++;
      e[id] = x;
      temp[x] = id; 

      pre[id] =p;
      ne[id] = ne[p];
      pre[ne[p]] = id;
      ne[p] = id;
}
//在任意位置之前插入
void insert_before(int p,int x){
    id++;
    e[id] = x;
    temp[x] = id;

    ne[id] = p;
    pre[id] = pre[p];
    ne[pre[p]] = id;
    pre[p] = id;
}
//删除位置为p
void delect(int p){  
    ne[pre[p]] = ne[p];
    pre[ne[p]] = pre[p];
}
int main(){
    push_front(1);
    print();
    push_front(2);
    print();
    return 0; 
}