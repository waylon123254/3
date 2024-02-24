poker=[]
print('1.',poker)

poker.append('Ace')
poker.append('2')
print('2.',poker)

List=['3','4','5','6','7','8','9','10','Jack','Queen','King','Joker']
poker.extend(List)
print('3.',poker)

print('4.',poker[4])

print('5.',poker[1:10])

del poker[0:2]
print('6.',poker)

item='Queen'
print('7.',poker.count(item))

print("8.")
if item in poker:
    print("有")
    
poker.insert(11,'Ace')
poker.insert(12,'2')
print("9.",poker)

print("10.",poker.index('Ace'))

print("11.",len(poker))

poker1=sorted(poker)
print(poker,"\n",poker1)


poker1 = sorted(poker)
print('12','poker1:',poker1,'\n','poker:',poker)

poker2 = list(reversed(poker))
print('13.',poker2)


poker1.sort(key = None,reverse=True)
print('14',poker1)

poker1.reverse()
print('15.',poker1)

print('16.',poker.pop(),poker)

animals=['猴','鸡','狗','猪','鼠','牛','虎','兔','龙','蛇','马','羊']
year=int(input("请输入你要计算的年份："))
index=year%12

year=int(input("请输入你要计算的年份："))
daytime=['庚','辛','壬','癸','甲‘,’乙','丙','丁','戊','己']
yeartime=['申','酉','戌','亥','子','丑','寅','卯','辰','午','未']
dayindex=year%10
yearindex=year%12
print(f'{year}年是{daytime[dayindex]+yeartime[yearindex]}')
         

sum =0
for i in range(64):
    sum=sum+2**1
print(format(sum))      

n=eval(input())
s=0
n+=1
for i in range(1,n):
    s=s+i*1
n-=1
print("数列前n项的平方和:",n,s)   