def non_duplicate_single(nums):
    answer= 0

    #Iterate through the array and perform the XOR operation
    for num in nums:
        answer ^= num
    return answer

nums= [1,2,4,3,1,2]
print(non_duplicate_single(nums))