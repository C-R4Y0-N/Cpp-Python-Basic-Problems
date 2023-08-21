 
a=int(input())
b=int(input())
if a==0 or b==0:
    print(False)
else:
    if(a<0):
        a*=-1
    
    if(b<0):
        b*=-1
    
    print(a,b)
    
    