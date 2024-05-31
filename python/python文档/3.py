'''
import turtle
turtle.title('Python（冰墩墩）') #可以自己修改名称
turtle.speed(40)  # 可以自己调节速度
# 左手
turtle.penup()
turtle.goto(177, 112)
turtle.pencolor("lightgray")
turtle.pensize(3)
turtle.fillcolor("white")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(80)
turtle.circle(-45, 200)
turtle.circle(-300, 23)
turtle.end_fill()
# 左手内
turtle.penup()
turtle.goto(182, 95)
turtle.pencolor("black")
turtle.pensize(1)
turtle.fillcolor("black")
turtle.begin_fill()
turtle.setheading(95)
turtle.pendown()
turtle.circle(-37, 160)
turtle.circle(-20, 50)
turtle.circle(-200, 30)
turtle.end_fill()
# 轮廓
# 头顶
turtle.penup()
turtle.goto(-73, 230)
turtle.pencolor("lightgray")
turtle.pensize(3)
turtle.fillcolor("white")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(20)
turtle.circle(-250, 35)
# 左耳
turtle.setheading(50)
turtle.circle(-42, 180)
# 左侧
turtle.setheading(-50)
turtle.circle(-190, 30)
turtle.circle(-320, 45)
# 左腿
turtle.circle(120, 30)
turtle.circle(200, 12)
turtle.circle(-18, 85)
turtle.circle(-180, 23)
turtle.circle(-20, 110)
turtle.circle(15, 115)
turtle.circle(100, 12)
# 右腿
turtle.circle(15, 120)
turtle.circle(-15, 110)
turtle.circle(-150, 30)
turtle.circle(-15, 70)
turtle.circle(-150, 10)
turtle.circle(200, 35)
turtle.circle(-150, 20)
# 右手
turtle.setheading(-120)
turtle.circle(50, 30)
turtle.circle(-35, 200)
turtle.circle(-300, 23)
# 右侧
turtle.setheading(86)
turtle.circle(-300, 26)
# 右耳
turtle.setheading(122)
turtle.circle(-53, 160)
turtle.end_fill()
#右耳内
turtle.penup()
turtle.goto(-130, 180)
turtle.pencolor("black")
turtle.pensize(1)
turtle.fillcolor("black")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(120)
turtle.circle(-28, 160)
turtle.setheading(210)
turtle.circle(150, 20)
turtle.end_fill()
# 左耳内
turtle.penup()
turtle.goto(90, 230)
turtle.setheading(40)
turtle.begin_fill()
turtle.pendown()
turtle.circle(-30, 170)
turtle.setheading(125)
turtle.circle(150, 23)
turtle.end_fill()
# 右手内
turtle.penup()
turtle.goto(-180, -55)
turtle.fillcolor("black")
turtle.begin_fill()
turtle.setheading(-120)
turtle.pendown()
turtle.circle(50, 30)
turtle.circle(-27, 200)
turtle.circle(-300, 20)
turtle.setheading(-90)
turtle.circle(300, 14)
turtle.end_fill()
# 左腿内
turtle.penup()
turtle.goto(108, -168)
turtle.fillcolor("black")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(-115)
turtle.circle(110, 15)
turtle.circle(200, 10)
turtle.circle(-18, 80)
turtle.circle(-180, 13)
turtle.circle(-20, 90)
turtle.circle(15, 60)
turtle.setheading(42)
turtle.circle(-200, 29)
turtle.end_fill()
# 右腿内
turtle.penup()
turtle.goto(-38, -210)
turtle.fillcolor("black")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(-155)
turtle.circle(15, 100)
turtle.circle(-10, 110)
turtle.circle(-100, 30)
turtle.circle(-15, 65)
turtle.circle(-100, 10)
turtle.circle(200, 15)
turtle.setheading(-14)
turtle.circle(-200, 27)
turtle.end_fill()
# 右眼
# 眼圈
turtle.penup()
turtle.goto(-64, 120)
turtle.begin_fill()
turtle.pendown()
turtle.setheading(40)
turtle.circle(-35, 152)
turtle.circle(-100, 50)
turtle.circle(-35, 130)
turtle.circle(-100, 50)
turtle.end_fill()
# 眼珠
turtle.penup()
turtle.goto(-47, 55)
turtle.fillcolor("white")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(0)
turtle.circle(25, 360)
turtle.end_fill()
turtle.penup()
turtle.goto(-45, 62)
turtle.pencolor("darkslategray")
turtle.fillcolor("darkslategray")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(0)
turtle.circle(19, 360)
turtle.end_fill()
turtle.penup()
turtle.goto(-45, 68)
turtle.fillcolor("black")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(0)
turtle.circle(10, 360)
turtle.end_fill()
turtle.penup()
turtle.goto(-47, 86)
turtle.pencolor("white")
turtle.fillcolor("white")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(0)
turtle.circle(5, 360)
turtle.end_fill()
# 左眼
# 眼圈
turtle.penup()
turtle.goto(51, 82)
turtle.fillcolor("black")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(120)
turtle.circle(-32, 152)
turtle.circle(-100, 55)
turtle.circle(-25, 120)
turtle.circle(-120, 45)
turtle.end_fill()
# 眼珠
turtle.penup()
turtle.goto(79, 60)
turtle.fillcolor("white")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(0)
turtle.circle(24, 360)
turtle.end_fill()
turtle.penup()
turtle.goto(79, 64)
turtle.pencolor("darkslategray")
turtle.fillcolor("darkslategray")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(0)
turtle.circle(19, 360)
turtle.end_fill()
turtle.penup()
turtle.goto(79, 70)
turtle.fillcolor("black")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(0)
turtle.circle(10, 360)
turtle.end_fill()
turtle.penup()
turtle.goto(79, 88)
turtle.pencolor("white")
turtle.fillcolor("white")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(0)
turtle.circle(5, 360)
turtle.end_fill()
# 鼻子
turtle.penup()
turtle.goto(37, 80)
turtle.fillcolor("black")
turtle.begin_fill()
turtle.pendown()
turtle.circle(-8, 130)
turtle.circle(-22, 100)
turtle.circle(-8, 130)
turtle.end_fill()
# 嘴
turtle.penup()
turtle.goto(-15, 48)
turtle.setheading(-36)
turtle.begin_fill()
turtle.pendown()
turtle.circle(60, 70)
turtle.setheading(-132)
turtle.circle(-45, 100)
turtle.end_fill()
# 彩虹圈
turtle.penup()
turtle.goto(-135, 120)
turtle.pensize(5)
turtle.pencolor("cyan")
turtle.pendown()
turtle.setheading(60)
turtle.circle(-165, 150)
turtle.circle(-130, 78)
turtle.circle(-250, 30)
turtle.circle(-138, 105)
turtle.penup()
turtle.goto(-131, 116)
turtle.pencolor("slateblue")
turtle.pendown()
turtle.setheading(60)
turtle.circle(-160, 144)
turtle.circle(-120, 78)
turtle.circle(-242, 30)
turtle.circle(-135, 105)
turtle.penup()
turtle.goto(-127, 112)
turtle.pencolor("orangered")
turtle.pendown()
turtle.setheading(60)
turtle.circle(-155, 136)
turtle.circle(-116, 86)
turtle.circle(-220, 30)
turtle.circle(-134, 103)
turtle.penup()
turtle.goto(-123, 108)
turtle.pencolor("gold")
turtle.pendown()
turtle.setheading(60)
turtle.circle(-150, 136)
turtle.circle(-104, 86)
turtle.circle(-220, 30)
turtle.circle(-126, 102)
turtle.penup()
turtle.goto(-120, 104)
turtle.pencolor("greenyellow")
turtle.pendown()
turtle.setheading(60)
turtle.circle(-145, 136)
turtle.circle(-90, 83)
turtle.circle(-220, 30)
turtle.circle(-120, 100)
turtle.penup()
# 爱心
turtle.penup()
turtle.goto(220, 115)
turtle.pencolor("brown")
turtle.pensize(1)
turtle.fillcolor("brown")
turtle.begin_fill()
turtle.pendown()
turtle.setheading(36)
turtle.circle(-8, 180)
turtle.circle(-60, 24)
turtle.setheading(110)
turtle.circle(-60, 24)
turtle.circle(-8, 180)
turtle.end_fill()
# 五环
turtle.penup()
turtle.goto(-5, -170)
turtle.pendown()
turtle.pencolor("blue")
turtle.circle(6)
turtle.penup()
turtle.goto(10, -170)
turtle.pendown()
turtle.pencolor("black")
turtle.circle(6)
turtle.penup()
turtle.goto(25, -170)
turtle.pendown()
turtle.pencolor("brown")
turtle.circle(6)
turtle.penup()
turtle.goto(2, -175)
turtle.pendown()
turtle.pencolor("lightgoldenrod")
turtle.circle(6)
turtle.penup()
turtle.goto(16, -175)
turtle.pendown()
turtle.pencolor("green")
turtle.circle(6)
turtle.penup()
turtle.pencolor("black")
turtle.goto(-16, -160)
turtle.write("BEIJING 2022", font=('Arial', 10, 'bold italic'))
turtle.hideturtle()
#自定义内容，会显示在图片上方一行文字
turtle.pencolor("black")
turtle.goto(-96, 260)
turtle.write("吕宏博", font=('新宋体', 20, 'bold italic')) #调整文案，字体，字号
turtle.hideturtle()
turtle.done()

'''
'''
year = int(input('输入一个四位数的年份:'))
print(year)
varlist = ['申猴','酉鸡','戌狗','亥猪','子鼠','丑牛','寅虎','卯兔','辰龙','巳蛇','午马','未羊']
print(varlist[year%12])'''
'''
poker=[]
print('1.',poker)

#1 poker.append('Ace')
poker.append('2')
print('2.',poker)
''''''
import turtle as t
import datetime as d
def skip(step):
    t.penup()
    t.forward(step)
    t.pendown()
    
def setup_clock(radius):#绘制时钟外框
    t.reset()
    t.pensize(7)
    for i in range(60):
        skip(radius)
        if i%5 == 0:
            t.forward(20)
            skip(-radius-20)
        else:
            t.dot(5)
            skip(-radius)
        t.right(6)
 #注册t形状 ,名字叫做name      
def make_hand(name,length):
    t.begin_poly()  #开始绘制多边形
    t.forward(length)
    t.end_poly()    #接受绘制
    handForm=t.get_poly()
    t.register_shape(name,handForm)
    
def init():
    global hourHand,minHand,secHand,printer
    t.reset()
    values=(("hourHand",90),("minHand",125),("secHand",130))
    t.mode('logo')
    hands=[]
    for name,lenght in values:
        hand=t.Turtle()
        make_hand(name,lenght)
        hand.shape(name)
        hand.shapesize(1,1,3)
        hand.speed(0)
        hands.append(hand)
    hourHand,minHand,secHand=hands
    
    printer=t.Turtle()
    printer.hideturtle()
    printer.penup()
    
    
    
def draw_hand(time):
    hour=time.hour+time.minute/60
    minute=time.minute+time.second/60
    second=time.second
    
    secHand.setheading(second*6)
    minHand.setheading(minute*6)
    hourHand.setheading(hour*30)  


def week(time):
    week=["星期一", "星期二", "星期三","星期四", "星期五", "星期六", "星期日"]
    return week[time.weekday()]   

def day(time):
    return f'{time.year}{time.month},{time.day}'

def draw_date(time):
    t.tracer(False)
    t.forward(70)
    
    printer.write(week(time),align='center',font=('Courier',14,'bold'))
    printer.back(130)
    printer.write(week(time),align='center',font=('Courier',14,'bold'))
    t.tracer(True)
    
if __name__ == '__main__':#加上绘制
    t.tracer(False)
    init()
    setup_clock(200)
    t.tracer(True)
    time=d.datetime.today()
    draw_hand(time)
    t.done()
    
    
    '''
