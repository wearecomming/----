import requests


from flask import Flask
import urllib
def qingyunke(msg):
    url = 'http://api.qingyunke.com/api.php?key=free&appid=0&msg={}'.format(urllib.parse.quote(msg))
    html = requests.get(url)
    return html.json()["content"]
msg = '今晚吃什么'
print("原话>>", msg)
res = qingyunke(msg)
print("青云客>>", res)