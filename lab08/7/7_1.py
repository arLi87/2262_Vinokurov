nums = [int(t) for t in input().split()]

for x in nums:
    if x < 0:
        print(x)
        break
else:
    print("Все числа неотрицательные")