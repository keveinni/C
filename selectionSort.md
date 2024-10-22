# 选择排序

选择排序的排序思想是：每轮都从未排序数组中找出1个最小的值排在第i个位置。
查找的核心是：找极端,换位置。

## 算法详解

1. i=0
2. 用第i个元素和i+1~len(nums)元素依次比较。
3. 如果后者小于前者则交换位置，保证从未排序部分寻找到1个最小的元素，放在第i位。
4. i++，循环上述部分流程知道i = len(num)-2。