'''
s1="The python language is a scripting language."
s2=s1.replace('scripting','general')
print(s2)''''''

str1="mysqlsqlserverPostgresQL"
str2="sql"
ncount=str1.count(str2,10)
print(ncount)''''''

h=['abc','de','fjk']
print(h[2][1])''''''

x = "Happy Birthday to you!"
print( x * 3)''''''

TempStr ="Hello World"
print(TempStr[-5:])''''''

print(1001==0x3e7)''''''

for i in range(3):
    for s in 'abcd':
        if s=="c":
            break
        print(s,end="")''''''

k=0
while True:
    s=input()
    if s=='q':
        k+=1
        continue
    else:
        k+=2
        break
print(k)''''''
def showplus(x):
    print(x)
 
num = showplus(6)
print(num)
print(type(num))''''''

#列表初始化
list=[]
while True:
    name=int(input("请输入姓名："))
        if name==-1:
        break
    score=int(input("请输入成绩："))

    with open()
print(name)
print(score)''''''

s = "The python language is a multimodel language."''''''
print({})
print(dict([]))
print(dict())''''''
def area(r,pi=3.1415926):
    return pi*r*r
print(area(pi=3.14,r=4))''''''

def func(*a,b):
    pass
func(1,2)''''''
x=[1,2,3,2,3]
print(x.remove(2))
print(x)'''
'''
fruits=['apple','banana','pear']
print(fruits[-1][-1])''''''

d={ "西游记":"吴承恩",
    "三国演义":"罗贯中",
    "红楼梦":"曹雪芹",
    "儒林外史":"吴敬梓"}
print(d)
print(d.update({"水浒":"施耐庵"}))
d["红楼梦"]="曹雪芹、高鹗"
print(d)
del d["儒林外史"]
print(d.keys(),d.values())'''
'''
def bubble_sort(alist):
    for j in range(len(alist)-1,0,-1):
        # j表示每次遍历需要比较的次数，是逐渐减小的
        for i in range(j):
            if alist[i] > alist[i+1]:
                alist[i], alist[i+1] = alist[i+1], alist[i]

li = [54,26,93,17,77,31,44,55,20]
bubble_sort(li)
print(max(li))'''

# d={'abc':123, 'def':456, 'ghi':789}
# print(len(d))
#
# x={'a':'b','c':'d'}
# print('b' in x)
#
# print({1,2,3,4}-{3,4,5,6})
#
# x= {"seashell":"海贝色","gold":"金色","pink":"粉红色","brown":"棕色","purple":"紫色","tomato":"西红柿色"}
# print(x["seashell"])
#
# x={1:2}
# x[2]=3
# print(x)
#
# print(set([1,1,2,3]))
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
''''''
poker=[]
print('1.',poler)

poker.append('Ace')
poker.append('2')
print('2.',poker)

s=['3,4,5,6,7,8,9,10,jack,Queen,king,joker']
l=s.split(',')
poker.extend(l) 

pocker=index[5]


print(pocker[:2:7])


del pocke[0:1]

item="Queen"
print("7."pocker.count(item))
print("8."item in pocker)

poker.insert(11,'2')
pocker.insert(-1,Ace)

print('10.',poker.index('Ace'))

print(len(pocker))

poker1 = sorted(poker)
print('12','poker1:',poker1,'\n','poker:',poker)


poker2 = list(reversed(poker))
print('13.',poker2)

poker1.sort(key = None,reverse=True)
print('14',poker1)

poker1.reverse()
print('15.',poker1)

print('16.',poker.pop(),poker)
'''
'''
words=[]
while True:
    word=input("请输入")
    if word=='-1':
        break
    words.append(word)
words.sort()
print(words)
'''
#
# from selenium import webdriver
# import time
# # 缺少验证码的情况
# url = "https://www.douban.com"
# web = webdriver.Chrome()
# web.implicitly_wait(3)   # 隐式等待3秒
# web.get(url)	# 链接到豆瓣首页
# iframe = web.find_element_by_tag_name('iframe')     # 主代码在iframe里面，要先切进去
# web.switch_to.frame(iframe)  # 切到内层
# web.find_element_by_css_selector('.account-tab-account').click()    # 模拟鼠标点击
# web.find_element_by_css_selector('#username').send_keys('你自己的账号')  # 模拟键盘输入
# web.find_element_by_css_selector('#password').send_keys('你自己的密码')
# web.find_element_by_css_selector('.btn-account').click()
# time.sleep(3)   # 要先等待，再获取源代码，否则获取的网页源代码是豆瓣首页
# html = web.page_source  # 获取源代码
#
# print("加辣椒了吗？" in html)		# 你自己的账号名称，如果结果为True，则登录成功！（记得改成自己账号哦！）
#
# web.quit()	# 关闭浏览器
#
# import requests
# from requests import ReadTimeout
#
#
# def get_page(url):
#     try:
#         response = requests.get(url, timeout=1)
#         if response.status_code == 200:
#             return response.text
#         else:
#             print('Get Page Failed', response.status_code)
#             return None
#     except (ConnectionError, ReadTimeout):
#         print('Crawling Failed', url)
#         return None
#
#
# def main():
#     url = 'https://www.baidu.com'
#     print(get_page(url))
#
#
# if __name__ == '__main__':
#     main()
#
# try:
#     f = open("file-not-exists", "r")
#
# except IOError as e:
#
#     print("open exception: %s: %s" % (e.errno, e.strerror))
#

for i in  range(100):
    if i%3 == 0:
        break
    print(i)