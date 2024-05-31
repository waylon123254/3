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
def func(**p):
    return ''.join(sorted(p))
    
print(func(x=1, y=2, z=3))
''''''
def func(**p):
    return sum(p.values())
print(func(x=1, y=2, z=3))
''''''
def demo(x, y, op):
    return eval(str(x)+op+str(y))
print(demo(3, 5, '+'))
''''''
def lv():
    pass
print(lv())
''''''
def getsum(*num) :
    sum = 0
    for n in num :
        sum = sum + n * n
    return sum
nums = [1, 2, 3]
print(getsum(mums))
''''''
def foo(a, b='commit', *c, **d):
    print(a, b, c, d)

foo(1, z='merge', b='clone', x=6, y=7)
foo(1, 2, 'push', 5, x='pull', y='chekcout')
''''''
x=eval(input("请输入数字："))
y=eval(input("请输入数字："))
z=eval(input("请输入数字："))
if(x*100+y*10+z==x**3+y**3+z**3):
    print(x*100+y*10+z)
''''''
#输出制定矩形
x=eval(input("请输入数字："))
y=eval(input("请输入数字："))
for i in range(1,x):
    for j in range(1,y):
        print('*',end='\t')
    print()
''''''
x=eval(input("请输入数字："))
for i in range(1,x):
    for j in range(1,i+1):
        print('*',end='')
    print()
'''
# x=eval(input("请输入数字："))
# for i in range(1,x):
#     for j in range(1,i+1):
#         print(i,'*',j,'=',i*j,end='\t')
#     print()

# import string
#
# def str_count(str):
#     '''找出字符串中的中英文、空格、数字、标点符号个数'''
#     count_en = count_dg = count_sp = count_zh = count_pu = 0
#
#     for s in str:
#         # 英文
#         if s in string.ascii_letters:
#             count_en += 1
#         # 数字
#         elif s.isdigit():
#             count_dg += 1
#         # 空格
#         elif s.isspace():
#             count_sp += 1
#         # 中文，除了英文之外，剩下的字符认为就是中文
#         elif s.isalpha():
#             count_zh += 1
#         # 特殊字符
#         else:
#             count_pu += 1
#
#     print('英文字符：', count_en)
#     print('数字：', count_dg)
#     print('空格：', count_sp)
#     print('中文字符：', count_zh)
#     print('特殊字符：', count_pu)




# with open('D:\\python文档\\大江东去.txt','r',encoding='UTF-8') as f:
#     content = f.read()
# print(content)
# str_count(content)
#import  string
# def hans_count(str):
#     hans_total = 0
#     for s in str:
#         # 中文字符其实还有很多，但几乎都用不到，这个范围已经足够了
#         if '\u4e00' <= s <= '\u9fef':
#             hans_total += 1
#     return hans_total
#
# with open('D:\\python文档\\大江东去.txt','r',encoding='UTF-8') as f:
#     content = f.read()
# print(hans_count(content))
'''
with open('D:\\python文档\\大江东去.txt','r',encoding='UTF-8') as string:
    string_list1 = set(string)
for x in string_list1:
    count1 = string.count(x)
    print(x, ' 出现了%s次'%count1)'''
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

fr.close()'''