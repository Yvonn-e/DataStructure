def rotation(nums, k):
    if not nums or k < 0:
        return 0
    n= len(nums)

    for i in range (k):
        t= nums[n-1]
        for j in range(n-1, 0, -1):
            nums[j]=nums[j-1]
        nums[0]=t
    return nums


