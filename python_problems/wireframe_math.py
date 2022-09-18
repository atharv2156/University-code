t = int(input())
for i in range(t):
    h , w , cost =map(int,input().split())
    length = (h*2)+(w*2)
    cost *= length
    print(cost)