from typing import List
class Solution:
    def validMountainArray(self, A: List[int]) -> bool:
        self.a = A
        last_pos, it = len(self.a) - 1, 0
        if(len(self.a) >= 3 and self.a[0] < self.a[1] and self.a[last_pos] < self.a[last_pos-1]):
            while self.a[it+1] > self.a[it]:
                it+=1
                if(it == last_pos):
                    break
            while self.a[it+1] < self.a[it]:
                it+=1
                if(it == last_pos):
                    break 
            if(it == last_pos): 
                return True
        return False
if __name__ == '__main__':
    line = [10,30,60,5,10] 
    ret = Solution().validMountainArray(line)
    print(ret)