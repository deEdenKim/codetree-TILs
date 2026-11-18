cnt1= 0
cnt2= 0 

for i in range(10):
    x = int(input())
    if x%3==0:
        cnt1+=1;
    if x%5==0:
        cnt2+=1;

print(cnt1, cnt2)