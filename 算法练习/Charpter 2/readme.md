1,变量可以在定义的时候就赋初值；


2，对于浮点型，小心使用float，大多数时间使用double；


3，字符常量必须用单引号标注（否则会出错）；


    //不能把字符串赋值给字符串常量；


    //C语言中没有字符串这个数据类型，我们使用字符数组进行替代；


    //字符串输出使用%s


4，C语言中若要使用布尔型变量，应该导入<stdbool.h>;


5，谨慎使用宏定义#define，有原封不动代入的陷阱


    //#define max(a,b) ((a)>(b)?(a):(b))


6, 数组格式前面没有取地址符号，因为“数组名字本身就代表了数组第一个
元素的地址”<！一维数组>；


7，除了%C之外，所有的标志符号都以空白符和换行符作为结束标志；


8,scanf与printf的唯一不同在于double格式（前者为%lf,%f）;


9,log_a(b)=log_e(b)/log_e(a);


10,c语言空语句直接加一个分号；


//-----------------------------------------------------
11，注意continue是跳过（再执行）程序，把不要执行的放到它的下面；


12，sscanf支持正则表达式；


13,在函数中对数组元素进行修改就同时对原数组元素进行了修改，这一点与局部变量不同；


14，指针指向内存地址，如果恰好该内存地址是某个变量的地址，那么我们说指针就是指向了这个变量；


    //指针变量存放指针，或者可以说是存放地址；


    //不准确的说法，指针就是变量的地址；


    //指针是一个unsigned类型的整数；


    //int* p=&a是把a的地址给p，而不是*p；


    //其中p是地址，而*p就是地址中所存储的东西了；


    //变量p储存的必须是int型的数据类型；


    //a[j]=*(a+j);&a[j]=a+j


15，引用必须是产生变量的别名，而不能是常量；


    //对常量进行操作时，应该将他们赋给指针，再做打算；


16, C语言只有在定义字符数组的时候才能用“=”来初始化变量，其它情况下是不能直接用“=”来为字符数组赋值的，要为字符数组赋值可以用string.h头文件中的strcpy函数来完成。


17, 构造函数在结构体内元素较多的时间使代码较为简洁，且代码工整；


18，const后面要加分号；


19，数组作为函数的参数时，填写其名称即可；
    //一个函数中的变量名称不得与数组名称相同；