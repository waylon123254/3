#
# import requests
# from bs4 import BeautifulSoup
# import csv
# # 1.定义url地址
# url="https://movie.douban.com/subject/4811774/comments?status=P"
# # 2.定义请求头
# head={
#     "User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Safari/537.36"
# }
# # 3.携带请求头发送请求
# response=requests.get(url,headers=head)
# # 4.使用bs4分析网站
# bs=BeautifulSoup(response.content,"html5lib")
# # 5.从源代码中刷选出div  id="comments"
# divs=bs.select_one("#comments")
# # 6.在divs基础上找到comment-item
# divList=divs.select(".comment-item")
# # 7.循环遍历
# for div in  divList:
#     # 8.找到div class="comment-info"
#     commentInfo=div.select_one(".comment-info")
#     # 9.找到作者
#     author=commentInfo.select_one("a").text
#     # 10.在commentinfo的基础上  打分
#     rating=commentInfo.select_one(".rating").get("title")
#     # 11.找到评论
#     commentText=div.select_one(".short").text.replace("\n","")
#     # 12.将作者、评分、评论写入到csv文件中
#     with open("豆瓣影评1.csv","a",encoding="utf-8",newline="") as file:
#         csvWriter=csv.writer(file)
#         csvWriter.writerow([author,rating,commentText])

