a,b = map(int, input().split())

sum =0
cnt = 0
dec =0


for i in range(a,b+1):
    if i %5 ==0 or i%7 ==0:
        sum +=i
        cnt+=1

if cnt == 0:
    print("0 0.0")
else:
    print(f"{sum} {sum / cnt:.1f}")

