1,![栈顶指针](http://ww1.sinaimg.cn/large/006kDro9ly1g1lzcj5p3dj30y803vwhi.jpg)

2，[stack]使用pop()和top()函数之前，必须使用empty()函数验证栈是否为空；
[queue]使用pop()，get_front(),get_rear()之前必须用empty().

3，队列：rear>>front，元素从rear进入；

4，线性表->{顺序表，**链表**}，前者可以理解为是数组；
```cpp
    struct node{
        typename data;  //数据域
        node* next;     //指针域
    };
```
![图示1](http://ww1.sinaimg.cn/large/006kDro9ly1g1nj3t97i0j30om06ft9z.jpg)
具体的操作如下：
```cpp
node* node1=new node;
node* node2=new node;
node* node3=new node;
node* node4=new node;
node* node5=new node;
node1->data=5;
node1->next=node2;
node2->data=3;
node2->next=node3;
node3->data=6;
node3->next=node4;
node4->data=1;
node4->next=node5;
node5->data=2;
node5->next=NULL;
```
但一般情况下用for循环来创建链表；
![图示2](http://ww1.sinaimg.cn/large/006kDro9ly1g1nk64xuzpj30nd0h0q7a.jpg)

5，malloc函数是C语言stdlib.h头文件中申请动态内存的函数，其返回类型是申请同变量类型的指针:  
```cpp
typename* p=(typename*)malloc(sizeof(typename));
```
new运算符是C++中用来申请动态空间的运算符，其返回类型是申请的同变量类型的指针；
```cpp
typename* p=new typename;
```
6,C/C++中程序员必须自己控制内存的分配与释放，有着对内存的高度控制操作权，所以使用malloc与new开辟出来的空间在使用完成后必须将其释放，否则会造成内存泄漏；

7，free函数：
```cpp
typename* p=(typename*)malloc(sizeof(typename));
free(p);        //free两个作用，释放内存，将P指向空地址NULL(P并没有消失)；
```
另外还有delete函数，它的作用与free函数的作用相似；

8，