#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    double sum = 0.0;

    printf("请输入数组元素个数: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("输入无效，个数必须是正整数。\n");
        return 1;
    }

    /* 动态申请 n 个 int，malloc 返回 void*，需转换为 int* */
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {           /* 必须检查申请是否成功 */
        printf("内存申请失败！\n");
        return 1;
    }

    printf("请输入 %d 个整数:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("平均值 = %.2f\n", sum / n);

    free(arr);      /* 用完释放，避免内存泄漏 */
    arr = NULL;     /* 置空，防止悬空指针 */

    return 0;
}