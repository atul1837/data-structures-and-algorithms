n = int(input())
lst = []
lst.append(0)
lst.append(1)
for i in range(2,n):
    lst.append(lst[i-1]+lst[i-2])
print(lst[n-1])