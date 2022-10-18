import datetime as dt

d = dt.date(2022, 4, 17)
print(d)
print(dt.date.today() - d)

t = dt.time(6, 40, 15)
print(t)
print(dt.datetime.now().time() - t)