# import requests
# from bs4 import BeautifulSoup
# import pandas as pd
# import numpy as np
# from sklearn.linear_model import LinearRegression
# import seaborn as sns
# import matplotlib.pyplot as plt
# import matplotlib
# from scipy.optimize import leastsq
# import scipy.stats as sts
#
# def get_html(url):
#     headers = {'user-agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/70.0.3538.102 Safari/537.36 Edge/18.18362'}#伪装爬虫
#
#     try:
#         #发送get请求
#         html = requests.get(url,headers = headers)
#         #配置编码
#         html.encoding = html.apparent_encoding
#         if html.status_code == 200:
#             print("成功过获取源代码")
#
#     except Exception as e:
#         print("获取源代码失败:%s"% e)
#
#     return html.text
#
#
# url = 'http://www.iqiyi.com/dianying_new/i_list_paihangbang.html'
# html = get_html(url)
#
# #提取HTML并解析想获取的数据
# soup = BeautifulSoup(html, 'html.parser')
#
# #爬取电影名
# #建立一个电影名列表Film_name
# Film_name = []
# a = soup.find_all('a', pos = '2')
#
# for name in a:
#     Film_name.append(name.text)
#
# #爬取评分
# #建立一个评分列表Score
# Score = []
# b = soup.find_all('span', class_ = 'score')
#
# for score in b:
#     Score.append(score.text)
#
# #爬取电影描述
# #建立一个电影描述列表Describe
# Describe = []
# c = soup.find_all('p', class_ = 'site-piclist_info_describe')
#
# for describe in c:
#     Describe.append(describe.text)
#
# #创建一个空列表lt
# lt = []
#
# #爬取前25组电影数据，保存到列表lt中
# print("{:^4}\t{:^5}\t{:^7}\t{:^8}".format('排名', '电影名', '评分', '电影描述'))
#
# for i in range(25):
#     #输出前25组数据
#     print("{:^4}\t{:^5}\t{:^7}\t{:^8}".format(i+1, Film_name[i], Score[i], Describe[i]))
#     lt.append([i+1, Film_name[i], Score[i], Describe[i]])
#
#
# #创建DateFrame
# df = pd.DataFrame(lt,columns = ['排名', '电影名', '评分', '电影描述'])
#
# #保存文件，数据持久化
# df.to_csv('爱奇艺电影热播榜.csv')
#
# #读取csv文件
# df = pd.DataFrame(pd.read_csv('爱奇艺电影热播榜.csv'))
# df
#
#
# #删除无效列与行
# #df.drop('电影名', axis=1, inplace = True)
# df.drop('电影描述', axis=1, inplace = True)
# df.head()
#
#
# #检查是否有重复值
# df.duplicated()
#
#
# #缺失值处理
# df[df.isnull().values==True]#返回无缺失值
#
#
# #用describe()命令显示描述性统计指标
# df.describe()
#
#
#
#
# #数据分析与可视化
#
# X = df.drop("电影名",axis=1)
# predict_model = LinearRegression()
# predict_model.fit(X,df['评分'])
# print("回归系数为:",predict_model.coef_)
#
#
# #绘制排名与评分的回归图
# matplotlib.rcParams['font.sans-serif']=['SimHei']#显示黑体中文
# sns.regplot(df.排名,df.评分)
#
#
# # 绘制柱状图
# plt.rcParams['axes.unicode_minus']=False #用来正常显示负号
# plt.bar(df.排名, df.评分, label="排名与评分柱状图")
# plt.xlabel("排名")
# plt.ylabel("评分")
# plt.title('排名与评分柱状图')
# plt.show()
#
# #绘制散点图
# def scatter():
#     plt.scatter(df.排名, df.评分, color='green', s=25, marker="o")
#     plt.xlabel("排名")
#     plt.ylabel("评分")
#     plt.title("排名与评分散点图")
#     plt.show()
# scatter()
#
#
# #绘制盒图
# def box_diagram():
#     plt.title('绘制排名与评分-箱体图')
#     sns.boxplot(x='排名',y='评分', data=df)
# box_diagram()
#
#
# #绘制折线图
# def line_diagram():
#     x = df['排名']
#     y = df['评分']
#     plt.xlabel('排名')
#     plt.ylabel('评分')
#     plt.plot(x,y)
#     plt.scatter(x,y)
#     plt.title("排名与评分折线图")
#     plt.show()
# line_diagram()
#
#
# #绘制分布图
# sns.jointplot(x="排名",y='评分',data = df)
#
# sns.jointplot(x="排名",y='评分',data = df, kind='reg')
#
# sns.jointplot(x="排名",y='评分',data = df, kind='hex')
#
# sns.jointplot(x="排名",y='评分',data = df, kind='kde', color='r')
#
# sns.kdeplot(df['排名'], df['评分'])
#
#
# #绘制一元一次回归方程
# def main():
#     colnames = ["排名", "电影名", "评分", "电影描述"]
#     df = pd.read_csv('爱奇艺电影热播榜.csv',skiprows=1,names=colnames)
#
#     X = df.排名
#     Y = df.评分
#     r=sts.pearsonr(X,Y) #相关性r
#     print('相关性r',r)
#     def func(p, x):
#         k, b = p
#         return k * x + b
#
#     def error_func(p, x, y):
#         return func(p,x)-y
#
#     p0 = [0,0]
#     #使用leastsq（）函数对数据进行拟合
#     Para = leastsq(error_func, p0, args = (X, Y))
#     k, b = Para[0]
#     print("k=",k,"b=",b)
#
#     plt.figure(figsize=(10,6))
#     plt.scatter(X,Y,color="green",label=u"评分分布",linewidth=2)
#     x=np.linspace(0,30,30)
#     y=k*x+b
#     plt.plot(x,y,color="red",label=u"回归方程直线",linewidth=2)
#
#     plt.title("电影排名和评分关系图")
#     plt.xlabel('排名')
#     plt.ylabel('评分')
#     plt.legend()
#     plt.show()
# main()
#
# #绘制一元二次回归方程
# def main2():
#     colnames = ["排名", "电影名", "评分", "电影描述"]
#     df = pd.read_csv('爱奇艺电影热播榜.csv',skiprows=1,names=colnames)
#
#     X = df.排名
#     Y = df.评分
#     r=sts.pearsonr(X,Y) #相关性r
#     print('相关性r',r)
#     def func(p, x):
#         a, b, c = p
#         return a * x * x + b * x + c
#
#     def error_func(p, x, y):
#         return func(p,x)-y
#
#     p0 = [0,0,0]
#     #使用leastsq（）函数对数据进行拟合
#     Para = leastsq(error_func, p0, args = (X, Y))
#     a, b, c = Para[0]
#     print("a=", a,"b=", b,"c=", c)
#
#     plt.figure(figsize=(10,6))
#     plt.scatter(X,Y,color="green",label=u"评分分布",linewidth=2)
#
#     x = np.linspace(0,30,30)
#     y = a * x * x + b * x + c
#
#     plt.plot(x,y,color="red",label=u"一元二次回归方程直线",linewidth=2)
#     plt.title("电影排名和评分关系图")
#     plt.xlabel('排名')
#     plt.ylabel('评分')
#     plt.legend()
#     plt.show()
# main2()

