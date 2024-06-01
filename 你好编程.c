#define _CRT_SECURE_NO_WARNINGS //在VS系列中#define _CRT_SECURE_NO_WARNINGS这串代码必须写。如果不写。会报错的，
//双斜杠为注释:标注代码用途和思路。注释不会被编译。不会产生影响。
//#include<stdio.h>
//这是主函数，所有C语言代码都有起始入口。这个入口就是主函数main。进入主函数后。才能由主函数调用其他函数，每个C语言代码。有且只能一个主函数。
//int是整形
//int main()//main翻译中文表示主要的，重要的意思。在C语言中表示一个主函数。int为返回值类型为整数类型（integer)缩写。main是函数的名称称为主函数。（）括号以来输入参数的。函数也是可以输入一些值的。
//{//花括号内部是函数体。可以做一些处理。不能被省略的。函数内部可以处理一些事情
//	printf("Hello World\n");//printf是将HelloWorld显示在屏幕上，
//	//主函数返回值
//	return 0;//翻译成中文表示返回的，退回的。在C语言中表示函数的返回值。0是整数，0和第一个int对应。
//} //函数可以返回一些值。
////备注数学函数≠编程函数。计算机函数是先输入值然后返回值。
////通过上面的代码，可以得出。返回值类型 。函数名(输入参数值）{做点什么事情。最后retun 函数返回值;}
//调用函数、
//#include<stdio.h>
//int add(int a, int b)//函数定义，编译器知道。定义了一个add函数。
//{
//	return a + b;
//}
//int main()
//{
//	int result;
//	result = add(2, 3);//编译器可以正确调用add函数，
//	printf("%d", result);
//	return 0;
//} 
//如果把int main函数写到int add的上面则编译器无法 理解add函数，
//主函数被自动调用的。返回值给调用的程序。主函数返回值必须是int.
//变量
//#include<stdio.h>
//int add(int a, int b)//定义一个函数。叫add,然后赋值到a和d
//{
//	return a + b;//return (表达式); 有没有 () 都是正确的，为了简明，一般也不写 () 。再a+d.
//}
//int main()
//{
//	int result;//声明整形变量result
//	result = add(2, 3);//将add函数返回值存入变量result，等号=赋值运算符，赋值运算符：是将符号右边的值，装进左边变量的运算符。
//	       //add=(2+3)=a+b传给result,以后传给printf打印("%d",)
//	printf("%d", result);
//	return 0;
//}
//在C语言中，变量是用于存储数据的内存位置。你可以为变量指定一个名称（称为标识符）和一个数据类型，以便在程序中引用和操作它。
//以下是C语言中变量的一些基本概念：
//命名变量：
//变量名必须以字母或下划线_开始。
//变量名可以包含字母、数字和下划线，但不能以数字开始。
//变量名是区分大小写的（即myVar和myvar是两个不同的变量）。
//变量名不能与C语言的关键字冲突（如int, float, for, if等）。
//数据类型：
//C语言中的变量必须有明确的数据类型，以便编译器知道如何为变量分配内存和解释存储在其中的值。
//常见的数据类型有：int（整数）、float（单精度浮点数）、double（双精度浮点数）、char（字符）等。
//声明和初始化变量：
//声明变量是告诉编译器变量的名称和类型的过程。
//初始化变量是为变量分配一个初始值的过程。
//示例：
//c
//#include <stdio.h>  
//int main() {
//    int age; // 声明一个整型变量  
//    float salary; // 声明一个浮点数变量  
//    age = 30; // 初始化整型变量  
//    salary = 5000.0; // 初始化浮点数变量  
//    printf("Age: %d\n", age);
//    printf("Salary: %.2f\n", salary);
//    return 0;
//}
//在这个示例中，我们声明了两个变量age和salary，并分别初始化了它们。然后，我们使用printf函数打印了这两个变量的值。
//注意：在C语言中，如果你声明了一个变量但没有初始化它，那么它的值将是未定义的。试图使用未定义的变量值可能会导致不可预测的行为。因此，建议在声明变量时始终初始化它们。
//类型	合格的输入	参数的类型
//% a、% A	读入一个浮点值(仅 C99 有效)。	float*
//% c	单个字符：读取下一个字符。如果指定了一个不为 1 的宽度 width，函数会读取 width 个字符，并通过参数传递，把它们存储在数组中连续位置。在末尾不会追加空字符。	char*
//% d	十进制整数：数字前面的 + 或 - 号是可选的。	int*c
//% e、 % E、 % f、 % F、 % g、 % G	浮点数：包含了一个小数点、一个可选的前置符号 + 或 - 、一个可选的后置字符 e 或 E，以及一个十进制数字。两个有效的实例 - 732.103 和 7.12e4	float*
//% i	读入十进制，八进制，十六进制整数 。	int*
//% o	八进制整数。	int*
//% s	字符串。这将读取连续字符，直到遇到一个空格字符（空格字符可以是空白、换行和制表符）。	char*
//% u	无符号的十进制整数。	unsigned int*
//% x、 % X	十六进制整数。	int*
//% p	读入一个指针 。
//% []	扫描字符集合 。
//% %读 % 符号。
//我们再写一下
//#include<stdio.h>
//int aii(int c, int d)
//{
//	return c * d; //这里可以定义加减乘除。                                return和result不一样不要写错了，
//}
//int main()
//{
//	int result;
//	result = aii(5, 3);//（5*3=15)
//等于号是赋值运算符：将符号右边的值，装进左边变量的运算符。
//	printf("%d", result);
//  return 0; 
//}
// 总结，分析一下流程。函数开始运行，在主函数中调用了aii函数。传入5和3a的函数，将5和3进行相乘并返回了相乘的结果。之后通过赋值运算符将结果十五复制给了变量result,
// 我们再来思考一个问题，可不可以将int resullt这一句去掉呢？答案是不行的，因为这一行代码是声明变量的语句。变量必须先声明之后才能把使用，
//计算机运算符号。加(+），减（-），乘(*)，除（/）。和数学运算符号。加(+),减（-）,乘（×),除（÷）。
//在计算机编程中，特别是在使用Visual Studio 2022（VS2022）这样的集成开发环境（IDE）来编写C语言程序时，数学函数和C语言函数有着明显的区别。
//C语言函数和数学函数的区别。
//数学函数：
//数学函数是指在数学领域中定义和使用的函数，如三角函数（sin, cos, tan）、对数函数（log）、指数函数（exp）、幂函数（pow）等。这些函数描述了数学上的关系或操作，是数学理论的基础。
//在C语言编程中，这些数学函数通常通过包含标准数学库头文件（<math.h>）来使用。例如，你可以使用sin()函数来计算一个角度的正弦值，或者使用pow()函数来计算一个数的幂。
//C语言函数：
//C语言函数是指在C语言程序中定义和使用的函数。它们描述了如何执行特定的任务或操作，是C语言程序的基本构建块。
//C语言函数可以分为两类：库函数和自定义函数。库函数是C语言标准库提供的预定义函数，如printf()、scanf()等。自定义函数是程序员根据自己的需要定义的函数。
//C语言函数通常用于封装特定的代码块，以便在程序的其他部分重复使用。通过函数，你可以将复杂的程序分解为更小的、更易于管理的部分。
//区别：
//来源和定义：数学函数通常来自数学理论，而C语言函数是在C语言程序中定义和使用的。
//用途：数学函数主要用于执行数学计算和操作，而C语言函数则用于封装代码、实现特定的功能或任务。
//包含和使用：在C语言中，要使用数学函数，你需要包含<math.h>头文件。而C语言函数则可以直接在程序中定义和使用，或者通过包含其他头文件来使用库函数。
//扩展性：C语言函数可以通过自定义来扩展程序的功能，而数学函数则是固定的、不可更改的（除非你在数学领域有新的发现或定义）。
//总之，数学函数和C语言函数在来源、定义、用途和使用方式上都有明显的区别。在编写C语言程序时，你需要根据需要选择使用哪种类型的函数。
//标识符 关键词
//在前面的代码中有我们自己命名，用于指代某一个实体的名称。
//例如add result函数的参数ab都是一个标识符，
//标识符是由我们自己命名的一个特殊标识，用于表示一个变量，涵数或者其他实体的名称。并且要让编译器能够识别标识符。必须进行声明或者定义。例如add被定义成了一个函数，result ab被声成了一个整形类型的变量。如果编译器遇到一个未经定义或者声明的标识符。将会无法理解这个标识符具体是一个什么实体的名称，因此会报错，
//标识符命名规则
//在c语言中。标识符可以按照自己的喜好随意命名，但是必须遵循以下规则，标识符可以用小写字母。大写字母，数字和下划线命名,但是标识符的第一个字符必须是字母或者下划线，不能是数字。并且标识符是区分大小写的，
// 我们在思考一个问题，int是标识符吗？当然不是，首先int并不是我们随意命名的，其次int并不是任何一个实体的名称，int是C语言中的一个关键词。
// 关键字
// 关键词是在语言标准中规定的，C语言标准规定的，并且在代码中有着特殊的意义和用途。有特殊的意义和用途。因此关键字是不能作为一个标识符来进行使用的，不能作为标识符使用。
// 这个表格举例了C语言中所有的关键词
//好的，以下是对上述C语言关键词的简要说明：
//数据类型
//int: 用于声明整型变量，通常用于存储整数。
//char : 用于声明字符型变量，通常用于存储单个字符。
//float : 用于声明单精度浮点型变量，用于存储带小数点的数值。
//double : 用于声明双精度浮点型变量，比float提供更高的精度。
//void : 用于声明不返回任何值的函数，或用于指针，表示该指针不指向任何类型的数据。
//_Bool 或 bool : 用于声明布尔型变量，可以存储两个值：真（true）或假（false）。
//short : 用于声明短整型变量，占用的内存空间比int小。
//long : 用于声明长整型变量，占用的内存空间比int大。
//signed 和 unsigned : 这两个关键字用于指定整数类型的符号性。默认情况下，int、short 和 long 是有符号的，但可以通过添加unsigned关键字使它们变为无符号的。
//enum : 用于声明枚举类型，枚举类型是一种用户定义的数据类型，包含一组命名的整数值。
//struct : 用于声明结构体类型，结构体类型是一种复合数据类型，可以包含多个不同类型的成员。
//union : 用于声明联合体类型，联合体类型是一种特殊的数据结构，允许在相同的内存位置存储不同的数据类型。
//_Complex 或 complex : 用于声明复数类型，复数类型包含实部和虚部。
//_Imaginary 或 imaginary : 用于声明虚数类型，虚数类型是复数类型的一种特殊情况，只包含虚部。
//控制流
//if、else、switch、case、default : 这些关键字用于实现条件语句和选择语句，根据条件执行不同的代码块。
//while、do、for : 这些关键字用于实现循环语句，重复执行某个代码块。
//goto : 用于无条件跳转到程序中的指定位置。
//break、continue、return : 这些关键字用于改变程序的正常执行流程。break用于跳出循环或switch语句；continue用于跳过当前循环的剩余部分，开始下一次循环；return用于从函数中返回结果并结束函数的执行。
//存储类说明符
//auto : 默认的存储类说明符，用于声明自动存储期的变量。这些变量在函数内部定义，并在函数结束时自动销毁。
//register : 建议编译器将变量存储在寄存器中，以提高访问速度。但需要注意的是，编译器可以忽略这个建议。
//static: 用于声明具有静态存储期的变量或函数。这些变量在程序执行期间一直存在，不会随着函数的调用和返回而销毁。此外，static还可以用于限制变量的作用域。
//extern : 用于声明在其他文件中定义的变量或函数。这些变量或函数在多个文件中共享。
//_Thread_local : 用于声明线程局部存储期的变量。这些变量在每个线程中都有自己的副本，因此不同线程之间的同名变量不会相互干扰。
//其他
//const : 用于声明常量，常量在声明时必须初始化，并且其值在程序执行期间不能改变。
//volatile : 用于告诉编译器不要对该变量的访问进行优化，因为它可能在程序执行期间被意外地改变（例如，由硬件或其他线程）。
//typedef : 用于为数据类型定义别名，使代码更易于阅读和维护。
//Alignas、_Alignof、_Atomic、_Generic、_Noreturn、_Static_assert : 这些是C11或更新标准中引入的关键字，用于提供更高级的功能和类型检查。
//关键词
//数据类型
//char: 用于存储字符类型的数据。
//double : 用于存储双精度浮点数。
//float : 用于存储单精度浮点数。
//int : 用于存储整数。
//long : 用于存储长整数。
//short : 用于存储短整数。
//signed : 指定整数类型为有符号整数。
//unsigned : 指定整数类型为无符号整数。
//_Bool 或 bool : 在C99及以后的版本中，用于存储布尔值（true或false）。
//_Complex : 用于声明复数类型（C99及以后）。
//指针
//* : 指针操作符，用于声明指针变量或解引用指针。
//char* : 指向字符的指针。
//_Complex* : 指向复数的指针（C99及以后）。
//控制流
//break : 用于跳出当前循环或switch语句。
//case: 用于switch语句中，定义不同的分支。
//	continue : 用于跳过当前循环的剩余部分，进入下一次循环。
//default: 用于switch语句中，处理没有匹配case的情况。
//	do : 用于do - while循环。
//else: 用于if语句中，定义if条件不满足时执行的代码块。
//for : 用于for循环。
//goto : 用于无条件跳转到程序中的指定位置。
//if : 用于条件语句。
//return : 用于从函数中返回结果并结束函数的执行。
//switch : 用于多路选择语句。
//while : 用于while循环。
//存储类说明符
//auto : 用于声明自动存储期的局部变量（默认）。
//register : 建议编译器将变量存储在寄存器中（但现代编译器通常会忽略这个建议）。
//static: 用于声明具有静态存储期的变量（在函数外部时，表示作用域仅限于当前文件；在函数内部时，表示变量在函数调用之间保持其值）。
//extern : 用于声明在其他文件中定义的变量或函数。
//修饰符
//const : 用于声明常量，其值在程序执行期间不能被修改。
//volatile : 用于告诉编译器不要对该变量的访问进行优化，因为它可能在程序执行期间被意外地改变。
//restrict : 告诉编译器两个指针指向不同的内存区域，用于优化（C99及以后）。
//signed : 指定整数类型为有符号整数（默认）。
//unsigned : 指定整数类型为无符号整数。
//_Atomic : 用于声明原子类型变量，支持原子操作（C11及以后）。
//其他
//enum : 用于声明枚举类型。
//	sizeof : 用于获取数据类型或对象在内存中的大小（以字节为单位）。
//	struct : 用于声明结构体类型。
//	typedef : 为数据类型定义别名。
//	union : 用于声明联合体类型。
//	void : 表示空类型或无返回值。
//注意：
//	lmaginary* 、inlie* 和 restrict* 不是C语言的标准关键词，它们可能是拼写错误或误用。
//	extem 应该是 extern 的拼写错误。
//	_Imaginary 是C99及以后标准中用于声明虚数类型的关键词，但您给出的列表中并未包含它。
//	inline 是用于建议编译器将函数内联的关键词，但您给出的列表中并未包含它，
// 数据类型关键字  
// char        声明字符型变量或函数  
// double      声明双精度变量或函数  
// float       声明浮点型变量或函数  
// int         声明整型变量或函数  
// long        声明长整型变量或函数  
// short       声明短整型变量或函数  
// signed      声明有符号类型变量或函数  
// unsigned    声明无符号类型变量或函数  
// _Bool       声明布尔型变量（C99标准）  
// _Complex    声明复数类型（C99标准）  
// _Imaginary  声明虚数类型（C99标准）  
// void        声明函数无返回值或无参数，声明无类型指针  
// 存储类关键字  
// auto        声明自动变量  
// extern      声明变量是在其他文件中定义  
// register    声明寄存器变量  
// static      声明静态变量  
// _Thread_local 声明线程局部存储期变量（C11标准）  
// 流程控制关键字  
// break       跳出循环或switch语句  
// continue    结束当前循环迭代，开始下一次迭代  
// do          循环语句的循环体（用于do-while循环）  
// else        条件语句的否定分支  
// for         一种循环语句  
// goto        无条件跳转语句  
// if          条件语句  
// return      从函数中返回  
// switch      多分支选择语句  
// while       循环语句的循环条件  
// 其他关键字  
// const       声明只读变量  
// sizeof      获取数据类型或变量大小  
// volatile    说明变量在程序执行中可被隐含地改变  
// _Alignas    指定变量或类型的对齐方式（C11标准）  
// _Alignof    获取变量或类型的对齐要求（C11标准）  
// _Atomic     声明原子操作（C11标准）  
// _Generic    基于类型选择表达式（C11标准）  
// _Noreturn   函数不会返回（C11标准）  
// _Static_assert 在编译时进行断言（C11标准）  
// restrict    限制指针指向的数据只在当前作用域或函数内有效（C99标准）// 数据类型关键字  
// char        声明字符型变量或函数  
// double      声明双精度变量或函数  
// float       声明浮点型变量或函数  
// int         声明整型变量或函数  
// long        声明长整型变量或函数  
// short       声明短整型变量或函数  
// signed      声明有符号类型变量或函数  
// unsigned    声明无符号类型变量或函数  
// _Bool       声明布尔型变量（C99标准）  
// _Complex    声明复数类型（C99标准）  
// _Imaginary  声明虚数类型（C99标准）  
// void        声明函数无返回值或无参数，声明无类型指针  
// 存储类关键字  
// auto        声明自动变量  
// extern      声明变量是在其他文件中定义  
// register    声明寄存器变量  
// static      声明静态变量  
// _Thread_local 声明线程局部存储期变量（C11标准）  
// 流程控制关键字  
// break       跳出循环或switch语句  
// continue    结束当前循环迭代，开始下一次迭代  
// do          循环语句的循环体（用于do-while循环）  
// else        条件语句的否定分支  
// for         一种循环语句  
// goto        无条件跳转语句  
// if          条件语句  
// return      从函数中返回  
// switch      多分支选择语句  
// while       循环语句的循环条件  
// 其他关键字  
// const       声明只读变量  
// sizeof      获取数据类型或变量大小  
// volatile    说明变量在程序执行中可被隐含地改变  
// _Alignas    指定变量或类型的对齐方式（C11标准）  
// _Alignof    获取变量或类型的对齐要求（C11标准）  
// _Atomic     声明原子操作（C11标准）  
// _Generic    基于类型选择表达式（C11标准）  
// _Noreturn   函数不会返回（C11标准）  
// _Static_assert 在编译时进行断言（C11标准）  
// restrict    限制指针指向的数据只在当前作用域或函数内有效（C99标准）
// 标准库头文件  
// #include <stdio.h>      // 标准输入输出库  
// #include <stdlib.h>     // 标准库函数，如内存分配、随机数等  
// #include <string.h>     // 字符串操作函数  
// #include <math.h>       // 数学函数库  
// 函数指针和回调函数  
// typedef void (*CallbackFunc)(int); // 定义一个回调函数类型  
// void process(CallbackFunc callback, int data) {  
//     callback(data); // 调用回调函数  
// }  
// 宏（Macros）  
// #define MAX(a, b) ((a) > (b) ? (a) : (b)) // 定义一个求最大值的宏  
// GNU C编译器（GCC）扩展  
// __attribute__((constructor)) // 构造函数属性，用于在main函数之前执行  
// __attribute__((destructor))  // 析构函数属性，用于在main函数之后执行  
// __builtin_expect(expression, value) // 提示编译器可能的分支预测结果  
// C++和C的兼容性  
// 注意：C++支持类和对象、模板等特性，但C语言不支持  
// 内存管理  
// int* ptr = (int*)malloc(sizeof(int) * 10); // 动态分配内存  
// if (ptr != NULL) {  
//     // ... 使用ptr指向的内存 ...  
//     free(ptr); // 释放内存  
//     ptr = NULL; // 避免野指针  
// }  
// 其他常用概念  
// struct 结构体 // 用于组合多个不同类型的数据项  
// union 联合 // 允许在相同的内存位置存储不同的数据类型  
// enum 枚举 // 定义命名的整数常量集合  
// typedef 类型定义 // 为现有类型创建别名  
// ... 以及其他C语言编程中的概念和特性 ...// 标准库头文件  
// #include <stdio.h>      // 标准输入输出库  
// #include <stdlib.h>     // 标准库函数，如内存分配、随机数等  
// #include <string.h>     // 字符串操作函数  
// #include <math.h>       // 数学函数库  
// 函数指针和回调函数  
// typedef void (*CallbackFunc)(int); // 定义一个回调函数类型  
// void process(CallbackFunc callback, int data) {  
//     callback(data); // 调用回调函数  
// }  
// 宏（Macros）  
// #define MAX(a, b) ((a) > (b) ? (a) : (b)) // 定义一个求最大值的宏  
// GNU C编译器（GCC）扩展  
// __attribute__((constructor)) // 构造函数属性，用于在main函数之前执行  
// __attribute__((destructor))  // 析构函数属性，用于在main函数之后执行  
// __builtin_expect(expression, value) // 提示编译器可能的分支预测结果  
// C++和C的兼容性  
// 注意：C++支持类和对象、模板等特性，但C语言不支持  
// 内存管理  
// int* ptr = (int*)malloc(sizeof(int) * 10); // 动态分配内存  
// if (ptr != NULL) {  
//     // ... 使用ptr指向的内存 ...  
//     free(ptr); // 释放内存  
//     ptr = NULL; // 避免野指针  
// }  
// 其他常用概念  
// struct 结构体 // 用于组合多个不同类型的数据项  
// union 联合 // 允许在相同的内存位置存储不同的数据类型  
// enum 枚举 // 定义命名的整数常量集合  
// typedef 类型定义 // 为现有类型创建别名   
// ... 以及其他C语言编程中的概念和特性 ...
//上面的全部关键词不能作为标识符进行使用，
//常量
//有变量就会有不变的量，像二三这种数值就属于不变的量，我们称为常量。常量和变量是不一样的，常量不需要被声明。因为一旦常量写出来我们就可以立刻知道。像2，3这种数值，它是属于整形int类型的常量。同样的字符串字面常量也不需要被声明。
//例外双引号hello world,被双引号包括的“"hello world"我们就认为它是一个字符串，以区别于数值变量，变量可以赋值，我们可以通过赋值来更改，常量是不能更改的，所以不能对他进行赋值。
//2 = 3;和"Hello"="Hello"像这样直接对常量复制的写法是完全错误的，
//#include<stdio.h>
//int add(int a, int d)
//{
//	return a + d;
//}
//int main()
//{
//	int result;
//	result = add(2, 3);
//	printf("%d", result);
//	return 0;
//}
//printf函数
//前面我们已经学习了一些，基础的C语言知识了，现在我们在回到hello world那串代码，我们就明白了这串代码中大部分的含义了，
// #include<stdio.h> 用来包含标准输入输出库的头文件，这样程序就可以使用 printf 等函数了  
//#include<stdio.h> // 注意这里不要加多余的逗号或<stdio.h>  
//// int main() 是程序的入口点，C程序从这里开始执行。每个C程序都必须有一个main函数作为入口。  
//int main() 
//{   // 花括号 {} 用来定义 main 函数的开始和结束，函数体内的代码将在这里执行  
//    printf("Hello world\n"); // printf 函数在屏幕上打印 "Hello world"，\n 表示换行  
//    return 0; // main 函数返回 0，表示程序正常结束。在C中，main 函数的返回值通常用来指示程序的执行状态  
//}
//#include<stdio.h>
//int main()
//{
//	printf("Hello wold\n");//这里我们还有一个printf没有进行解释，printf也是一个函数。但是这个并不是我们自己定义的函数，printf是系统自带函数，我们把字符串hello world传给了print函数，运行代码后，我们在屏幕上看到了这行字符串，print将字符串输出到控制台，很显然print函数的作用是将字符串输出到控制台上，print由单词print打印和单词format格式的首字母f组成。意为格式化打印，print除了直接输入一个字符串，占位符打印，它还可以通过占位符的方式进行打印。
//	return 0;
//}
//占位符
//在C语言中，占位符通常与printf和scanf等输入输出函数一起使用，以表示要在字符串中插入或读取的数据的位置。这些占位符由格式说明符（format specifier）表示。
//对于printf函数
//在printf函数中，常用的占位符（格式说明符）包括：
//% d 或% i：用于整数（十进制）。
//% u：用于无符号整数（十进制）。
//% f：用于浮点数（默认为6位小数）。
//% lf：用于双精度浮点数（也默认为6位小数）。
//% c：用于字符。
//% s：用于字符串。
//% p：用于指针（以十六进制形式打印）。
//% x 或% X：用于整数（十六进制），其中% X使用大写字母。
//% o：用于整数（八进制）。
//% e 或% E：用于浮点数（科学计数法）。
//% g 或% G：根据大小选择% f或% e（不带前导零）。
//%% ：打印一个% 字符。
//例如：
//c
//int a = 10;
//float b = 20.5;
//printf("整数是 %d，浮点数是 %f\n", a, b);
//对于scanf函数
//在scanf函数中，也使用类似的格式说明符来读取输入：
//% d：用于整数。
//% u：用于无符号整数。
//% f：用于浮点数。
//% lf：用于双精度浮点数。
//% c：用于字符。
//% s：用于字符串（注意：不要使用% s来读取包含空格的字符串，因为它会在遇到空格时停止读取）。
//% p：用于指针（但通常不用于scanf）。
//% x 或% X：用于十六进制整数。
//例如：
//c
//int a;
//float b;
//scanf("%d %f", &a, &b);
//注意：在使用scanf时，对于所有非字符类型（如整数、浮点数等），都需要在格式说明符前加上& 来获取变量的地址。这是因为scanf需要知道在内存中的哪个位置存储输入的数据。而对于字符和字符串（使用% c和% s时），字符变量本身就是地址（即它存储字符的ASCII值），而字符串变量（实际上是一个字符指针）存储的是字符串首字符的地址。因此，对于字符串，你不需要在格式说明符前加& （但你需要确保你提供了一个足够大的字符数组来存储输入的字符串，以防止缓冲区溢出）。
//我们看看这个代码。
//#include<stdio.h>
//int add(int a, int d)
//{
//	return a + d;
//}
//int main()
//{
//	int result;
//	result = add(4, 5);
//	printf("%d", result);//这里的%d就是一个占位符，整形占位符，他是整形占位符，最终print打印的结果会使用reult的值代替%d这个位置，
//	return 0;
//}
//举个更简单例子。我们想用print函数打印一个整数，可以这样写，
//printf("%d", 整形int);
// 我们想用print函数打印两个整数， 可以这样写，
//printf("%d %d", 整数int1, 整数int2);
//通过这两个例子，我们就可以总结出print的公式。print的第一个参数必须是字符串，
//print(“占位1 占位2 占位3”,替换1，替换2，替换3);字符串中可以包含多个占位符。而占位符是使用百分号在转换操作进行表示的，%是转换操作：%d
//例如整形int的占位符为百分号d后面的替换参数会依次替换前面的占位符。
//通过这个代码我们再次解析一下print的规律。
//priint("A=%d B=%d",123,456);第一个参数必须为字符串，这个字符串中包含两个整形的占位符%d.后面的参数123会替换的一个占位符，456会替换第二个占位符最终将替换好的字符串输出到屏幕上。A=123 B=456 
//inclde命令
//还是这串代码
//#include<stdio.h>//我们发现现在代码的最开始有一个井号include语句，这个语句是原来引入头文件的，引入头文件。当然这个文件里面并没有定义printf函数。stdio.h文件没有定义printf,但是它里面有printf函数的函数声明，srdio.h文件声明了printf。在当前的阶段你完全可以理解这个文件里面写了printf函数的函数定义，
//int main()
//{
//	printf("Hello world\n");//例如print是系统自带的函数,前面我们也提到了。要调用函数，就必须先定义好函数，这样编译器才能够理解printf到底是什么，而printf的定义就是被写在这个文件之中(<stdio.h>),用井号incllude命令可以将文件中的代码复制到我们的代码中，这样我们才能够使用print函数，
//	return 0;
//}
//总结
//我们通过("Hello wor;d\n");中。。这一小段代码，学习了，非常多的基础C语言语法知识，
//函数。变量，标识符，关键词。常量。printf。inclide。
//只是抛砖引玉，比较浅显对C语言有一个初步的了解，会在之后详细的学习，
//整数数据类型
//C语言提供了几种不同的整数数据类型，这些数据类型定义了变量可以存储的整数的范围和大小。以下是C语言中常见的整数数据类型：
//int：
//这是最基本的整数类型。它的确切大小取决于编译器和系统，但通常是32位（在大多数现代系统上）。
//范围通常是 - 2, 147, 483, 648 到 2, 147, 483, 647（包括这两个数）。
//short 或 short int：
//一个比 int 更小的整数类型。它通常是16位。
//范围通常是 - 32, 768 到 32, 767（包括这两个数）。
//long 或 long int：
//一个比 int 更大的整数类型。在32位系统上，它的大小通常与 int 相同（即32位），但在64位系统上，它通常是64位。
//范围在32位系统上通常是 - 2, 147, 483, 648 到 2, 147, 483, 647（与 int 相同），但在64位系统上会更大。
//为了确保 long 至少是32位，可以使用 long long 或 long long int（取决于编译器）。
//long long 或 long long int：
//一个非常大的整数类型。它通常是64位，无论系统是什么。
//范围通常是 - 9, 223, 372, 036, 854, 775, 808 到 9, 223, 372, 036, 854, 775, 807（包括这两个数）。
//unsigned：
//这不是一个单独的类型，而是一个修饰符，可以与上述任何整数类型结合使用。unsigned 整数只能是非负的，因此它们的范围是从0开始，直到可能的最大值。
//例如，unsigned int 的范围通常是 0 到 4, 294, 967, 295（如果它是32位的话）。
//请注意，上述范围和大小可能会因编译器和系统的不同而略有不同。为了确保代码的可移植性，C99标准引入了 <stdint.h> 头文件，该文件定义了一组具有固定大小和范围的整数类型，如 int8_t、uint32_t、int64_t 等。使用这些类型可以确保你的代码在不同的编译器和系统之间具有一致的行为。C语言提供了几种不同的整数数据类型，这些数据类型定义了变量可以存储的整数的范围和大小。以下是C语言中常见的整数数据类型：
//int：
//这是最基本的整数类型。它的确切大小取决于编译器和系统，但通常是32位（在大多数现代系统上）。
//范围通常是 - 2, 147, 483, 648 到 2, 147, 483, 647（包括这两个数）。
//short 或 short int：
//一个比 int 更小的整数类型。它通常是16位。
//范围通常是 - 32, 768 到 32, 767（包括这两个数）。
//long 或 long int：
//一个比 int 更大的整数类型。在32位系统上，它的大小通常与 int 相同（即32位），但在64位系统上，它通常是64位。
//范围在32位系统上通常是 - 2, 147, 483, 648 到 2, 147, 483, 647（与 int 相同），但在64位系统上会更大。
//为了确保 long 至少是32位，可以使用 long long 或 long long int（取决于编译器）。
//long long 或 long long int：
//一个非常大的整数类型。它通常是64位，无论系统是什么。
//范围通常是 - 9, 223, 372, 036, 854, 775, 808 到 9, 223, 372, 036, 854, 775, 807（包括这两个数）。
//unsigned：
//这不是一个单独的类型，而是一个修饰符，可以与上述任何整数类型结合使用。unsigned 整数只能是非负的，因此它们的范围是从0开始，直到可能的最大值。
//例如，unsigned int 的范围通常是 0 到 4, 294, 967, 295（如果它是32位的话）。
//请注意，上述范围和大小可能会因编译器和系统的不同而略有不同。为了确保代码的可移植性，C99标准引入了 <stdint.h> 头文件，该文件定义了一组具有固定大小和范围的整数类型，如 int8_t、uint32_t、int64_t 等。使用这些类型可以确保你的代码在不同的编译器和系统之间具有一致的行为。
//整数数据类型
//在上节课当中。我们使用了int关键词来表示一个整数的数据类型，当然想要表示整数数据类型不仅仅有int类型，还有其他的关键词，也可以表示整数，这些表示整数的关键词之间会存在着有些差别，在这节课当中我们就来详细地讨论C语言中的整数数据类型，
//整数数据类型的关键词：char.short.int.long.long long.
//这个表格罗列了C语言中的所有可以表示整数的数据类型。
//类型名称       C语言中的关键词         注释
//字符型         char                  用于表示一个很小的整数
//短整型         short                 用于表示一个不怎么大的整数
//整形           int                   生活中一般的整数都可以表示
//长整形         iong                  用于表示一个较大的整数
//加长整型       iongiong              用于表示一个非常大的整数
//看到这里有的同学可能疑惑一个整数而已，为什么需要定义这么多不同的类型呢，这是因为不同的数据所占用的内存大小是不一样的，表示数据范围也不一样的，
//我们知道计算机是通过晶体管的开关状态来记录数据的，它们通常八个编为一组，我们称为字节，八个为一组，称为字节，而晶体管的开关状态又分别可以用一和零来表示开用一表示关闭用零表示，这种表示方法我们称为二进制，
//因此一个字节八个晶体管可以拥有二的八次方不同的状态，让每一种状态对应一个数值，这样一个字节就可以表示256个不同的数值，一个字节等于八个晶体管可以表示256个数值。要表示更大的数据范围。就需要更多的晶体管，要知道。