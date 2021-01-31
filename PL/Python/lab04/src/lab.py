import math
import random
import string

def task1_13():
    a = int(input("a:"))
    b = int(input("b:"))
    c = int(input("c:"))
    if (c - a) == 0:
        return -1
    print(abs(1 - a * math.pow(b, c) - a * (math.pow(b, 2) - math.pow(c, 2)) + (b - c + a) * (12 + b) / (c - a)))
""" f = task1_13()
print(f) """

def task1_23():
    lst = [1, 3, 'sdfsdf', 234, 0.324, 'dsfsdf', 'sdfsdf']
    for i in range(len(lst)):
        if (i + 1) % 2 == 0:
            print(lst[i])
""" task1_23() """

def task1_33():
    lst = [1, 3, 32543, 54, 3, 657, 78]
    mul = 1
    for i in range(len(lst)):
        if lst[i] < 10:
            mul *= lst[i]
    print(mul)
""" task1_33() """

def task1_43():
    lst = [1, 3, 32543, 54, 3, 657, 78]
    sum = 0
    for i in range(len(lst)):
        sum += lst[i]
    ar = sum / len(lst)
    print(ar)
""" task1_43() """

def task2_13():
    my_number = 13
    user_number = int(input("user_number: "))
    while user_number != my_number:
        user_number = int(input("user_number: "))
""" task2_13() """

def task2_23():
    lst = ['dsfr', 'dsfsdf', 'gddbr', 'dfgrgr', 'sdf']
    for i in range(len(lst)):
        s = lst[i]
        if s[len(lst[i]) - 1] == 'r':
            print(lst[i])
""" task2_23() """

def task2_33():
    result =''
    is_3 = False
    while (not is_3):
        for i in range(6):
            number = random.randint(0, 9)
            if number == 3:
                is_3 = True
            symbol = str(number)
            result += symbol
        if is_3 == False:
            result = ''
    print(result)
""" task2_33() """

def task2_43():
    s = 'ывамовыт'
    res = ''
    for i in range(len(s)):
       res += res 
#xz

def task3_13():
    arr = ([
        [1, 2, 3, 4, 5, 6, 7, 8],
        [8, 7, 6, 5, 4, 3, 2, 1],
        [2, 3, 4, 5, 6, 7, 8, 9],
        [9, 8, 7, 6, 5, 4, 3, 2],
        [1, 3, 5, 7, 9, 7, 5, 3],
        [3, 1, 5, 3, 2, 6, 5, 7],
        [1, 7, 5, 9, 7, 3, 1, 5],
        [2, 6, 3, 5, 1, 7, 3, 2]
    ])
    for i in range(len(arr)):
        for j in range(len(arr[i])):
            if arr[i][j] < 5:
                arr[i][j] = pow(arr[i][j], 2)
    print(arr)
""" task3_13() """

def task3_23():
    arr = ([
        [1, 2, 3, 4, 5, 6, 7, 8],
        [8, 7, 6, 5, 4, 3, 2, 1],
        [2, 3, 4, 5, 6, 7, 8, 9],
        [9, 8, 7, 6, 5, 4, 3, 2],
        [1, 3, 5, 7, 9, 7, 5, 3],
        [3, 1, 5, 3, 2, 6, 5, 7],
        [1, 7, 5, 9, 7, 3, 1, 5],
        [2, 6, 3, 5, 1, 7, 3, 2]
    ])
    print(arr)
    sum = 0 
    for i in range(len(arr)):
        for j in range(len(arr[i])):
            if ((j + 1) % 2) == 0:
                sum += arr[i][j]
        print(sum ,"\n")
        sum = 0
""" task3_23() """

