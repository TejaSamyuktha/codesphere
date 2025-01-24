a=input()
b=input()
a=a.replace(" ","").lower()
b=b.replace(" ","").lower()
p=sorted(a)
q=sorted(b)
if len(p) == len(q) and p==q:
    print("Tom riddles Anagram")
else:
    print(" Not Tom riddles Anagram")
