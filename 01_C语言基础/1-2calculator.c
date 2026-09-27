#include <stdio.h>
int main(void){
    printf("请输入算式\n");
    double a,b;//因为有小数，所以要double
    char op;//保留一个字符
    if(scanf("%lf %c %lf",&a,&op,&b)!=3){
        printf("出错\n");
        return 1;//检验是否输入符合格式
    }
    switch(op){//用switch可读性更好
        case '+':
        printf("%f+%f=%f\n",a,b,a+b);
        break;
        case '-':
        printf("%f-%f=%f\n",a,b,a-b);
        break;
        case '*':
        printf("%f*%f=%f\n",a,b,a*b);
        break;
        case '/':
        if(b<0.00001&&b>-0.00001){printf("出错\n");}//浮点数不能直接判断==0
        else{printf("%f/%f=%f\n",a,b,a/b);}
        break;
        default:
        printf("你的格式输入错误\n");
        break;
    }
    return 0;
    
}