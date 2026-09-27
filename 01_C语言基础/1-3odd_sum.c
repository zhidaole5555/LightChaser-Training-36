#include <stdio.h>
int main(void){
    int i;
    int max=100;
    int sum=0;
    for(i=1;i<max;i=i+2){
        sum=sum+i;//其实还可以算出1到100的总和再减去偶数的和
    }
    printf("1到100之间所有奇数的和为:%d\n",sum);
    return 0;
}