'''
import turtle
from datetime import *
 
# 抬起画笔，向前运动一段距离放下
def skip(step):
    turtle.penup()
    turtle.forward(step)
    turtle.pendown()
 
def mkHand(name, length):
    # 注册Turtle形状，建立表针Turtle
    turtle.reset()
    # 先反向运动一段距离，终点作为绘制指针的起点
    skip(-length * 0.1)
    # 开始记录多边形的顶点。当前的乌龟位置是多边形的第一个顶点。
    turtle.begin_poly()
    turtle.forward(length * 1.1)
    # 停止记录多边形的顶点。当前的乌龟位置是多边形的最后一个顶点。将与第一个顶点相连。
    turtle.end_poly()
    # 返回最后记录的多边形。
    handForm = turtle.get_poly()
    turtle.register_shape(name, handForm)
 
def init():
    global secHand, minHand, houHand, printer
    # 重置Turtle指向北
    turtle.mode("logo")
    # 建立三个表针Turtle并初始化
    mkHand("secHand", 135)
    mkHand("minHand", 125)
    mkHand("houHand", 90)
    secHand = turtle.Turtle()
    secHand.shape("secHand")
    minHand = turtle.Turtle()
    minHand.shape("minHand")
    houHand = turtle.Turtle()
    houHand.shape("houHand")
 
    for hand in secHand, minHand, houHand:
        hand.shapesize(1, 1, 3)
        hand.speed(0)
 
    # 建立输出文字Turtle
    printer = turtle.Turtle()
    # 隐藏画笔的turtle形状
    printer.hideturtle()
    printer.penup()
 
# 绘制表盘
def setupClock(radius):
    # 建立表的外框
    turtle.reset()
    turtle.pensize(7)
    for i in range(60):
        # 向前移动半径值
        skip(radius)
        if i % 5 == 0:
            # 画长刻度线
            turtle.forward(20)
            # 回到中心点
            skip(-radius - 20)
 
            # 移动到刻度线终点
            skip(radius + 20)
            # 下面是写表盘刻度值,为了不与划线重叠，所以对于特殊位置做了处理
            if i == 0:
                turtle.write(int(12), align="center", font=("Courier", 14, "bold"))
            elif i == 30:
                skip(25)
                turtle.write(int(i/5), align="center", font=("Courier", 14, "bold"))
                skip(-25)
            elif (i == 25 or i == 35):
                skip(20)
                turtle.write(int(i/5), align="center", font=("Courier", 14, "bold"))
                skip(-20)
            else:
                turtle.write(int(i/5), align="center", font=("Courier", 14, "bold"))
            
            # 回到中心点
            skip(-radius - 20)
        else:
            # 画圆点
            turtle.dot(5)
            skip(-radius)
        # 顺时针移动6°
        turtle.right(6)
 
def week(t):
    week = ["星期一", "星期二", "星期三",
            "星期四", "星期五", "星期六", "星期日"]
    return week[t.weekday()]
 
def date(t):
    y = t.year
    m = t.month
    d = t.day
    return "%s %d%d" % (y, m, d)
 
def tick():
    # 绘制表针的动态显示
    t = datetime.today()
    second = t.second + t.microsecond * 0.000001
    minute = t.minute + second / 60.0
    hour = t.hour + minute / 60.0
    secHand.setheading(6 * second)
    minHand.setheading(6 * minute)
    houHand.setheading(30 * hour)
 
    turtle.tracer(False)
    printer.forward(65)
    printer.write(week(t), align="center",
                  font=("Courier", 14, "bold"))
    printer.back(130)
    printer.write(date(t), align="center",
                  font=("Courier", 14, "bold"))
    printer.home()
    turtle.tracer(True)
 
    # 100ms后继续调用tick
    turtle.ontimer(tick, 100)
 
def main():
    # 打开/关闭龟动画，并为更新图纸设置延迟。
    turtle.tracer(False)
    init()
    setupClock(160)
    turtle.tracer(True)
    tick()
    turtle.mainloop()
 
if __name__ == "__main__":
    main()

'''
'''
import turtle as t
import datetime as d
def skip(step):
    t.penup()
    t.forward(step)
    t.pendown()
    
def setup_clock(radius):#绘制时钟外框
    t.reset()
    t.pensize(7)
    for i in range(60):
        skip(radius)
        if i%5 == 0:
            t.forward(20)
            skip(-radius-20)
        else:
            t.dot(5)
            skip(-radius)
        t.right(6)
 #注册t形状 ,名字叫做name      
def make_hand(name,length):
    t.begin_poly()  #开始绘制多边形
    t.forward(length)
    t.end_poly()    #接受绘制
    handForm=t.get_poly()
    t.register_shape(name,handForm)
    
def init():
    global hourHand,minHand,secHand,printer
    t.reset()
    values=(("hourHand",90),("minHand",125),("secHand",130))
    t.mode('logo')
    hands=[]
    for name,lenght in values:
        hand=t.Turtle()
        make_hand(name,lenght)
        hand.shape(name)
        hand.shapesize(1,1,3)
        hand.speed(0)
        hands.append(hand)
    hourHand,minHand,secHand=hands
    
    printer=t.Turtle()
    printer.hideturtle()
    printer.penup()
    
    
    
def draw_hand(time):
    hour=time.hour+time.minute/60
    minute=time.minute+time.second/60
    second=time.second
    
    secHand.setheading(second*6)
    minHand.setheading(minute*6)
    hourHand.setheading(hour*30)  


def week(time):
    week=["星期一", "星期二", "星期三","星期四", "星期五", "星期六", "星期日"]
    return week[time.weekday()]   

def day(time):
    return f'{time.year}{time.month},{time.day}'

def draw_date(time):
    t.tracer(False)
    t.forward(70)
    
    printer.write(week(time),align='center',font=('Courier',14,'bold'))
    printer.back(130)
    printer.write(week(time),align='center',font=('Courier',14,'bold'))
    t.tracer(True)
    
if __name__ == '__main__':#加上绘制
    t.tracer(False)
    init()
    setup_clock(200)
    t.tracer(True)
    time=d.datetime.today()
    draw_hand(time)
    t.done()
    
    
    '''
    '''
    n=eval(input())
n=n+1
s=0
for i in range(1,n):
    s=s+i*i
print(s)
'''

