int count = 0;
for (int i = 0; i < nums.length; i++)
{
    int a = 1;
    for (int j = i + 1; j < nums.length; j++)
    {
        a = nums[i] * nums[j];
        if (x <= a & a <= y)
        {
            count++;
        }
    }
       return count;
}