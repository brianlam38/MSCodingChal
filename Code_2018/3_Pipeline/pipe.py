import sys

# Dry cleaning: Go through a series of machines
# Each machine will take a fixed amount of time to process a load

# Compute min number of machines the pipeline can have without increasing time.

# Line 1: N = no of machines | M = no of loads
# Line 2: Array of N machines and its time to process a load

# Scan highest number
# Combine if sum < highest

# read input
input = sys.stdin.read()
input = input.split('\n')

# grab N M
NM = input[0].split(' ')
N = NM[0]
M = NM[1]

#print("N = {} | M = {}".format(N, M))

# grab machine load times
loads = input[1].split(' ')
#print(loads)

# grab highest num
highest = 0
for i in loads:
	if i == '':
		continue
	if int(i) > highest:
		highest = int(i)

#print("highest = {}".format(highest))

# scan through array to count combinations
combinations = 0
curr_sum = -1
for j in loads:
	if j == '':
		continue
	if curr_sum == -1:
		curr_sum = int(j)
	elif curr_sum + int(j) <= highest: 
		combinations += 1
		curr_sum += int(j)
	else: 
		curr_sum = int(j)

#print("total combos = {}".format(combinations))

print(int(N) - combinations)


