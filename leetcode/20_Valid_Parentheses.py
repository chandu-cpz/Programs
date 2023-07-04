strin="([]){}"
def validator(s):
    for i in range(0, len(s)):
        if(len(s) ==0):
            return True
        if(len(s)%2!=0):
            return False
        if(s[i] ==")"):
            if(s[i-1] == "("):
                return validator(s[:i-1]+s[i+1:])
            else:
                return False
        elif(s[i] == "}"):
            if(s[i-1] == "{"):
                return validator(s[:i-1]+s[i+1:])
            else:
                return False
        elif(s[i] == "]"):
            if(s[i-1] == "["):
                return validator(s[:i-1]+s[i+1:])
            else:
                return False


if(validator(strin)):
    print("valid parenthesis")
else:
    print("not valid parenthesis")
                        