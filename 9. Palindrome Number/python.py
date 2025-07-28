def isPalindrome(x) :
        n = x
        revX = 0
        while(n>0) :
            revX = revX*10 + n%10
            n = n//10
        return revX == x

print(isPalindrome(121))