'''
d1={'01':13,'02':12,'03':14}
d2={'01':3,'02':2,'03':4}
num=input("请输入地区编号：")
kg=eval(input("请输入快递重量："))
if(kg<=2):
    money=d1[num]*kg
else:
    money=d1[num]*2+(kg-2)*d2[num]
print("收费",money,"元")

'''
'''
s='1 请弓、2 请箭、3 请刀、4 请甲、5 请枪旗、6 请锅幕、7 请马、8 请衣赐、9 请粮料、10 请草料、11 请车牛、12 请船、13 请攻城守具、14请添兵、15请移营、16请进军、17请退军、18请固守、19未见贼、20 见贼讫、21贼多、22贼少、23 贼相敌、24 贼添兵、25 贼移营、26 贼进兵、27 贼退兵、28 贼固守、29 围得贼城、30 解围城、31 被贼围、32 贼围解、33 战不胜、34 战大胜、35 战大捷、36 将士投降、37 将士叛、38 士卒病、39 都将病、40 战小胜'
s=s.replace(s[1],'')
for i in range(10):
 s=s.replace(str(i),'')
l1=s.split('、')
l2=list("城阙辅三秦,风烟望五津。与君离别意,同是宦游人。海内存知己,天涯若比邻。无为在歧路,儿女共沾巾。".replace('。','').replace('，',''))
d=dict(zip(l1,l2))
q=input('请输入战斗情况：')
print('密码是：',d[q])
'''
'''
ls = ["综合", "理工", "综合", "综合", "综合", "综合", "综合", "综合", "综合", "综合","师范", "理工", "综合", "理工", "综合", "综合", "综合", "综合", "综合","理工","理工", "理工", "理工", "师范", "综合", "农林", "理工", "综合", "理工", "理工","理工", "综合", "理工", "综合", "综合", "理工", "农林", "民族", "军事"]
counts = {}
for word in ls:
    counts[word]=counts.get(word,0)+1
for i in counts:
    print("{0}：{1}".format(i, counts[i]))
'''
'''
dictd={"西游记":"吴承恩","三国演义":"罗贯中","红楼梦":"曹雪芹","儒林外史":"吴敬梓"}

dictd["水浒"]="施耐庵"
dictd["曹雪芹"]="曹雪芹,高鹗"
del dictd["曹雪芹"]
dictd["红楼梦"]="曹雪芹,高鹗"
del dictd["儒林外史"]

for i in dictd:
    print(f'{dictd[i]}:{i}')

'''
'''
dictMenu={'卡布奇洛':32,'摩卡':30,'抹茶蛋糕':28,'布朗尼':26}
sum=0
d=dictMenu.values()
for i in d:
 sum+=i
 print(sum)

'''


