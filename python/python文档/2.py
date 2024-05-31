'''
print(len("hello,world!"))
x=12.34
print(type(x))
x=10
y=4
print(x/y,x//y)
x = "Happy Birthday to you!"
x*3
print(x)
a="ab"
b="cd"
c=a+b
print(c)
print("世界很大"+"人很渺小")
s1 = "The python language is a scripting language."
s2 = s1.replace('scripting','general')
print(s2)
print(s1)
a = "alex"
b = a.capitalize()
print(a,end=",")
print(b)
str1 = "mysqlsqlserverPostgresQL"
str2 = "sql"
ncount = str1.count(str2)
print(ncount)
s= "abcdefghijklmn"
print(s[1:10:3])
a ="Python"
b = "A Superlanguage"
print("{:->10}:{:-<19}".format(a,b))
x=3==3,5
print(x)
x=3
x+=6
print(x)
s = "The python language is a multimodel language."
print(s.split(' '))
x=input("世界那么大,我想去看看")
print(x[7,-3])
#print(len())
print(not 5)
''''''

x=7
y=12 if x>5 else 20
print(y)

k=10 
while k: 
  k=k-1 
  print(k)
  
for i in range(2,10,2):
 print(i)

sum=0
count=1
a=eval(input("请输入："))
while count <= a:
    sum += count
    count += 1
print(sum)    '''
'''
import turtle
#bag='#000000#0000FF#FFD700#008000'
turtle.speed("fastest")
turtle.pensize(2)
for x in range(300):
    i=bag[7*(x%4):(7*(x%4)+7)]
    turtle.pencolor(i)
    turtle.forward(2*x)
    turtle.left(91)
turtle.done'''
'''
# class Course:
#     def __init__(self,ClassNumber,ClassName,ClassTeacher):
#         self.ClassNumber=ClassNumber
#         self.ClassName=ClassName
#         self.ClassTeacher=ClassTeacher

print("请输入三角形三条边")
a=input(eval("第一条边：\n"))
b=input(eval("第二条边：\n"))
c=input(eval("第三条边：\n"))
s=(a+b+c)/2
print("三角形面积：",s)''''''

import math

a = float(input("a="))
b = float(input("b="))
c = float(input("c="))
# if a + b > c and a - b < c:
if a + b > c > a - b:
    print("周长：%f" % (a + b + c))
    p = (a + b + c) / 2
    area = math.sqrt(p * (p - a) * (p - b) * (p - c))
    print("面积：%f" % area)
else:
    print("不能构成三角形")'''
