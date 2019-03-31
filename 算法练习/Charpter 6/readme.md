0，STL中介绍一些常见而且好用的容器；
    - node代表结构体类型；
    - insert,erase以迭代器为参数；
    - **数组->指针，容器->迭代器**；
    - STL可分为容器(containers)、迭代器(iterators)、空间配置器(allocator)、配接器(adapters)、算法(algorithms)、仿函数(functors)六个部分。

1,Vector：
    - **Vector可以理解为变长数组**
    - （储存数据）可以当作未定数的数组使用；
    - 用邻接表储存图；

2,Set:
    - **内部自动有序且不含有重复元素**
    - 自动排序，排除重复元素；
    - set红黑树排序；

3,String
    - **方便对字符串进行操作**

4,Map
    - **映射**
    ![常用于](http://ww1.sinaimg.cn/large/006kDro9ly1g1dqhtrp22j30ul03odic.jpg)

5，Queue
    - **队列**
    - 先进先出
    ![常用于](http://ww1.sinaimg.cn/large/006kDro9ly1g1ds3gelv6j30xj04y0vo.jpg)

6，Priority_queue
    - **优先队列**
    - operator 重载操作符
    - 功能与sort函数相反
    - 结构体数组比较庞大时，需要引用来提高效率
    ![常用于](http://ww1.sinaimg.cn/large/006kDro9ly1g1eap6gudzj30xp02cmyf.jpg)

7,Stack
    - **栈**
    - 后入先出
    - ![use](http://ww1.sinaimg.cn/large/006kDro9ly1g1k32gloyhj30y5054wig.jpg)

8，