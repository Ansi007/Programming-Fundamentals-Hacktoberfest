#Celsius to Fahrenhiet series
def TempList():
    C = 1
    while C <= 100:
        F = (9/5)*C + 32
        F = round (F , 1)
        print(C,"°C =",F,"°F",)
        C = C + 1
    return 0    


def main():
    TempList()


main()