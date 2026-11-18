sum = 0
cnt = 0

for i in range(10):
    x = int(input())
    if 0<=x<=200:
        sum+=x
        cnt+=1
    
if cnt==0:
    print("0 0 0")
else:
    print(f"{sum} {sum/cnt:.1f}")