import requests
# from bs4 import BeautifulSoup
# import pandas as pd
#
#
# def get_html(url):
#     headers = {'user-agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/70.0.3538.102 Safari/537.36 Edge/18.18362'}#伪装爬虫
#
#     try:
#         #发送get请求
#         html = requests.get(url,headers = headers)
#         #配置编码
#         html.encoding = html.apparent_encoding
#         if html.status_code == 200:
#             print("成功过获取源代码")
#
#     except Exception as e:
#         print("获取源代码失败:%s"% e)
#
#     return html.text
#
#
# url = 'http://www.iqiyi.com/dianying_new/i_list_paihangbang.html'
# html = get_html(url)
#
# #提取HTML并解析想获取的数据
# soup = BeautifulSoup(html, 'html.parser')
#
# #爬取电影名
# #建立一个电影名列表Film_name
# Film_name = []
# a = soup.find_all('a', pos = '2')
#
# for name in a:
#     Film_name.append(name.text)
#
# #爬取评分
# #建立一个评分列表Score
# Score = []
# b = soup.find_all('span', class_ = 'score')
#
# for score in b:
#     Score.append(score.text)
#
# #爬取电影描述
# #建立一个电影描述列表Describe
# Describe = []
# c = soup.find_all('p', class_ = 'site-piclist_info_describe')
#
# for describe in c:
#     Describe.append(describe.text)
#
# #创建一个空列表lt
# lt = []
#
# #爬取前25组电影数据，保存到列表lt中
# print("{:^4}\t{:^5}\t{:^7}\t{:^8}".format('排名', '电影名', '评分', '电影描述'))
#
# for i in range(25):
#     #输出前25组数据
#     print("{:^4}\t{:^5}\t{:^7}\t{:^8}".format(i+1, Film_name[i], Score[i], Describe[i]))
#     lt.append([i+1, Film_name[i], Score[i], Describe[i]])
#
#
# #创建DateFrame
# df = pd.DataFrame(lt,columns = ['排名', '电影名', '评分', '电影描述'])
#
# #保存文件，数据持久化
# df.to_csv('爱奇艺电影热播榜.csv')
import requests
# import pandas as pd
# import re
#
# def data_resposen(url):
#     headers = {
#         "cookie": "你的cookie",
#         "user-agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.104 Safari/537.36"
#     }
#     resposen = requests.get(url, headers=headers)
#     return resposen
#
# def main(oid, month):
#     df = pd.DataFrame()
#     url = f'https://api.bilibili.com/x/v2/dm/history/index?type=1&oid={oid}&month={month}'
#     list_data = data_resposen(url).json()['data']  # 拿到所有日期
#     print(list_data)
#     for data in list_data:
#         urls = f'https://api.bilibili.com/x/v2/dm/web/history/seg.so?type=1&oid={oid}&date={data}'
#         text = re.findall(".*?([\u4E00-\u9FA5]+).*?", data_resposen(urls).text)
#         for e in text:
#             print(e)
#             data = pd.DataFrame({'弹幕': [e]})
#             df = pd.concat([df, data])
#     df.to_csv('弹幕.csv', encoding='utf-8', index=False, mode='a+')
#
# if __name__ == '__main__':
#     oid = '384801460'  # 视频弹幕链接的id值
#     month = '2021-08'  # 开始日期
#     main(oid, month)