'''
# 目前优化进度为ver3.1
# 优化了文字进度......
import time, random

player_score = 0
enemy_score = 0
# 询问是否需要再来一局或退出
while True:
    go_on = input('请问是否要继续吗？输入q可退出，输入其他则继续：')
    if go_on == 'q':
        print('游戏退出')
        break
    for i in range(1, 4):
        # print(' \n——————现在是第'+str(i+1)+'局，ready go!——————')
        # print(' \n——————现在是第%s局，ready go!——————' % i)
        print('  \n——————现在是第 {} 局——————'.format(i))
        time.sleep(2)
        # 生成随机属性
        player_life = random.randint(100, 150)
        player_attack = random.randint(30, 50)
        enemy_life = random.randint(100, 150)
        enemy_attack = random.randint(30, 50)

        # 定义局数胜利

        # 展示双方角色的属性
        # print('【玩家】\n'+'血量：'+str(player_life)+'\n攻击：'+str(player_attack))
        # print('【玩家】\n''血量：%s\n攻击：%s' % (player_life, player_attack))
        print('【八神庵】\n血量：{}\n攻击：{}'.format(player_life, player_attack))
        # player_life和player_attack都是整数类型，所以拼接时需要先用str()转换
        print('------------------------')
        time.sleep(1)
        # print('【敌人】\n'+'血量：'+str(enemy_life)+'\n攻击：'+str(enemy_attack))
        # print('【敌人】\n''血量：%s\n攻击：%s' % (enemy_life, enemy_attack))
        print('【草薙京】\n''血量：{}\n攻击：{}'.format(enemy_life, enemy_attack))
        print('------------------------')
        time.sleep(1)

        # 打印战果
        # 提示1:有三种结果，需要用到多向判断 if...elif...else
        # 提示2:判断条件为双方的血量情况
        while player_life > 0 and enemy_life > 0:
            player_life = player_life - enemy_attack
            enemy_life = enemy_life - player_attack
            # print('你发起了攻击，【敌人】剩余血量%s' % enemy_life)
            print('草薙京发起了攻击，【八神庵】剩余血量{}'.format(player_life))
            # print('敌人向你发起了攻击，【玩家】剩余血量%s' % player_life)
            print('八神庵发起了攻击，【草薙京】的血量剩余{}'.format(enemy_life))
            print('------------------------')

        if player_life > 0 and enemy_life <= 0:
            print('草薙京凉了，八神庵获胜！')
            player_score += 1
        elif player_life <= 0 and enemy_life > 0:
            print('悲催，草薙京把八神庵干掉了...')
            enemy_score += 1
        else:
            print('哎呀，草薙京和八神庵同归于尽了~')
        print(player_score, enemy_score)

    # 判断三局两胜的胜负者
    if player_score > enemy_score:
        print('最终获胜者是八神庵！')
    elif enemy_score > player_score:
        print('八神庵最终输掉了比赛...')
    else:
        print('八神庵和草薙京果然是平分秋色')
'''

# num1 = int(input("请输入第一个数字："))
# num2 = int(input("请输入第一个数字："))
# m = max(num1, num2)
# n = min(num1, num2)
# r = m % n
# while r != 0:
#     m = n
#     n = r
#     r = m % n
# print(num1, "和", num2, "的最大公约数为", n)

