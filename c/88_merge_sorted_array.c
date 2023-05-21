
#include <stdio.h>
#include <stdlib.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int *tmp_nums = (int *)malloc(sizeof(int) * (m + n));
    int i = 0; // nums1 pos
    int j = 0; // nums2 pos
    int k = 0; // tmp_nums pos
    while (i < m | j < n)
    {
        if ((i == m) || ((n != 0) && (nums1[i] > nums2[j])))
        {
            tmp_nums[k] = nums2[j];
            j++;
        }
        else if ((j == n) || ((m != 0) && (nums1[i] <= nums2[j])))
        {
            tmp_nums[k] = nums1[i];
            i++;
        }

        k++;
    }

    for (int x = 0; x < m + n; x++)
    {
        nums1[x] = tmp_nums[x];
    }
}

int main()
{
    int a[2] = {2,0};
    int b[1] = {1};
    merge(a, 0, 1, b, 0, 1);
}
