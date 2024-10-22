
/*
1. const 修饰常量，数组，使常量数组的值不能改变。
2. 修饰参数，使参数不被改变，保护参数
3. 
const int *A; //const修饰指针,A可变,A指向的值不能被修改
int const *A; //const修饰指向的对象,A可变,A指向的对象不可变
int *const A; //const修饰指针A, A不可变,A指向的对象可变
const int *const A;//指针A和A指向的对象都不可变
 先看“*”的位置
 如果const 在 *的左侧 表示值不能修改,但是指向可以改。
 如果const 在 *的右侧 表示指向不能改,但是值可以改
 如果在“*”的两侧都有const 标识指向和值都不能改。
 */