import re
# import requests
# import csv
# from lxml import etree
# import time
#
# with open('吕宏博爱奇艺热播电影.csv', 'a',encoding='utf-8-sig',newline='') as f:
#     writer = csv.writer(f, dialect='excel')
#     writer.writerow(['电影名称', '电影评分', '电影排名', '导演', '主演', '电影海报地址', '上映日期', '电影国家', '电影类型'])
# # 定义get请求函数
# def get_page(url):
#     #定义请求头headers
#     try:
#         headers={
#             'User-Agent': 'Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/74.0.3729.169 Safari/537.36'
#         }
#         #发送get请求
#         res=requests.get(url=url,headers=headers)
#         #判断请求是否成功
#         if res.status_code==200:
#             response=res.content.decode("utf-8")
#             return response
#         else:
#             return False
#     except:
#         return False
#
# #定义数据解析函数
# def parse_data(html,url):
#     #数据解析一些内容有的需要xpath 有的需要正则
#     html = etree.HTML(html)
#     headers = {
#         'User-Agent': 'Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/74.0.3729.169 Safari/537.36'
#     }
#     # 发送get请求
#     res = requests.get(url=url, headers=headers)
#     response = res.content.decode("utf-8")
#
#     #电影名称
#     movie_title=html.xpath("//div[@class='hd']//a//span[1]//text()")
#     #电影评分
#     movie_score=html.xpath('//div[@class="star"]//span[2]//text()')
#     #电影排名
#     movie_degree=html.xpath('//div[@class="item"]//div//em//text()')
#     #电影海报地址
#     movie_poster=html.xpath('//div[@class="pic"]//a//img/@src')
#     #导演,使用正则
#     movie_director = re.findall(r"导演:(.*?);", response)
#     a = "".join(movie_director).split("&nbsp")#因为使用的正则抓取下来的字符串含有&nbsp，使用split()函数进行切分
#     movie_director = a[:25]
#     if movie_director=="":
#         movie_director=""
#     else:
#         movie_director=movie_director
#     #主演，使用正则
#     movie_main_act = re.findall("主演: (.*)<br>", response)
#     movie_main_act = "".join(movie_main_act).split("...")
#     if movie_main_act=="":
#         movie_main_act=""
#     else:
#         movie_main_act=movie_main_act
#     #上映日期
#     movie_datatime= re.findall(r"(\d*)&nbsp;", response)
#     b = "".join(movie_datatime)#转化为字符串
#     movie_datatime = [b[i:i + 4] for i in range(0, len(b), 4)]#转换的字符串是一对数字如199419931994....,所以进行切分 4个一切就是年份
#     if movie_datatime=="":
#         movie_datatime=""
#     else:
#         movie_datatime=movie_datatime
#     #电影国家
#     movie_country= re.findall("&nbsp;/&nbsp;(.*?)&nbsp;", response)
#     #电影类型,这个原网页写的有点不好爬   我看了网上其他的也都看不明白   所以就
#     #自己用这样的方法写出来 然后就匹配出来了，可定还有简便的方法 ，以后学习继续改进
#     movie_type= html.xpath("//div[@class='bd']/p/text()[2]")
#     n = ''.join([' '.join([i.strip() for i in price.strip().split('\n')]) for price in movie_type][::2]).split("\xa0/\xa0")#转换为字符串进行切分
#     #n 返回['1994', '美国', '犯罪 剧情1993', '中国大陆 中国香港', '剧情 爱情 同性1994', '美国', '剧情 爱情1994', '法国 美国', '剧情 动作 犯罪1997', '意大利', '剧情 喜剧 爱情 战争1997', '美国', '剧情 爱情 灾难2001', '日本', '剧情 动画 奇幻1993', '美国', '剧情 历史 战争2010', '美国 英国', '剧情 科幻 悬疑 冒险2009', '美国 英国', '剧情1998', '意大利', '剧情 音乐1998', '美国', '剧情 科幻2009', '印度', '剧情 喜剧 爱情 歌舞2008', '美国', '科幻 动画 冒险2004', '法国 瑞士 德国', '剧情 音乐2014', '美国 英国 加拿大 冰岛', '剧情 科幻 冒险1995', '中国香港 中国大陆', '喜剧 爱情 奇幻 古装2011', '韩国', '剧情2016', '美国', '喜剧 动画 冒险2002', '中国香港', '剧情 犯罪 悬疑1988', '日本', '动画 奇幻 冒险1972', '美国', '剧情 犯罪2006', '美国', '剧情 传记 家庭2010', '美国', '剧情 喜剧 爱情2011', '法国', '剧情 喜剧']
#     l = n[2::2]#因为上面的n列表我们包含的电影类型，所以n[2::2]操作把包含类型都取出来
#     o = ''.join(l)#转换为字符串
#     h = re.sub("\d{4}", ";", o)#使用正则将数字全都用;符号代替
#     #h 返回为 犯罪 剧情;剧情 爱情 同性;剧情 爱情;剧情 动作 犯罪;剧情 喜剧 爱情 战争;剧情 爱情 灾难;剧情 动画 奇幻;剧情 历史 战争;剧情 科幻 悬疑 冒险;剧情;剧情 音乐;剧情 科幻;剧情 喜剧 爱情 歌舞;科幻 动画 冒险;剧情 音乐;剧情 科幻 冒险;喜剧 爱情 奇幻 古装;剧情;喜剧 动画 冒险;剧情 犯罪 悬疑;动画 奇幻 冒险;剧情 犯罪;剧情 传记 家庭;剧情 喜剧 爱情;剧情 喜剧
#     movie_type = h.lstrip("\n")#这个之前打印的最左边有一个\n符号  所以使用lstrip()函数去掉
#     movie_type = movie_type.split(";")#然后用字符串split()函数以;符号进行切分
#     if movie_type=="":
#         movie_type=""
#     else:
#         movie_type=movie_type
#     #movie_type 最终的返回  ['犯罪 剧情', '剧情 爱情 同性', '剧情 爱情', '剧情 动作 犯罪', '剧情 喜剧 爱情 战争', '剧情 爱情 灾难', '剧情 动画 奇幻', '剧情 历史 战争', '剧情 科幻 悬疑 冒险', '剧情', '剧情 音乐', '剧情 科幻', '剧情 喜剧 爱情 歌舞', '科幻 动画 冒险', '剧情 音乐', '剧情 科幻 冒险', '喜剧 爱情 奇幻 古装', '剧情', '喜剧 动画 冒险', '剧情 犯罪 悬疑', '动画 奇幻 冒险', '剧情 犯罪', '剧情 传记 家庭', '剧情 喜剧 爱情', '剧情 喜剧']
#     for a,b,c,d,e,f,g,h,i in list(zip(movie_title,movie_score,movie_degree,movie_director,
#                                  movie_main_act, movie_poster,movie_datatime,movie_country,movie_type)):
#         print(a,b,c,d,e,f,g,h,i)
#         #写入
#         with open('吕宏博爱奇艺热播电影.csv', 'a',encoding='utf-8-sig',newline='') as f:
#             writer = csv.writer(f, dialect='excel')
#             writer.writerow([a,b,c,d,e,f,g,h,i])
#
# def main(num):
#     #定义url
#     url=f'https://movie.douban.com/top250?start={num}'
#     # 调用发送get请求函数
#     html=get_page(url)
#     # 如果发送请求成功，执行解析数据函数
#     if html:
#         parse_data(html,url)
#
#
# if __name__=="__main__":
#     for i in range(10):
#         print(f"正在爬取第{i}页数据")
#         main(i*25)
#         time.sleep(2)

# s="寂寞拍摄的那边都是v你手动操作vo"
# result=s.replace('v','***',1)
# print(result)
sensitive="拿来吧你"           #敏感词
word=input("请输入文字")
for i in word:
    if i in sensitive:
        word=word.replace(i,"*")
print(word)