'''
import turtle as t

def draw_sub_tree(tree_len,tree_angle,tree_wide):
    if tree_len<5:
        return 
    else:
        t.pensize(tree_wide)

        t.forward(tree_len)

        t.right(tree_angle)
        draw_sub_tree(tree_len-10,tree_angle,tree_wide*2/3)
        
        t.left(tree_angle*2)
        draw_sub_tree(tree_len-10,tree_angle,tree_wide*2/3)

        t.right(tree_angle)
        setColor(tree_len)
        t.backward(tree_len)

def setColor(tree_len):
    if tree_len<30:
        t.pencolor('red')
    else:
        t.pencolor('black')
if __name__ == '__main__':
    t.left(90)
    t.penup()
    t.backward(150)
    t.pendown()
    t.pencolor('black')
    tree_len,tree_angle,tree_wide = 90,45,10
    draw_sub_tree(tree_len,tree_angle,tree_wide)
    t.exitonclick()
'''

'''
def car(year,model,brand='宝马'):

    return f'这是一辆{year}年生产，型号是{model}的{brand}牌汽车。'


ls = input('请输入str：').split()

print(car(*ls))
'''

'''
s = '醋溜黄瓜：8元，番茄鸡蛋：28元，糍粑鱼：32元，小炒肉：28元，红烧肉：28元，熘白菜：18元，三鲜汤：19元，煎茄子：18元，小炒黄牛肉：45元，手撕鸡：48元，花生米：6元'

l = s.split('，')
menu = {}
for i in l:
    menu[i.split('：')[0]] = i.split('：')[1]

def order(*name):
    print(name)
    price = 0
    print('您的点单：')
    print('---------------------')
    for item in name:
        price += eval(menu[item].replace('元',''))
        print(f'{item}：{menu[item]}')
        print('---------------------')
    print(f'合计：{price}元')

if __name__ == '__main__':
    order('醋溜黄瓜','番茄鸡蛋')
    '''
    '''
def fbi(n):
    if n == 1 or n == 2:
        return 1
    else:
        return fbi(n-1) + fbi(n-2)
 
n = eval(input('输入月份：'))
print('兔子总数量:',fbi(n))''''''

count=0
def move(n,a,b,c):
    global count
    if n==1:
        print ("{}-->{}".format(a,c))
        count+=1
    else:
        move(n-1,a,c,b)
        move(1,a,b,c)
        move(n-1,b,a,c)
      
move(3,"a","b","c")
print(count)
'''
'''
# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
import turtle as t

def draw_sub_tree(tree_len,tree_angle,tree_wide):
    if tree_len<5:
        return
    else:
        t.pensize(tree_wide)
        t.forward(tree_len)
        t.right(tree_angle)
        draw_sub_tree(tree_len-10, tree_angle,tree_wide*2/3)
        t.left(tree_angle*2)
        draw_sub_tree(tree_len-10, tree_angle,tree_wide*2/3)
        t.right(tree_angle)
        setColor(tree_len)
        t.backward(tree_len)
        
def setColor(tree_len):
    if tree_len<=30:
        t.pencolor('green')
    else:
        t.pencolor('brown')

if __name__ == '__main__' :
    t.left(90)
    t.penup()
    t.backward(150)
    t.pendown()
    t.pencolor('brown')
    
    tree_len,tree_angle,tree_wide = 80,30,5
    draw_sub_tree(tree_len,tree_angle,tree_wide)
'''
'''grades = [
  ('202001',85,92,73),
  ('202002',68,70,53),
  ('202003',72,58,77),
  ('202004',95,89,91),
  ('202005',65,72,89)]

new_ = sorted(grades,key=lambda tup:tup[1]+tup[2]+tup[3],reverse=True)

for i in new_:
    for j in i:
        print(j,end=' ')
    print(i[1]+i[2]+i[3])'''
