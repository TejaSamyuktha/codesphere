def gcd(a, b):
    if a == 0:
        return b
    
    return gcd(b % a, a)  

def lcm(a, b):
    return (a * b) // gcd(a, b)  

x = int(input())
y = int(input())
s=gcd(x,y)
t=lcm(x,y)

print("GCD:", s)
print("LCM:", t)
