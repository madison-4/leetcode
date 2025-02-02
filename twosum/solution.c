#include<stdio.h>
#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 * twoSum: fn to find array indices
 */
int* twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	int i, j;
	*returnSize = 2;
	int *arr = malloc((*returnSize) * sizeof(int));

	for (i = 0; i < numsSize; i++)
	{
		j = i + 1;
		while (j < numsSize)
		{
			if (nums[i] + nums[j] == target)
			{
				arr[0] = i;
				arr[1] = j;
				break;
			}
			j++;
		}
	}
	return (arr);
}
