str = ""
while True:
    str = input()
    if str == "EOI": break
    str = str.lower()
    if str.find("nemo") == -1: print("Missing")
    else : print("Found")
