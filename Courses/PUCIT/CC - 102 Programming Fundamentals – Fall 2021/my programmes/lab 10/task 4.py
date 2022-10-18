from random import randint
#calculate the total average passangers of station
def Avgpass(m):
    tot = 0
    for tr_no in range(2):
        for days in range(7):
            for shifts in range(12):
                tot += m[tr_no][days][shifts]
    return tot/2.0/7.0/12.0
# calculate the total passangers of a week for individual trains
def pasTrain(m):
    a = [0]*2
    for tr_no in range(2):
        for days in range(7):
            for shifts in range(12):
                a[tr_no] += m[tr_no][days][shifts]
    return a
#calculate the maximum passangers in a week for each train
def maxpass(m):
    a = [[0 for i in range(7)]for j in range(2)]
    for tr_no in range(2):
        for days in range(7):
            for shifts in range(12):
                a[tr_no][days] += m[tr_no][days][shifts]
    c = [0]*2
    for tr_no in range(2):
        for days in range(6):
            if a[tr_no][days] > a[tr_no][days+1]:
                c[tr_no] = a[tr_no][days]
    return c
# calculate the maximum passanger in a week
def max_pass_week(m):
    a = maxpass(m)
    if a[0] > a[1]:
        return a[0]
    else:
        return a[1]
#working of the functions
def main():
    #the folowing array represents the random data of orange lane station#12
    data = [[[randint(0,150) for i in range(12) ]for j in range(7) ] for k in range(2)]
    print("the average passangers of station 12 in a week is: ",Avgpass(data))
    a = pasTrain(data)
    print("the total passangers of week for train 1 is: ",a[0])
    print("the total passangers of week for train 2 is: ",a[1])
    print("--------------------------------------")
    b = maxpass(data)
    print("the maximum number of passangers for train 1 for whole week is: ",b[0])
    print("the maximum number of passangers for train 2 for whole week is: ",b[1])
    print("======================================================")
    print("the maximum passangers of platform in whole week is :",max_pass_week(data))
main()









