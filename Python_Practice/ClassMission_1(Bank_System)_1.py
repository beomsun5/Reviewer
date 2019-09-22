class count:
    person = 1
    money = 0
    charge = 0
    name = "ABC"

    def __init__(self, name, money):
        self.name = name
        self.money = money
        count.name = name

    def get_info(self, name):
        self.name = name
        count.person += 1

    def increase(self, money_up):
        if( money_up >= 50000 ):
            self.money += (0.9 * money_up)
            charge = 0.1 * money_up
        else:
            self.money += money_up

    def decrease(self, money_down):
        if ( money_down <= self.money ):
            self.money -= money_down
            print("%s원을 출금합니다. 현재 잔액은 %s원입니다."%(putout, user.money))
        else:
            print("잔액이 부족합니다. 다시 한번 확인 부탁드립니다.")

    def show_persons(self):
        print("현재 해당 계좌를 사용하는 사람들은 총 %s명입니다."%count.person)
        print("현재 해당 계좌의 주인은 %s입니다. 그리고 현재 잔액은 %s원입니다."%(count.name, count.money))


user = count("BBS", 10000)
menu = int(input("\n안녕하십니까 BS은행입니다. 메뉴를 입력하세요.\n1. 입금\n2. 출금\n3. 계좌 이용자 등록\n4. 사용자 확인\n5. 종료\n선택할 메뉴 : "))

while True:
    if (menu == 1):
        putin = int(input("입금할 금액을 입력하세요 : "))
        user.increase(putin)
        print("%s원을 입금하셨습니다. 현재 잔액은 %s원입니다."%(putin, user.money))
        menu = int(input("안녕하십니까 BS은행입니다. 메뉴를 입력하세요.\n1. 입금\n2. 출금\n3. 계좌 이용자 등록\n4. 사용자 확인\n5. 종료\n선택할 메뉴 : "))

    elif (menu == 2):
        putout = int(input("출금할 금액을 입력하세요 : "))
        user.decrease(putout)
        menu = int(input("안녕하십니까 BS은행입니다. 메뉴를 입력하세요.\n1. 입금\n2. 출금\n3. 계좌 이용자 등록\n4. 사용자 확인\n5. 종료\n선택할 메뉴 : "))
            
    elif (menu == 3):
        otheruser = input("계좌 이용자의 이름을 입력하십시오 : ")
        user.get_info(otheruser)
        menu = int(input("안녕하십니까 BS은행입니다. 메뉴를 입력하세요.\n1. 입금\n2. 출금\n3. 계좌 이용자 등록\n4. 사용자 확인\n5. 종료\n선택할 메뉴 : "))

    elif (menu == 4):
        user.show_persons()
        menu = int(input("안녕하십니까 BS은행입니다. 메뉴를 입력하세요.\n1. 입금\n2. 출금\n3. 계좌 이용자 등록\n4. 사용자 확인\n5. 종료\n선택할 메뉴 : "))
        
    elif (menu == 5):
        print("은행 업무를 종료합니다.")
        exit(1)
        
    else:
        print("잘못된 메뉴 번호를 입력하셨습니다. 올바른 번호를 입력해주시면 감사하겠습니다.")
        menu = int(input("안녕하십니까 BS은행입니다. 메뉴를 입력하세요.\n1. 입금\n2. 출금\n3. 계좌 이용자 등록\n4. 사용자 확인\n5. 종료\n선택할 메뉴 : "))
