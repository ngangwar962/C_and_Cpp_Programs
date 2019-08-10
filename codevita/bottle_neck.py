n=int(input())
str1=input()
list1=str1.split(" ")
bottle=[]
for i in range(0,len(list1)):
    temp=[]
    temp.append(int(list1[i]))
    temp.append(0)
    bottle.append(temp)
bottle.sort()
num=len(bottle)
for i in range(0,n):
    if(bottle[i][1]==0):
        temp=bottle[i][0]
        for j in range(i+1,n):
            if(bottle[j][0]>temp and bottle[j][1]==0):
                temp=bottle[j][0]
                bottle[j][1]=1
                num-=1
                #print(num)
print(num)            
            
