'''
year=input("请输入年：")
month=input("请输入月：")
day=input("请输入日：")
s='2020年'+'09月'+'16日'
print(year+' '+month+' '+day)
print("2.",year+'-'+month+'-'+day)
print("3.",year+'/'+month+'/'+day)
print("4.",year+','+month+','+day)
print('{0:}年{1:}月{2:}日'.format('2020','09','16'))
print(s)
'''
'''
for i in range(2):
    print i
for i in range(4,6):
    print i
    '''
'''辗转相除法'''
'''def f(a, b):
    if b == 0:
        return a
    else:
        return f(b, a%b)   
a, b = input(“Enter two natural numbers: ”)
print f(a, b)
'''

'''
tmp = [1, 2, 3, 4, 5, 6]
tmp.insert(-3, 'a')
print(tmp[4])
'''
''' 题目中，执行 tmp.insert(-3, 'a') 表示在 tmp 索引为-3的地方插入元素 ‘a’，此时 tmp = [1, 2, 3, 'a', 4, 5, 6]
最后返回的tmp[4] = 4 '''
'''
sum=0,
x=-1
i=1
for i in range(1,100):
    sum=1+x/i
print(sum)
'''
'''
sum=0,
i=1
for i in range(1,100):
    sum=1+1/i
print(sum)
'''
'''嵌套使用
dict={
    "x":{
        "1":100,
         "2":90,
         "3":100,
        },
    "y":{
                "1":100,
         "2":90,
         "3":100,
        },
    "z":{
                "1":100,
         "2":90,
         "3":100,
        }
    }
print(dict["y"]["2"])
'''
#列表去重
#set函数去重
'''
ids = [1,2,3,3,4,2,3,4,5,6,1]
print(ids)
formatList = []
formatList = list(set(ids))
print (formatList)
'''
# 循环遍历法
'''
orgList = [1,0,3,7,7,5]
formatList = []
for id in orgList:
    if id not in formatList:
        formatList.append(id)
print (formatList)
'''
"不够简洁明了"

#按照索引再次排序
'''
orgList = [1,0,3,7,7,5]
formatList = list(set(orgList))
formatList.sort(key=orgList.index)
print (formatList)
'''
'''
def user(name):
    print(f'姓名为：{name}')
    
user('小')
 '''       
'''
def text(compute):
    result=compute(1,2)
    print(result)
def compute(x,y):
    return x+y
text(compute)
'''
#字符串
'''
var1 = 'Hello World!'
var2 = "csdn"     
print ("var1[0]: ", var1[0])
print ("var2[1:3]: ", var2[1:3])
print ("var2[1:2]: ", var2[1:2])
'''
'''
print(sum(([1],[2]),[9]))
'''
'''
print(eval("1"+"1"))
'''
'''
#求三位数的个十百
x=eval(input("请输入数字：\n"))
ge=x%10
shi=x//10%10
bai=x//100
print("个位：",ge,"十位：",shi,"百位：",bai)
'''
'''
#求四位数的个十百千
x=eval(input("请输入数字：\n"))
ge=int(x%10)
shi=x//10%10
bai=int(x%1000/100 )
qian=x//100//10
print("个位：",ge,"十位：",shi,"百位：",bai,"千位：",qian)
'''
'''
def fun(num):
    odd=[]#奇数
    even=[]#偶数
    for i in num:
        if i%2==0:
            odd.append(i)
        else:
            even.append(i)
        return odd,even
    
lst=[1]
'''
#函数的使用
'''
def printinfo():
    print('--'*30)
    print('  人生苦短，我用python  ')
    print('--'*30)
    
printinfo()
'''
'''
def printf(n):
    print("*"*n)
    
printf(60)
'''
'''
def printLine1(n):
    i = 1
    while i <= n:
        printLine()
        i += 1
        
printLine1(4)
'''
'''
def test1():
    a = 300 #局部变量
    print('test1-----------修改前：a = %d'%a)
    a = 100
    print('test1-----------修改后：a = %d'%a)
def test2():
    a = 500 #不同的函数可以定义相同的名字，彼此无关
    print('test2-----------a = %d'%a)

test1()
test2()
'''
'''





'''
'''
def sum(*nums):
    i=0
    for n in nums:
        if(isinstance(n,(int,float))):
            i+=n
    return i
    
print(sum(1,2,3,4))
 '''        '''
def sum(**nums):
    i=0
    temp=[]
    for key,value in nums.items():
        if(isinstance(value,(int,float))):
            i+=value
            temp.append(key)
        return (temp,i)
print(a=sum(a=1,b=2,c=3,d=4))


# 去除空格
    #line = line.strip()
    # 如果是空行，则跳过
    #if len(line) == 0:
     #   continue'''

# her=["英雄1","英雄2","英雄3"]
# for hero in  her:
#     print(hero)
#
#     print("-------------------------------------####################")
#
#     for i in range(10,21):
#         print(i)
#
# students_score = {
#     "吕":{
#         "经典":44,
#          "给":55
#          },
#     "宏":{
#         "经典": 44,
#         "给": 55
#     },
#     "博":{
#         "经典": 44,
#         "给": 55
#     }
# }
# print(students_score)
# print(students_score["吕"]["经典"])
# name_list=[1,2,3,4,5]
# print(name_list.index(4))
# name_list[1]=0
# print(name_list)
# name_list.insert(2,0)
# print(name_list)
# name_list.append(100)
# print(name_list)

def list_while():
    list1=["python","java","c++","c"]
    index=0
    i=0
    while index<len(list1):
        print(list1[index])
        index+=1
    for i in  list1:
        print(i)


list_while()