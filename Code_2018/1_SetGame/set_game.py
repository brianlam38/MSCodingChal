import sys

# 1. Read and save the attributes values of the first two cards.

# 2. Output a card which has the only possibly set of attribute values.

count = ['1', '2', '3']
fill = ['E', 'F', 'S']
color = ['G', 'P', 'R']
shape = ['O', 'D', 'S']

def grab_unique(attr1, attr2, values):
	for i in values:
		if i == attr1 or i == attr2:
			continue
		else:
			return i

line_num = 0
card_3 = ''
for line in sys.stdin:
	# grab remaining pairs
	if line_num == 0:
		line_num += 1
		continue

	# process pairs as list of attribute values
	attr = list(line)

	# Test count
	if attr[0] == attr[5]:
		card_3 += attr[0]
	else:
		unique = grab_unique(attr[0], attr[5], count)
		card_3 += str(unique)
	# Test fill
	if attr[1] == attr[6]:
		card_3 += attr[1]
	else:
		unique = grab_unique(attr[1], attr[6], fill)
		card_3 += unique
	# Test color
	if attr[2] == attr[7]:
		card_3 += attr[2]
	else:
		unique = grab_unique(attr[2], attr[7], color)
		card_3 += unique
	# Test shape
	if attr[3] == attr[8]:
		card_3 += attr[3]
	else:
		unique = grab_unique(attr[3], attr[8], shape)
		card_3 += unique

	print("Group {}: {}".format(line_num, card_3))

	# increment line num
	line_num += 1
	# reset card 3
	card_3 = ''