def task3_33():
    arr = ([
        [1, 2, 3, 4, 5, 6, 7, 8],
        [8, 7, 6, 5, 4, 3, 2, 1],
        [2, 3, 4, 5, 6, 7, 8, 9],
        [9, 8, 7, 6, 5, 4, 3, 2],
        [1, 3, 5, 7, 9, 7, 5, 3],
        [3, 1, 5, 3, 2, 6, 5, 7],
        [1, 7, 5, 9, 7, 3, 1, 5],
        [2, 6, 3, 5, 1, 7, 3, 2]
    ])
    print(arr)
    sum1 = 0
    sum2 = 0 
    for i in range(len(arr)):
        for j in range(len(arr[i])):
            if arr[i][j] < 5:
                sum1 += arr[i][j]
            elif arr[i][j] >= 5:
                sum2 += arr[i][j]
    if sum1 > sum2:
        print("el < 5 " ,sum1)
    else:
        print("el >= 5 ",sum2)
""" task3_33() """

def task3_43():
    arr = ([
    [1, 2, 3, 4, 5, 6, 7, 8],
    [8, 7, 6, 5, 4, 3, 2, 1],
    [2, 3, 4, 5, 6, 7, 8, 9],
    [9, 8, 7, 6, 5, 4, 3, 2],
    [1, 3, 5, 7, 9, 7, 5, 3],
    [3, 1, 5, 3, 2, 6, 5, 7],
    [1, 7, 5, 9, 7, 3, 1, 5],
    [2, 6, 3, 5, 1, 7, 3, 2]
    ])
    for i in range(len(arr)):
        for j in range(len(arr[i])):
            if arr[i][j] == 5:
                arr[i][j] = 25
    print(arr)
""" task3_43() """

def task3_51():
    arr = [
    [1, 2, 3, 4, 5, 6, 7, 8],
    [8, 7, 6, 5, 4, 3, 2, 1],
    [2, 3, 4, 5, 6, 7, 8, 9],
    [9, 8, 7, 6, 5, 4, 3, 2],
    [1, 3, 5, 7, 9, 7, 5, 3],
    [3, 1, 5, 3, 2, 6, 5, 7],
    [1, 7, 5, 9, 7, 3, 1, 5],
    [2, 6, 3, 5, 1, 7, 3, 2]
    ]
    i = int(input("i: "))
    arr.pop(i)
    print(arr)
""" task3_51() """

def task3_61():
    arr = [
    [1, 2, 3, 4, 5, 6, 7, 8],
    [8, 7, 6, 5, 4, 3, 2, 1],
    [2, 3, 4, 5, 6, 7, 8, 9],
    [9, 8, 7, 6, 5, 4, 3, 2],
    [1, 3, 5, 7, 9, 7, 5, 3],
    [3, 1, 5, 3, 2, 6, 5, 7],
    [1, 7, 5, 9, 7, 3, 1, 5],
    [2, 6, 3, 5, 1, 7, 3, 2]
    ]
    arr[0], arr[len(arr) - 1] = arr[len(arr) - 1], arr[0]
    print(arr)
""" task3_61() """
    
def task3_71():
    arr = [
    [1, 2, 3, 4, 5, 6, 7, 8],
    [8, 7, 6, 5, 4, 3, 2, 1],
    [2, 3, 4, 5, 6, 7, 8, 9],
    [9, 8, 7, 6, 5, 4, 3, 2],
    [1, 3, 5, 7, 9, 7, 5, 3],
    [3, 1, 5, 3, 2, 6, 5, 7],
    [1, 7, 5, 9, 7, 3, 1, 5],
    [2, 6, 3, 5, 1, 7, 3, 2]
    ]
    i = int(input("i: "))
    j = int(input("j: "))
    if i > len(arr):
        return 0
    if j > len(arr[i]):
        return 0
    print(arr[i][j])
""" task3_71() """

def task4_13():
    s = 'C makes it easy to shoot yourself in the foot; C++ makes it harder, but when you do, it blows away your whole leg'
    s1 = ''
    for alp in s:
        if alp.isalpha():
            s1 += alp
        else:
            s1 += ' '
    l = s1.split()
    s1 = ''
    for word in l:
        if len(word) >= 5 and len(word) <= 10:
            s1 += word + ' '
    print(s1)