'''dic = {
    'python': 95,
    'java': 99,
    'c': 100
}
#print(len(dic))
dic['java']=100
for key''''''
a=dict(name='张三',age='18',address='湖北')
print(a.keys())
for key in a.keys(): 
    print(key,a[key]) #输出键和值
''''''
#字典的创建
#手动创建
a={'1':"110"}
print(a)
#空字典
dic={}
print(dic)
#通过关键字dict和关键字参数创建
dic = dict(spam = 1, egg = 2, bar =3)
print(dic)
#通过二元组列表创建
list = [('spam', 1), ('egg', 2), ('bar', 3)]
print(list)
dic = dict(list)
print(dic)
dic = dict(zip('abc', [1, 2, 3]))
print(dic)
dic= dict()
print(dic)''''''
dict = {1: 1, 2: 'aa', 'D': 'ee', 'Ty': 45}
for item in dict.items():
    print(item)
    
dic = {'name':'jyw', 'lang':'python', 'age':'21'}
for k,v in dic.items():
    print(k,v)
    
dic = {'name':'jyw', 'lang':'python', 'age':'21'}
for i in dic:
    print(i,dic[i])''''''
list1 = {'1':1,'2':2}
list2 = list1
list1['1'] = 5
sum = list1['1'] + list2['1']
print(sum)''''''
class Person :
    '这是一个学习Python定义的一个Person类'
    # 下面定义了一个类变量
    hair = 'black'
    def __init__(self, name = 'Charlie', age=8):
        # 下面为Person对象增加2个实例变量
        self.name = name
        self.age = age
    # 下面定义了一个say方法
    def say(self, content):
        print(content)
help(Person)''''''
class Circle(object):
   pi = 3.14  # 类属性

   def __init__(self, r):
       self.r = r

circle1 = Circle(1)
circle2 = Circle(2)
print('----未修改前-----')
print('pi=\t', Circle.pi)
print('circle1.pi=\t', circle1.pi)  #  3.14
print('circle2.pi=\t', circle2.pi)  #  3.14
print('----通过类名修改后-----')
Circle.pi = 3.14159  # 通过类名修改类属性，所有实例的类属性被改变
print('pi=\t', Circle.pi)   #  3.14159
print('circle1.pi=\t', circle1.pi)   #  3.14159
print('circle2.pi=\t', circle2.pi)   #  3.14159
print('----通过circle1实例名修改后-----')
circle1.pi=3.14111   # 实际上这里是给circle1创建了一个与类属性同名的实例属性
print('pi=\t', Circle.pi)     #  3.14159
print('circle1.pi=\t', circle1.pi)  # 实例属性的访问优先级比类属性高，所以是3.14111   
print('circle2.pi=\t', circle2.pi)  #  3.14159
print('----删除circle1实例属性pi-----')''''''
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

p1 = Person("Bill", 63)

print(p1.name)
print(p1.age)''''''
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

  def myfunc(self):
    print("Hello my name is " + self.name,"my year is "+str(self.age))

p1 = Person("Bill", 63)
p1.myfunc()''''''
class Person:
  def __init__(mysillyobject, name, age):
    mysillyobject.name = name
    mysillyobject.age = age

  def myfunc(abc):
    print("Hello my name is " + abc.name)

p1 = Person("Bill", 63)
p1.myfunc()'''''
'''class Dog():
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def sit(self):#模拟小狗被命令时蹲下
        print(self.name.title() +"is now sitting.")
    def roll_over(self):#模拟小狗被命令时打滚
        print(self.name.title()+"rolled over!")

my_dog=Dog('willie',6)
your_dog=Dog('lucy',3)
print("My dog's name is"+my_dog.name.title()+".")
print("My dog is "+str(my_dog.age)+" year old.")
my_dog.sit()
my_dog.roll_over()
print("\nYour dog's name is "+your_dog.name.title()+".")
print("Your dog is "+str(your_dog.age)+"years old.")
your_dog.sit()''''''

class Car():
    def __init__(self,make,model,year):
        self.make=make
        self.model=model
        self.year=year
    def get_descriptive_name(self):
        long_name=str(self.year)+' '+self.make+' '+self.model
        return long_name.title()
my_new_car=Car('audi','a4',2016)
print(my_new_car.get_descriptive_name())
''''''
trupls = [(1, 2), (2, 3, 4), (4, 5)]
lists = []
for tru in trupls:
    for num in tru:
        lists.append(num)
print(lists)'''
'''
fd=open("D:\\python文档\\test.txt","w",encoding="utf-8")
for i in range(1,100):
    fd.write("Hellow,World"+str(i)+"\n")
fd.close()'''
'''
fd=open("D:\\python文档\\test.txt","w",encoding="utf-8")
fd.write("吕宏博")
fd.close()
''''''
fd=open("D:\\python文档\\test.txt","a",encoding="utf-8")
fd.write("\n"+"吕宏博1")
fd.close()'''