# class Course:
#     def __init__(self,number,name,uin):
#         self.number=number
#         self.name = name
#         self.uin = uin
#     def printInfo(self):
#         print(f'{self.number} {self.name} {self.uin}')
# if  __name__=='__main__':
#     python=Course(1,'pyhton程序设置',3.5)
#     python.printInfo()
'''
s=[]
with open("test.txt") as f:
    for line in f:
        n,g=line.split()
        g=g.strip()
        s.append(float(g))
sum =0
average=0
for i in s:
    sum =sum+i
    average=sum/len(s)

print(average)'''
# def clc_fee(no,weight):
#     if no == '01':
#         if weight <= 2:
#             return 13
#         fee = 13 + (weight-2)*3
#         return fee
#     if no == '02':
#         if weight <= 2:
#             return 12
#         fee = 12 + (weight-2)*2
#         return fee
#     if no == '03':
#         if weight <= 2:
#             return 14
#         fee = 14 + (weight-2)*4
#         return fee
# zone = {'01':'华东地区','02':'华南地区','03':'华北地区'}
#
# if __name__ == '__main__':
#     while True:
#         no = input('请输入寄件服务地区的编号(01/02/03，-1退出)：')
#         if no == '-1':
#             break
#         weight = eval(input('请输入快件重量：'))
#         fee = clc_fee(no,weight)
#         print('fee：',fee)
#         with open('data.txt','a') as f:
#             f.write('{} {} {}\n'.format(zone[no],weight,fee))
'''
# -*- coding: utf-8 -*-
# 打开文件
fr = open("D:\\python文档\\大江东去.txt","r",encoding="utf-8")
# 读取文件所有行
content = fr.readlines()
contentLines = ''

characers = []  # 存放不同字的总数
rate = {}  # 存放每个字出现的频率

# 依次迭代所有行
for line in content:
    # 去除空格
    line = line.strip()
    # 如果是空行，则跳过
    if len(line) == 0:
        continue
    line = line.replace('\n', '')
    contentLines = contentLines + line
    # 统计每一字出现的个数
    for x in range(0, len(line)):
        # 如果字符第一次出现 加入到字符数组中
        if not line[x] in characers:
            characers.append(line[x])
        # 如果是字符第一次出现 加入到字典中
        if line[x] not in rate:
            rate[line[x]] = 1
        # 出现次数加一
        rate[line[x]] += 1

# 对字典进行倒数排序 从高到低 其中e表示dict.items()中的一个元素，
# e[1]则表示按 值排序如果把e[1]改成e[0]，那么则是按键排序，
# reverse=False可以省略，默认为升序排列
rate = sorted(rate.items(), key=lambda e: e[1], reverse=True)

print('全文共有%d个字' % len(contentLines))
print('一共有%d个不同的字' % len(characers))
print()
for i in rate:
    print("[", i[0], "] 共出现 ", i[1], "次")

fr.close()
''''''
import turtle as t
import datetime as d

def skip(step):
    #跳跃指定在长度
    t.penup()
    t.forward(step)
    t.pendown()

def setup_clock(radius):
    #绘制表盘
    t.reset()
    t.pensize(7)
    for i in range(60):
        skip(radius)
        if i % 5 ==0:
            t.forward(20)
            skip(-radius-20)
        else:
            t.dot(5)
            skip(-radius)
        t.right(6)

def make_hand(name,length):
  #注册turtle形状，名字是name
    t.reset()
    t.begin_poly()
    t.forward(length)
    t.end_poly()
    handForm= t.get_poly()
    t.register_shape(name,handForm)

def init():
    #初始化
    global hourHand,minHand,secHand,printer
    values=(('hourHand',90),('minHand',125),('secHand',130))
    t.mode('logo')
    hands=[]
    for name,length in values:
        hand = t.Turtle()
        make_hand(name,length)
        hand.shape(name)
        hand.shapesize(1,1,3)
        hand.speed(0)
        hands.append(hand)
    hourHand,minHand,secHand = hands

    printer = t.Turtle()
    printer.hideturtle()
    printer.penup()
    
def draw_hand(time):
    # 根据当前时间绘制表针
    hour =time.hour + time.minute/60
    minute = time.minute + time.second/60
    second = time.second
    hour = time.hour
    minute = time.minute
    second = time.second
    hourHand.setheading(hour*30)
    minHand.setheading(minute*6)
    secHand.setheading(second*6)

def week(time):
   #获取星期信息''
    week =["星期一","星期二","星期三","星期四 吕宏博","星期五","星期六","星期日"]
    return week[time.weekday()]

def day(time):
  #获取年月日信息
    return f' {time.year} {time.month} {time.day}'

def draw_date(time):
    
    printer.forward(70)
    printer.write(week(time),align='center',font=('Courier',14,'bold'))
    printer.backward(130)
    printer.write(day(time),align='center',font=('Courier',14,'bold'))
    printer.home()

def tick():
   # 动态绘制
    time =d.datetime.today()
    draw_hand(time)
    draw_date(time)
    t.ontimer(tick,100)

if __name__=="__main__":
    t.tracer(False)
    init()
    setup_clock(200)
    t.tracer(True)
    tick()
    t.done()
    time = d.datetime.today()
    draw_hand(time)
    draw_date(time)
    '''
# name = "Li hua"
# age = 24
# print("Hello "+name+", you are " + str(age) + " years old")

# name = "Li hua"
# age = 24
# print("Hello %s, you are %d years old" % (name, age))

# s="我很好好好"
# print(s)
# new_s=s.replace("好好好","好")
# print(new_s)
import random
# 用range()
def code(len):
    code_list = []
    for i in range(10):
        code_list.append(str(i))  #生成数字
    for i in range(65, 91):
        code_list.append(chr(i))   #生成大写字母
    for i in range(97, 123):
        code_list.append(chr(i))   #生成小写字母
    r = random.sample(code_list, len)
    m = ''.join(r)
    return m


if __name__ == '__main__':
    n = code(6)
    print(n)