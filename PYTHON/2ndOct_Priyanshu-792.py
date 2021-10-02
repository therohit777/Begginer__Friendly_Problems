pos=-1
def search(arr,n):
    i=0
    while i<len(arr):
        if arr[i]==n:
            globals()['pos']=i
            print("Found here")
            return True
        i=i+1
    return False        

from array import *
arr=array('i',[])
n=int(input("Enter the length of the array"))
print("Enter datas")
for i in range(n):
    x=int(input())
    arr.append(x)
print("Enter the value need to be searched")   
s=int(input())
if search(arr,s):
    print("Found at ",pos)
else:
    print("not Found")    