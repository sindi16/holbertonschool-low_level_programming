# A real life example for this logic of code
 You: "I'd like to check the balance of my account, please. My account number is 12345."
Bank : "Let me check my records."
The teller looks through their list of accounts, one by one.
When the teller finds account 12345, they look at the balance and say, "Your balance is $500.00."
The teller then stops checking the other accounts because they found your account.
If your account wasn't on the list, the teller would say, "Sorry, I couldn't find your account."
In simple terms, the function is like a bank teller searching through a list of accounts to find the one with the account number you provided and showing you the balance for that account.
## viewBalance: This function takes the account number and finds the corresponding client in the array. It then displays the balance of that account.
## deposit: This function finds the client by account number and adds the deposit amount to their balance.
## withdraw: This function checks if the client has enough balance before subtracting the withdrawal amount. If there’s insufficient funds, it shows an error message.