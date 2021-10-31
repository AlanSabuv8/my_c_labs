while True :
    try:
        user=input('enter a number: ')
        userdata=int(user)
    except ValueError:
        print('input is not a number!!!')
    else:
        break        