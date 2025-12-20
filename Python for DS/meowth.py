

list = [2 ,34, 23, 11, 62, 30, 47, 15, 44, 29]
for i in range (0,10):
    for j in range (1,10):
        if list[j] < list[i]:
            list[i] , list[j] = list[j], list[i]



print(list)
