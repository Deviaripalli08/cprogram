amount=int(input("enter the amount"))
five_hundred_notes=amount//500
remainder_amount=amount%500
hundred_notes=remainder_amount//100
remainder_amount=amount%100
fifty_notes=remainder_amount//50
reminder_amount=amount%50
ten_notes=remainder_amount//10
reminder_amount=amount%10
print("five hundred notes(500):",five_hundred_notes)
print("hundred notes(100):",hundred_notes)
print("fifty notes(50):",fifty_notes)
print("ten notes(10):",ten_notes)
