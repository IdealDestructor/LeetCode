class Solution:
def Codec(nums,target):
    return twoSum(self,nums,target)
def twoSum(self,nums,target):
    hashmap={}
    for i,num in enumerate(nums):
        if hashmap.get(target - num) is not None:
            return [hashmap.get(target - num),i]
        hashmap[num] = i #这句不能放在if语句之前，解决list中有重复值或target-num=num的情况
