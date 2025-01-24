'''# COUNT FROM SEA LEVEL TO SEA LEVEL .U indicates moving up from sea level and D indicates moving down from sea level.
# U-D indicates a mountain . D-U indicates a valley
# count no. of valleys travelled where 1 valley impiles moving from one sea level to down and reaching sea level again.
# eg: 8  UDDDUDUU =1 i.e;single valley'''
n=int(input())
s=input()
c,x=0,0
for i in range(n):
    if(c==0 and s[i]=="d"):
        x+=1
    if s[i] == 'u':
           c+=1
    else:
           c-=1

print(x)
