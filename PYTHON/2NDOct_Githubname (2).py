l1=eval(input("Enter first list:"))
l2=eval(input("Enter Second list:"))
c=l1.copy()
for i in l2:
    d=0
    for j in l1:
         if(i==j):
            d+=1
    if(d==0):
        c.append(i)
print(c)