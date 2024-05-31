''''
import requests
import csv
import os
import urllib.request

# 获取所有的英雄的id
def showHeroId():
    print("-------------------------英雄id和英雄名称-----------------------")
    # 1.发送请求
    result=requests.get(heroListUrl).json()["hero"]
    i=0
    for heroId in result:
        heroIdList.append(heroId["heroId"])
        print(heroId["heroId"],heroId["name"],end="\t\t")
        i+=1
        if i==3:
            print("") # 换行
            i=0

# 根据用户输入的英雄的id下载对应英雄的皮肤
def dowloadSkinById():
    # 1.获取用户输入的id
    inputId=input("请输入您要下载皮肤的英雄id:")
    # 2.判断用户输入的id在英雄id列表中是否存在
    # 怎么判断一个字符是否在一个列表中？
    if inputId in heroIdList:
        # 3.根据输入的id组成英雄详情url地址并发送请求
        skins=requests.get(heroInfoUrl.format(inputId)).json()["skins"]
        # 4.获取英雄的名字，并以名字作为文件夹的名称
        heroName=skins[0]["heroName"]
        # 5.创建文件夹
        if not os.path.exists(heroName):
            os.mkdir(heroName)
        # 6.获取所有的皮肤
        for skin in skins:
            # 皮肤的名称
            skinName=skin["name"]
            # 判断mainImg是不是为空，如果不为空可以下载，为空下载炫彩皮肤
            if skin["mainImg"]!="":
                urllib.request.urlretrieve(skin["mainImg"],"{}/{}.jpg".format(heroName,skinName))
            else:
                urllib.request.urlretrieve(skin["chromaImg"], "{}/{}.jpg".format(heroName, skinName))
            print("{}的{}皮肤下载完成".format(heroName,skinName))
    else:
        print("您输入的id不存在，请重新输入:")


# 主菜单
def menu():
    # 先展示所有的英雄的id
    showHeroId()
    print("------------------------------------------------------------------")
    # 调用下载皮肤的方法
    dowloadSkinById()
    # 让用户重新输入  y:继续 n:退出
    yesOrNo=input("用户输入y:继续 输入n:退出")
    if yesOrNo=="y":
        menu()
    else:
        print("程序退出....")

if __name__ == '__main__':
    # 英雄的url地址
    heroListUrl="https://game.gtimg.cn/images/lol/act/img/js/heroList/hero_list.js?ts=2786869"
    # 英雄详情url地址
    heroInfoUrl="https://game.gtimg.cn/images/lol/act/img/js/hero/{}.js?ts=2786869"
    # 定义空的列表存储英雄的id
    heroIdList=[]
    menu()
'''

for i in range(100):
    if  i%3 == 0:
        continue
    print(i)

