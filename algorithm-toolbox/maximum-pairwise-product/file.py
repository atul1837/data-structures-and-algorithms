n = int(input())
lst = []
for x in input().split():
	lst.append(int(x))
lst.sort()
print(lst[n-1]*lst[n-2])