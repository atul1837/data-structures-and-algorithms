def gcd(i,j):
    if i == 0:
        return j
    if j == 0:
        return i
    return gcd(i%j,j) if i>j else gcd(i,j%i)
print("Enter two space separated Integers")
i , j = [int(x) for x in input().split()]
print(gcd(i,j))