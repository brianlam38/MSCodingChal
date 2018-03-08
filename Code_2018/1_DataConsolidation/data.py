import sys

input = sys.stdin.read()
total = 0
nums = 0

input = input.split(",")
#print(input)

for i in input:
    nums += 1
    total = total + int(i)

#print("total = {}".format(total))
#print("nums = {}".format(nums))

mean = total / nums
print(int(round(mean)))