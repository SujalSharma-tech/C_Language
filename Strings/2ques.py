
class Solution():

    def palidrome(self, s):

        news = s[::-1]
        if s == news:

            print("True")
        else:

            print("False")

    def swap(self, s):

        if s.isalnum() == True:

            a = s.swapcase()
            print(a)
        else:

            print("Invalid")


obj = Solution()

print("1. Palidrome")
print("2. Swapcase")
n = int(input())
s = str(input())
if n == 1:
    obj.palidrome(s)
else:
    obj.swap(s)