""" task4_13() """

def task4_23():
    my_string = "Ф;И;О;Возраст;Категория;_Иванов;Иван;Иванович;23 года;Студент 3 курса;_Петров;Семен;Игоревич;22 года;Студент 2 курса"
    l = my_string.split('_')
    for string in l:
        string = string.split(';')
        surname = string[0]
        name = string[1]
        patronomic = string[2]
        age = string[3]
        category = string[4]
        info = category + ', ' + age
        if info == "Категория, Возраст":
            info = "     О студенте"
        print("%-12s\t%-12s\t%-12s\t%-12s" % (surname, name, patronomic, info))
""" task4_23()   """

def task4_33():
    my_string = "ФИО;Возраст;Категория;_Иванов Иван Иванович;20 лет;Студент 3 курса;_Петров Семен Игоревич;22 года;Студент 2 курса;_Иванов Семен Игоревич;23 года;Студент 3 курса;_Акибов Ярослав Наумович;21 год;Студент 1 курса;_Борков Станислав Максимович;22 год;Студент 2 курса"
    l = my_string.split('_')
    for string in l:
        string = string.split(';')
        name = string[0]
        age = string[1]
        category = string[2]
        age1 = age.split()
        if age == "Возраст":
            print("%-25s\t%-12s\t%-12s" % (name, age, category))
        elif int(age1[0]) > 21:
            print("%-25s\t%-12s\t%-12s" % (name, age, category))
""" task4_33() """

def task4_4():
    s = 'Somethig makes it easy to shoot yourself in the foot'
    words = s.split()
    num_word = len(words)
    num_sym = len(s)
    print(num_sym)
    print(num_word)
""" task4_4() """

def task6_1():
    arr = [
    [1, 2, 3, 4, 5, 6, 7, 8],
    [8, 7, 6, 5, 4, 3, 2, 1],
    [2, 3, 4, 5, 6, 7, 8, 9],
    [9, 8, 7, 6, 5, 4, 3, 2],
    [1, 3, 5, 7, 9, 7, 5, 3],
    [3, 1, 5, 3, 2, 6, 5, 7],
    [1, 7, 5, 9, 7, 3, 1, 5],
    [2, 6, 3, 5, 1, 7, 3, 2]
    ]
    sum = 0
    for i in range(len(arr)):
        for j in range(len(arr[i])):
            sum += arr[i][j]
    print(sum)
""" task6_1() """

def task6_23():
    lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    for i in range(8, 3, -1):
        lst.pop(i)
    for i in range(2):
        lst.append(i)
    print(lst)
""" task6_23() """

def task6_33():
    lst = [
        [
            'ПО-4(1)',
            [
                'Андрейчиков Даниил Сергеевич',
                'Байдук Яна Алексеевна',
                'Боровский Максим Витальевич',
                'Воробей Анастасия Петровна',
                'Галанин Павел Иннокентьевич'
            ]
        ],
        [
            'ПО-4(2)',
            [
                'Грибовский Дмитрий Сергеевич',
                'Грица Александра Вячеславовна',
                'Елисеев Сергей Геннадьевич',
                'Жук Владислав Алексеевич',
                'Иваненко Иван Леонидович'
            ]
        ]
    ]
    for i in range(len(lst)):
        group = lst[i][0]
        peoples = lst[i][1]
        print(group)
        for j in range(len(peoples)):
            print(peoples[j])
""" task6_33() """

