#creating a 2d array of size 12x6
from random import randint
a = [[randint(0,5000)for i in range(6)]for j in range(12)]
#a[j][0]= for travelling
#a[j][1]= for eating
#a[j][2]= for stationary
#a[j][3]= for savings
#a[j][4]= for charity
#a[j][5]= for fee charges
#function to find index of particular value in array
def val_index(j,val):
    a = len(j)
    i = 0
    while i < a:
        if j[i] == val:
            return i
        i = i + 1
    return False
#fnction to find total budget of year
def budget_of_year(a):
    sm = 0
    i = 0
    while i < 12:
        j = 0
        while j < 6:
            sm = a[i][j] + sm
            j = j + 1
        i = i + 1
    return sm
#function to find budget of each month
def budget_of_each_month(a):
    k =[0]*12
    i = 0
    while i < 12:
        j = 0
        while j < 6:
            k[i] = a[i][j] + k[i]
            j = j+1
        i += 1
    return k
#function to find month with maximum budget
def maxbudget_month(a):
    k = budget_of_each_month(a)
    i = 0
    lar = 0
    while i < 11:
        if k[i] > k[i+1]:
            lar = k[i]
        i = i + 1
    b = val_index(k,lar)
    return b,lar
#function to find total charity of year
def tot_charity(a):
    k = 4
    i = 0
    totch = 0
    while i < 12:
        totch = a[i][k] + totch
        i = 1 + i
    return totch
#function to find month with maximum travelling
def max_travel(a):
    mx = 0
    i = 0
    while i < 11:
        if a[i][0]>a[i+1][0]:
            mx = a[i][0]
        i = i+1
    j = 0
    while j < 11:
        if a[j][0]==mx:
            return mx,i
        j = j + 1
#function to find total fee charges of year
def tot_fee(a):
    s = 0
    i = 0
    while i < 12:
        s = a[i][5] + s
        i = i + 1
    return s
def main():
    print("the total budget of the year is: ",budget_of_year(a))
    i = 0
    b = budget_of_each_month(a)
    while i < 12:
        print("the total budget of the month",i," is: ",b[i])
        i += 1
    ind,mx = maxbudget_month(a)
    print("the maximum budget of year is : ",mx,"of month :",ind)
    print("the total charity of the year is: ",tot_charity(a))
    mx,i = max_travel(a)
    print("the maximum travelling of year is : ",mx,"of month :",i)
    print("the total fee  of the year is: ",tot_fee(a))
main()










