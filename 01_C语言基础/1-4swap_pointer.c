#include <stdio.h>
void swap(int *a,int *b);
int main(void){
    int a,b;
    printf("请输入两个整数\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);//进行函数交换
    printf("交换后的值为%d和%d\n",a,b);//注意这里a和b已经交换了，不要把顺序写反
    return 0;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;//用temp来存放a的值
    *a=*b;//将b的值赋给a
    *b=temp;//将temp（即原来的a的值）赋给b


}