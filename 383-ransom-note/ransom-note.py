from collections import Counter
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ram = Counter(ransomNote)
        mag=Counter(magazine)

        for x in ram:
            if ram[x]>mag[x]:
                return False
    
        return True

        
            
     