fw=open("D:\\python文档\\data2.txt","w",encoding="utf-8")
sq=["塞下秋来风景异，衡阳雁去无留意。"+"\n"+
    "四面边声连角起，千嶂里，长烟落日孤城闭。"]
fw.writelines(sq)
fw.close()
'''
f = open("D:\\python文档\\data2.txt",'r', encoding='UTF-8')
lines = f.read()
print(lines)
f.close()'''
'''
f = open("D:\\python文档\\data2.txt",'r', encoding='UTF-8')
line = f.readline()
while line:
    print (line)
    line = f.readline()
f.close()''''''

score_list=[]
while-True:
    name=input('请输入姓名：')
    if (name == '-1'):
        break
    score=eval(input('请输入数学考试分数：'))
    score_list.append((name,score))
#写文件
with open('math.txt','w')as f:
    for name,score in score_list:
        f.write(f'{name}:{score}')
        
    from numpy import double
    score=[]
    with open('math.txt','r')as f:
        for line in f:
            line=line.rstrip()
            score.append(double(line.split(':')[-1]))
        print(score)
    print('ave:',sum(score)/len(score))
'''''''
f = open("D:\\python文档\\data2.txt",'r', encoding='UTF-8')
lines = f.readlines()
for line in lines:
    print (line)
f.close()''''''
tmp = [2, 1, 5, 4, 7]
print(max(tmp))
print(tmp.index(max(tmp)))''''''
f= open('D:\\python文档\\大江东去.txt','r',encoding='UTF-8')
print(f.read())
f.close()''''''

with open('D:\\python文档\\大江东去.txt','r',encoding='UTF-8') as f:
    a = list(f)
    for x in a:
        count1 =a.count(x)
        print(x, ' 出现了%s次'%count1)
''''''
string = "桃之夭夭，灼灼其华。之子于归，宜其室家。" \
         "桃之夭夭，有蕡其实。之子于归，宜其家室。" \
         "桃之夭夭，其叶蓁蓁。之子于归，宜其家人。"
string_list1 = set(string)
for x in string_list1:
    count1 = string.count(x)
    print(x, ' 出现了%s次'%count1)''''''
with open('D:\\python文档\\大江东去.txt','r',encoding='UTF-8') as f:
     content = f.read()
str=equal()
count1 = count2 = count3 = 0
for s in str:
    if 'a' <= s <= 'z' or 'A' <= s <= 'Z':
        count1 += 1  # 英文计数
    elif 0x4e00 <= ord(s) <= 0x9fa5:  # 中文的Unicode编码范围
        count2 += 1  # 中文计数
    elif 48 <= ord(s) and ord(s) <= 57:
        count3 += 1  # 数字计数


print("该字符串有空格{0}个".format(str.count(" ")))      # 统计空格
print("该字符串有英文字符{0}个".format(count1))    # 统计英文字符
print("该字符串有中文字符{0}个".format(count2))    # 统计中文字符
print("该字符串有数字{0}个".format(count3))          # 统计数字字符
print("该字符串有其他字符{0}个".format(len(str)-count1-count2-count3-str.count(" ")))  # 统计其他字符'''
'''with open('D:\\python文档\\大江东去.txt','r',encoding='UTF-8') as string:
    string_list1 = set(string)
for x in string_list1:
    count1 = string.count(x)
    print(x, ' 出现了%s次'%count1)''''''
data = ''                           # 保存最后处理完的文本
with open('target.txt', 'r') as f:  # 按行处理 txt 文本
  for line in f:
    line = line.replace(' ', '')    # 删除所有空格
    line = line.replace('\n', '')   # 删除所有回车
    data = data + line              # 字符串拼接
 
fw = open('result.txt', 'w')        
fw.write(data) '''
'''
f= open('D:/python文档/大江东去.txt','r',encoding='UTF-8')
print(f.read())
f.close()''''''
#coding:utf-8

word_lst = []
word_dict = {}

exclude_str = "，。！？、（）【】<>《》=：+-*—“”…"

with open('D:\\python文档\\大江东去.txt','r',encoding='UTF-8') as fileIn ,open('D:\\python文档\\大江东去.txt','r',encoding='UTF-8') as fileOut:

    # 添加每一个字到列表中
    for line in fileIn:
        for char in line:
            word_lst.append(char)

    # 用字典统计每个字出现的个数
    for char in word_lst:
        if char not in exclude_str:
            if char.strip() not in word_dict: # strip去除各种空白
                word_dict[char] = 1
            else :
                word_dict[char] += 1

    # 排序
    #   x[1]是按字频排序，x[0]则是按字排序
    lstWords = sorted(word_dict.items(), key=lambda x:x[1],  reverse=True)

    # 输出结果 (前100)
    print ('字符\t字频')
    print ('=============')
    for e in lstWords[:100]:
        print ('%s\t%d' % e)
        fileOut.write('%s, %d\n' % e)'''
        '''
f=open('D:\\python文档\\test.txt','w',encoding='UTF-8')
#打开文
f.write('hello wrld')
#对文件执行写操作
f=open('D:\\python文档\\test.txt')
#con=f.read()
#print(con)
#content = f.readlines()
#print(content)#此时返回的是一个列表，一个数据为文件中的一行数据
# 关闭⽂件
#first_line=f.readline()''''''
'''print(f'第一行数据是：{first_line}')
second_line=f.readline()
print(f'第二行的数据是：{second_line}')'''
import time
f = open('D:\\python文档\\test.txt',"a+")
print("现在的文件偏移量：",f.tell())
f.seek(0)
print("重置文件偏移量后：",f.tell())
f.write("time.ctime()\n")
f.close
'''
#关闭文件，这一步是必不可少的
'''

n=eval(input())
n=n+1
s=0
for i in range(1,n):
    s=s+i*i
print(s)

'''
'''
poker=[]
print('1.',poker)

#1 poker.append('Ace')
poker.append('2')
print('2.',poker)
'''