def task6_43():
    lst = [
        [
            'ПО-4(1)',
            [
                'Андрейчиков Даниил Сергеевич',
                'Байдук Яна Алексеевна',
                'Присяжнюк Андрей Витальевич',
                'Воробей Анастасия Петровна',
                'Прохоров Артем Николаевич'
            ]
        ],
        [
            'ПО-4(2)',
            [
                'Грибовский Дмитрий Сергеевич',
                'Грица Александра Вячеславовна',
                'Елисеев Сергей Геннадьевич',
                'Прокопюк Александр Алексеевич',
                'Пруцкий Иван Викторович'
            ]
        ]
    ]
    for i in range(len(lst)):
        group = lst[i][0]
        peoples = lst[i][1]
        for j in range(len(peoples)):
            name = peoples[j].split()
            if name[0][0] == "П" and name[1][0] == "А":
                print(group)
                print(peoples[j])
""" task6_43() """

def menu():
    print("1. Task 1 - ?")
    print("2. Task 2 - Строки и списки")
    print("3. Task 3 - Матрицы")
    print("4. Task 4 - Строки")
    print("6. Task 6 - Списки")
    choise = input("Task: ")
    if choise == 0:
        return
    elif choise == "1":
        task1()
    elif choise == "2":
        task2()
    elif choise == "3":
        task3()
    elif choise == "4":
        task4()
    elif choise == "6":
        task6()

def task1():
    print("1. Task 1")
    print("2. Task 2")
    print("3. Task 3")
    print("4. Task 4")
    choise = input("Task: ")
    if choise == 0:
        return
    elif choise == "1":
        task1_13()
    elif choise == "2":
        task1_23()
    elif choise == "3":
        task1_33()
    elif choise == "4":
        task2_43()
    con = input("continue? ")
    if con == "yes" or con == "Y" or con == "1":
        menu()

def task2():
    print("1. Task 1")
    print("2. Task 2")
    print("3. Task 3")
    print("4. Task 4")
    choise = input("Task: ")
    if choise == 0:
        return
    elif choise == "1":
        task2_13()
    elif choise == "2":
        task2_23
    elif choise == "3":
        task2_33()
    elif choise == "4":
        task2_43()
    con = input("continue? ")
    if con == "yes" or con == "Y" or con == "1":
        menu()

def task3():
    print("1. Task 1")
    print("2. Task 2")
    print("3. Task 3")
    print("4. Task 4")
    print("5. Task 5")
    print("6. Task 6")
    print("7. Task 7")
    choise = input("Task: ")
    if choise == 0:
        return
    elif choise == "1":
        task3_13()
    elif choise == "2":
        task3_23()
    elif choise == "3":
        task3_33()
    elif choise == "4":
        task3_43()
    elif choise == "5":
        task3_51()
    elif choise == "6":
        task3_61()
    elif choise == "7":
        task3_71()
    con = input("continue? ")
    if con == "yes" or con == "Y" or con == "1":
        menu()

def task4():
    print("1. Task 1")
    print("2. Task 2")
    print("3. Task 3")
    print("4. Task 4")
    choise = input("Task: ")
    if choise == 0:
        return
    elif choise == "1":
        task4_13()
    elif choise == "2":
        task4_23()
    elif choise == "3":
        task4_33()
    elif choise == "4":
        task4_4()
    con = input("continue? ")
    if con == "yes" or con == "Y" or con == "1":
        menu()

def task6():
    print("1. Task 1")
    print("2. Task 2")
    print("3. Task 3")
    print("4. Task 4")
    choise = input("Task: ")
    if choise == 0:
        return
    elif choise == "1":
        task6_1()
    elif choise == "2":
        task6_23()
    elif choise == "3":
        task6_33()
    elif choise == "4":
        task6_43()
    con = input("continue? ")
    if con == "yes" or con == "Y" or con == "1":
        menu()
menu()

#защита
""" x = complex(1, 2)
print(x)
y = complex(3, 4)
print(y)
z = x + y
print(z)
z = x * y
print(z)
z = x / y
print(z)
print(x.imag)
print(x.real)
if x == y:
    print(112342)
y = abs(y)
print(y) """









