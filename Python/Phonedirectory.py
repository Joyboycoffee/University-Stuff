def contact_list():
    contact_book = {}

    while True:
        print("--- Contact Book ---")
        print("1.Add New Number")
        print("2.Update Or Remove contact")
        print("3.View Contacts")
        print("4.EXIT")

        choice = input("Enter your choice:")

        if choice == '1':
            name = input("Enter the name:")
            number = int(input("enter the number"))
            contact_book[name] = number
            print(f"Contact {name} saved successfully")

        if choice == '2':
            print("---Current Contacts---")
            for name,number in contact_book.items():
             print(f"{name}: {number}\n")


            name = input("Enter name to update or remove : ")
            if name in contact_book:
                action = input("TYPE 'u' TO UPDATE OR 'r' TO REMOVE: ").lower()
                if action == "u":
                    new_name = input("Enter the new name of user {name}:")
                    contact_book[name] = new_name
                    print("---CONTACT UPDATED---")

                if action == "r":
                    del contact_book[name]
                    print("---Contact Removed---")
            else:
                print("---Name not found in contact book.---")

        if choice == "3": 
           if not contact_book:
                print("Contact Book Empty!!")
           else:
                print("---Current Contacts---")
                for name,number in contact_book.items():
                    print(f"{name}: {number}\n")

        if choice == '4':
            print("Exiting program!!")
            break

contact_list()