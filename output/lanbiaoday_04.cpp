//单链表


#include <iostream>
using namespace std;
const int N = 1e6+10;
int e[N] ,ne[N],h,id;
int temp[N];
//头插
void push_front(int x){
 id++;
 e[id] = x;
 ne[id] = ne[h];
 ne[h] = id;
 temp[x] = id;
}
//遍历
void print(){
    for(int i = ne[h];i != 0; i = ne[i]){
     cout << e[i] << " ";
    }
  cout << endl;
}
//按值查找
int find(int x){
      for(int i = ne[h];i != 0;i = ne[i]){
         if(e[i] == x)return i;
      }
      return 0;
}
//创建数组查找
int arr_find(int x){
      return temp[x];
}
//任意位置插入
void insert(int p,int x){
   id++;
   e[id] = x;
   temp[x] = id;
   ne[id] = ne[p];
   ne[p] = id;

}
//删除
void delect(int p){
   ne[p] = ne[ne[p]];
}

int main(){
for(int i = 1; i <= 5; i ++){
     push_front(i);
     print();


}
insert(1,100);
print();
delect(1);
print();

    return 0;

}