
lis = (input()).split(" ")

intlis = []

for ele in lis:
    intlis.append(int(ele))

two = 0
three = 0
five = 0
seven = 0

for i in intlis:
    if i % 2 == 0:
        two += 1

    if i % 3 == 0:
        three += 1

    if i % 5 == 0:
        five += 1

    if i % 7 == 0:
        seven += 1

lis2 = [2, 3, 5, 7]
tstlist = [two, three, five, seven]

dict1 = dict(zip(lis2, tstlist))

print(dict1)
