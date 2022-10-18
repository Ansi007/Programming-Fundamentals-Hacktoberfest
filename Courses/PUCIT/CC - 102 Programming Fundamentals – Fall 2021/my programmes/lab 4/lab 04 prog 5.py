def mag_dat(mon , day , digi_year):
    if(mon * day == digi_year):
        print("date is magic")
    else:
        print("date is not magic")
    return None
def main():
    x = int(input("enter the month in number"))
    y = int(input("enter the day in number"))
    z = int(input("enter the last two digits of year"))
    mag_dat(x , y , z)
main()

